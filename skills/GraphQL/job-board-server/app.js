const express = require("express");
const app = express();
const {ApolloServer, gql} = require("apollo-server-express");
const fs = require("fs");


const typeDefs = gql(fs.readFileSync("./schema.graphql", {encoding: "utf8"}));
const resolver = require("./resolvers");

const apolloServer = new ApolloServer(typeDefs, resolver);
apolloServer.applyMiddleware({app, path="/graphql"});


app.listen(5000, ()=>{
    console.log("port is running on port : 5000");
})