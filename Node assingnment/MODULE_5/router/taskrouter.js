const router = require("express").Router()
const Task = require("../modal/task")

router.get("/task", async (req, resp) => {
    try {
        const data = await Task.find();
        resp.send(data)
    } catch (error) {
        resp.send(error)
    }
});
router.post("/task", async (req, resp) => {
    try {
        const task = new Task(req.body)
        const data = await task.save()
        resp.send(data)
    } catch (error) {
        resp.send(error);
    }
});
router.delete("/task/:id", async (req, resp) => {
    const id = req.params.id
    try {
        const data = await Task.findByIdAndDelete(id);
        resp.send(data)
    } catch (error) {
        resp.send(error)
    }
});

// put and patch same
router.put("/task/:id", async (req, resp) => {
    const id = req.params.id
    // console.log(id);
    try {
        const data = await Task.findByIdAndUpdate(id, req.body);
        resp.send(data)
    } catch (error) {
        resp.send(error)
    }
});

module.exports = router