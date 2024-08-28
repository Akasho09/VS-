const url ="https://cat-fact.herokuapp.com/facts";
// const url ="https://andruxnet-random-famous-quotes.p.rapidapi.com";
// const url ="http://example.com/movies.json";
let btn =document.getElementById("btn");
let faxs=document.getElementById("faxss");
async function  getfacts (resolve,reject){
    console.log("getting data .......");
    let response = await fetch (url);
    console.log(response);
    let data = await response.json();
    console.log(data);
    let k=(Math.floor(Math.random()*5));
    console.log(data[k].text);
    faxs.innerText=(data[k].text);
}
btn.addEventListener("click" , getfacts );
// getfacts();
document.getElementsByTagName("p")[1].innerText="yes now";