const fs = require("fs");
const { Module } = require("module");

const addData = (data)=>{

    const alldata = getData()


    alldata.push(data)
    const mydata = JSON.stringify(alldata)
    fs.writeFile("TODO.json",mydata,(data)=>{
        console.log("ss");
    })

}


const viewfile = ()=>{
    const alldata = getData()
    console.log(alldata);
}

const getData = ()=>{
    try {
        const data =fs.readFileSync("TODO.json","utf-8")
        const mydata = JSON.parse(data)
        return mydata
        
    } catch (error) {
      return []
    }
}



module.exports={addData,getData}