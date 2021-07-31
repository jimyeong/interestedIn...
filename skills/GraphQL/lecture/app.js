const {gql, ApolloServer} = require("apollo-server");

// type/model/interface
const typeDefs = gql`
    scheme{
        query: Query
    }

    type Query{
        greeting: String
    }
`


// api data return function
const resolvers = {
    Query: ()=>"Hello Apollo world"
};

const server = ApolloServer({typeDefs, resolvers});
server.listen({port:9000}).then((serverInfo)=>{
    console.log(`server is running on port ${serverInfo.port}`);
})