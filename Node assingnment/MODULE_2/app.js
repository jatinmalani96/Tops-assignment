const yargs = require("yargs")
const file = require("./file")

yargs.command({
    command : "TODO",
    builder : {
        name : {
            type : String
        },
        age :{
            type : Number
        }
    },
    handler : function(argv){
        const data ={
            name : argv.name,
            age : argv.age
        }
        file.addData(data)
    }

})

yargs.argv