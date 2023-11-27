const http =require('http');

const server =http.createServer((req,res)=>{
    console.log(req.url);//console.log(req.mothod)//req.headers
    process.exit();
})
server.listen(3000);