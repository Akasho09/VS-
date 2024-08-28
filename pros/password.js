let gbox =document.querySelector("#click");
let gpswd =document.querySelector("#password");
let inputlength = document.querySelector("#inputlength");
let length=document.getElementById('length-input').value;
inputlength.innerText = " Password Length : " + length;
let meter=document.getElementById('length-input');
let strength =document.getElementById("clr");
let password ="";

mchange=()=>{
    length=document.getElementById('length-input').value;
    inputlength.innerText = " Password Length : " + length;
}
meter.addEventListener("change" , mchange);

let randomp = (pass)=>{
for (let i=0;i<length;i++){
let k= Math.floor(Math.random()*93)+33;
if ( (document.querySelector("#c1").checked===true) && (document.querySelector("#c2").checked==true) && 
   (document.querySelector("#c3").checked==1) &&  (document.querySelector("#c4").checked==1) )
   {
   pass = "lrakhlepassword";
    return pass;
}
if(document.querySelector("#c2").checked==true){
if (k>=97 && k<=122){
    i--;
    continue;
}}
if(document.querySelector("#c3").checked==1){
    if (k>=48 && k<=57){
    i--;
    continue;
}}
if(document.querySelector("#c4").checked==1){
    strength.style.backgroundColor="red";
    if ((k>=33 && k<=47) || (k>=58 && k<=64) || (k>=91 && k<=96) || k>122){
    i--;
    continue;
}}
if(document.querySelector("#c1").checked==true){
    if (k>=65 && k<=90){
        i--;
        continue;
    }}
    
pass+=String.fromCharCode(k);
}
return pass ;
}


gbox.addEventListener("click", () =>{
strength.style.backgroundColor="rgb(0, 247, 103)";
gpswd.innerText=randomp(password);

})