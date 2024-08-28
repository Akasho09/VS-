window.console.log("hello!");
console.log(document.body.childNodes[3]);
console.dir(document.body.childNodes[3]);
// document.body.style.background ="green";
// document.body.innerText ="akash";
mh = document.getElementById("mainheading");
console.log(mh);
console.dir(mh);
hs =document.getElementsByClassName("headss"); //html collection or array 
console.log(hs);
console.dir(hs);
console.log(document.querySelector("#mainheading"));
console.log (document.querySelectorAll(".headss"));
console.log (document.querySelectorAll("p"));//returns node list

console.log(document.querySelector("#mainheading").tagName);

let pass= document.querySelector("div");
console.log(pass.innerHTML);
console.log(pass.innerText);
console.log(pass.textContent); //shows hidden text also

document.querySelector("#h").innerText+= " FROM AKASH";
//DOM Manipulation , Attributes
console.log(document.querySelector("button").getAttribute("id"));
document.querySelector("button").setAttribute("class" ,"buttonset"); 
document.querySelector("button").setAttribute("id" ,"b2"); 

let sbox =document.querySelector("#sgn");
sbox.innerText="Enter you details!";
let box1=document.createElement("button");
box1.innerText="sign in";
sbox.prepend(box1);

let box2=document.createElement("button");
box2.innerText="sign up";
sbox.after(box1); // only one time used
sbox.before(box2);
box2.remove();
sbox.append(box2);

let c2 =document.createElement("p");
c2.className=c2;
c2.innerText="this is js para";
document.querySelector(".para1").append(c2);

// document.querySelector(".para1").setAttribute("class","neww2"); //class replaces
document.querySelector(".para1").classList.add("neww2"); //class adds
console.log(document.getElementsByClassName("para1"));
console.log(document.getElementsByClassName("neww2"));

// c2.setAttribute("id" , "c3");
