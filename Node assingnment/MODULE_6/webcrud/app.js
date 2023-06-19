const express = require("express")
const app = express()
const mongoose = require("mongoose")
const path = require("path")
const hbs = require("hbs")
require("dotenv").config()
const PORT = process.env.PORT
const DB_URL = process.env.DB_URL
var bodyParser = require('body-parser')
var cookieParser = require('cookie-parser')

mongoose.connect(DB_URL).then(()=>{
    console.log("DB connected....");
}).catch(err=>{
    console.log(err);
})

const viewpath = path.join(__dirname,"./temp/view")
const partialpath = path.join(__dirname,"./temp/partials")
const publicpath = path.join(__dirname,"./public")
app.use(bodyParser.urlencoded({ extended: false }))
app.use(cookieParser())

app.set("view engine","hbs")
app.set("views",viewpath)
hbs.registerPartials(partialpath)
app.use(express.static(publicpath))
app.use(bodyParser.json())


app.use("/",require("./router/userrouer"))


app.listen(PORT,()=>{
    console.log("server running on PORT : "+PORT);
})

