const express = require("express");
const app = express();
const PORT = 8000
const mongoose = require("mongoose");
app.use (express.json())

const dburl = "mongodb+srv://jatin:jatin@cluster0.zui6fku.mongodb.net/Modual_5?retryWrites=true&w=majority"

mongoose.connect(dburl).then(() => {
  console.log("DB connected..");
}).catch((error) => {
  console.log(error);
})

const taskrouter = require("./router/taskrouter");
app.use("/", taskrouter);
const shoprouter = require("./router/shoprouter");
app.use("/", shoprouter);
  
app.listen(PORT, () => {
  console.log("server running on port :" + PORT);
})