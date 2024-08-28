let b=document.getElementById("btn1");
let currentmode="light";
let bdy=document.getElementById("bddy");
let n=document.querySelector("#name");
// b.onclick = (evt1) => {
// // console.log("clicked!");
// // console.log(evt1);
// console.log(evt1.type);
// };
// b.onmouseover = (evt2) => {
//     // console.log("mouse over !");
//     // console.log(evt2);
//     console.log(evt2.type);
// };

let eventi = ()=>{
    if( currentmode=="light"){
        currentmode="dark";
        bdy.style.backgroundColor ="black";
        b.innerText="Light Mode";
        b.style.backgroundColor="black";
        bdy.style.color="white";      
        b.style.color="white";
        n.style.backgroundColor="#2e1c2b"
    }
    else 
    {
        currentmode="light";
        bdy.style.backgroundColor = "white";
        b.innerText="Dark Mode";
        b.style.backgroundColor="white";
        bdy.style.color="black";
        b.style.color="black";
        n.style.backgroundColor="#d7d9ce"

    }
}
//if multiple events are to be added to sane event we use eventlistner
b.addEventListener("click",eventi);
// b.removeEventListener("click",eventi);

                    /* -----------------------------------  */
let userscore=0;
let compscore=0;

let ch=document.querySelectorAll(".choice");
let us = document.querySelector("#user-score");
let cs=document.querySelector("#comp-score");
let ms =document.querySelector("#msg");
let ana=document.querySelector("#analysis");

const compchoice = ()=>{
let array= ["rock" , "paper" ,"scissor"];
let k=Math.floor(Math.random()*3);
return array[k];
}

const playgame = (userchoice)=> {
let computerchoice = compchoice();
console.log("computer choice is " , computerchoice);
ana.innerText =  "Clicked choice was " + userchoice + " & \n  Computer choice is "  + computerchoice ;

//  "computer choice is " , computerchoice' ;
if(userchoice===computerchoice){
    return -1;
}
else if (userchoice==="rock"){
if ( computerchoice==="scissor")
 return 1 ;
else{
    return 0;
}
}
else if (userchoice==="paper"){
    //p s
return  computerchoice==="rock" ? 1 : 0;
}
else{
    return  computerchoice==="paper" ? 1 : 0;
}
}

ch.forEach((choice)=>{
choice.addEventListener("click" , ()=>{
const userchoice =choice.getAttribute("id");
console.log("clicked choice is " , userchoice);
let t = playgame (userchoice);
if (t==1){
    userscore++;
    ms.innerText= " WOW! You Won";
    ms.style.backgroundColor="green";
    us.innerText=userscore;
}
    else if (t==0){
        compscore++;
   ms.innerText = " OOPS! You Lost";
   ms.style.backgroundColor="red";
   cs.innerText= compscore;
    }
    else{
        ms.innerText= "DRAW";
        ms.style.backgroundColor="rgba(255, 255, 0, 0.345)";

    }

})
})