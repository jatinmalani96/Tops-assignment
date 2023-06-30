const router = require("express").Router()
const User = require("../modal/user")
const bcrypt = require("bcryptjs")
const auth = require("../middleware/auth")


router.get("/",(req,resp)=>{
    resp.render("reg")
})

router.get("/login",(req,resp)=>{
    resp.render("login")
})

router.post("/do_register",async(req,resp)=>{
try {
    const user = new User({uname:req.body.uname,email:req.body.email,pass:req.body.pass})
    await user.save()
    resp.render("reg",{msg:"Successfull Singup..."})
} catch (error) {
    resp.send(error)
}
})

router.get("/viewuser",auth,async(req,resp)=>{
    try {

        const data = await User.find()
        resp.render("view",{userdata:data})
    } catch (error) {
        resp.send(error)
    }
})

router.get("/deleteuser",async(req,resp)=>{
    try {
        const id = req.query.uid
        await User.findByIdAndDelete(id)
        resp.redirect("viewuser")
    } catch (error) {
        resp.send(error)
    }
})

router.get("/updateuser",async(req,resp)=>{
    try {
        const id = req.query.uid
        const data = await User.findOne({_id:id})
        resp.render("update",{data: data})
      
    } catch (error) {
        resp.send(error)
    }
})

router.post("/do_updata",async(req,resp)=>{
    try {
        const id = req.body.id
        await User.findByIdAndUpdate(id,{uname:req.body.uname,email:req.body.email,pass:req.body.pass})
        // console.log(req.body.pass);
      
        resp.redirect("viewuser")
      
    } catch (error) {
        resp.send(error)
    }
})

router.post("/do_login",async(req,resp)=>{
    try {
       const user = await User.findOne({email: req.body.email})
      const isMach = await bcrypt.compare(req.body.pass,user.pass)
        if(isMach){

            const token = await user.generateToken()

            resp.cookie("jwt",token)
            resp.redirect("viewuser")
        }else{
            resp.render("login",{msg:"invalid user and password...."})
        }

    } catch (error) {
        resp.render("login",{msg:"invalid user and password...."})
    }
})

router.get("/logout",auth,async(req,resp)=>{
    try {
        const user = req.user
        const token = req.token
    
        user.Tokens = user.Tokens.filter(ele=>{
            return ele.token!=token
        })
        user.save()
        
        
        resp.clearCookie("jwt")
        resp.render("login")
    
    } catch (error) {
        console.log(error);
    }
    
})


router.get("/logoutall",auth,async(req,resp)=>{
    try {
        const user = req.user
        const token = req.token
    
        user.Tokens = []
        user.save()
        
        
        resp.clearCookie("jwt")
        resp.render("login")
    
    } catch (error) {
        console.log(error);
    }
    
})

module.exports=router