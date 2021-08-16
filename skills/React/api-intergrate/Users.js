import axios from 'axios';
import React, {useState, useEffect, useReducer} from 'react';
import useAsync from './useAsync';
import User from "./User"
async function getUsers(){
    const response = await axios.get(
        'https://jsonplaceholder.typicode.com/users'
    );
    return response.data;
}
function Users(){
    const [userId, setUserId] = useState()
    const [state, refetch] = useAsync(getUsers, []);
    const {loading, data: users, error} = state;
    if(loading) return <div>로딩중....</div>
    if(error) return <div>에러가 발생했습니다.</div>
    if(!users) return null;
    return (
        <React.Fragment>
            <ul>
                {users.map((user, key)=>{
                    return <li style={{cursor: "pointer"}} onClick={()=>setUserId(user.id)} key={user.id}>{user.username} ({user.name})</li>
                })}
            </ul>
            <button onClick={refetch}>다시 불러오기</button>
            {userId && <User id={userId} />}
        </React.Fragment>
    )
}

export default Users;