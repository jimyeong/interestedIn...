const {DataStore} = require("notarealdb");
const store = new DataStore("./data");

module.exports = {
    companies :store.collection("companies"),
    job :store.collection("jobs"),
    users :store.collection("users"),
}