const express = require("express");
const app = express();
const PORT = 3000;
const path=require("path")
 
const viewspath=path.join(__dirname,"./temp/views")
const publicpath=path.join(__dirname,"./public")

app.set("view engine","hbs");
app.set("views",viewspath)
app.use(express.static(publicpath))
app.get("/",(req,resp)=>{
    resp.render("index")
})
   

app.listen(PORT, () => {
  console.log("server are Running : " + PORT);
});