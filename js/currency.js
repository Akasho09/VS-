url = "https://cdn.jsdelivr.net/gh/fawazahmed0/currency-api@1/latest/currencies";
let selects=document.querySelectorAll("#main select");
let main=document.getElementsByClassName("imgsss");
let btn =document.querySelector("#convert");
let fromcurr =document.querySelector("#select1 ");
let tocurr =document.querySelector("#select2 ");
let msg = document.querySelector("#msg");
let xchng =document.querySelector("#main button");
let date =document.querySelector("#date");
let b=document.getElementById("btn12");
let body =document.getElementById("body");
let form =document.getElementById("form");
let currentmode="light";

for (let select of selects){
for (code in countryList)
{
let newoption = document.createElement("option");
newoption.innerText=code;
newoption.value =code;
if (select.id==="select1" && code==="USD"){
    newoption.selected="selected";
}
if (select.id==="select2" && code==="INR"){
    newoption.selected="selected";
}
select.append(newoption);
}
select.addEventListener("change" ,(evt)=>{
    updateflag(evt.target);
})
const updateflag =((element)=>{
    let t=countryList[element.value];
    let newsrc = `https://flagsapi.com/${t}/flat/64.png`;
    let img = element.parentElement.querySelector("img");
    img.src=newsrc;
    })
}

btn.addEventListener("click" , (evt)=>{
       evt.preventDefault();
       rest();
    })

 rest = async ()=>{
    let am = document.querySelector("#amount input");
    let amount = am.value;
    if (amount ==""|| amount <0){
    amount=1;
    }
 urlf = `${url}/${fromcurr.value.toLowerCase()}/${tocurr.value.toLowerCase()}.json`;
 let response = await fetch(urlf);
 let data = await response.json();
 let rate =data[tocurr.value.toLowerCase()];
 let finalamount = amount*rate;
 msg.innerText=`${amount} ${fromcurr.value} = ${finalamount} ${tocurr.value}`;
}
window.addEventListener("load",rest());
// xchng.addEventListener("click", ()=>{
//         let temp =fromcurr.value;
//         fromcurr.value=tocurr.value;
//         tocurr.value=temp;
// });
date.addEventListener("click" ,()=>{
date.innerText=Date();
});

let eventi = ()=>{
    if( currentmode==="light"){
        currentmode="dark";
        body.style.backgroundColor ="#242f40";
        b.innerText="Light Mode";
        b.style.backgroundColor="#242f40";
        body.style.color="white";      
        b.style.color="white";
        form.style.backgroundColor="#363636";
        fromcurr.style.backgroundColor="#363636";
        tocurr.style.backgroundColor="#363636";
        tocurr.style.color="white";
        fromcurr.style.color="white";
        xchng.style.color="white";
        date.style.backgroundColor="#242f40";
        date.style.color="white";
        // n.style.backgroundColor="#2e1c2b"
    }
    else 
    {
        currentmode="light";
        body.style.backgroundColor = "#f4e4ba";
        b.innerText="Dark Mode";
        b.style.backgroundColor="#f4e4ba";
        body.style.color="black";
        b.style.color="black";
        form.style.backgroundColor="#d6ccc2";
        fromcurr.style.backgroundColor="#d6ccc2";
        tocurr.style.backgroundColor="#d6ccc2";
        tocurr.style.color="black";
        fromcurr.style.color="black";
        xchng.style.color="black";
        date.style.backgroundColor="#f4e4ba";
        date.style.color="black";
        // n.style.backgroundColor="#d7d9ce"

    } }
b.addEventListener("click",eventi);