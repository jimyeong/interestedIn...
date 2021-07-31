const {gql, ApolloServer} = require("apollo-server");


// resolver의 타입/인터페이스/모델이다
const typeDefs=gql`
    schema{
        query: Query
    }
    type Query{
        greeting: String
    }
`;


const resolvers = {
    Query : {
        greeting: ()=>'Hello GraphQL world'
    }
}

const server = new ApolloServer({typeDefs, resolvers});
server.listen({port: 9000}).then((serverInfo) =>{
    console.log(`Server is running on ${serverInfo.url}`);
});

