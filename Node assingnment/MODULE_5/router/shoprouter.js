const router = require("express").Router()
const Shop = require("../modal/shop")

router.get("/shop", async (req, resp) => {
    try {
        const data = await Shop.find();
        resp.send(data)
    } catch (error) {
        resp.send(error)
    }
});
router.post("/shop", async (req, resp) => {
    try {
        const task = new Shop(req.body)
        const data = await task.save()
        resp.send(data)
    } catch (error) {
        resp.send(error);
    }
});
router.delete("/shop/:id", async (req, resp) => {
    const id = req.params.id
    try {
        const data = await Shop.findByIdAndDelete(id);
        resp.send(data)
    } catch (error) {
        resp.send(error)
    }
});
router.put("/shop/:id", async (req, resp) => {
    const id = req.params.id
    try {
        const data = await Shop.findByIdAndUpdate(id, req.body);
        resp.send(data)
    } catch (error) {
        resp.send(error)
    }
});

module.exports = router