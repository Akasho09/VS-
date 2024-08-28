// class humans {
//     constructor (proffesion) {
//     this.species = "Homo-Sapiens";
//     this.proffesion = proffesion;
//     }
//   eat(){
// console.log ("can eat");
// }
// }
// let akash = new humans("akash");
// class engineer extends humans {
//     constructor (branch,name) {
//         super("engineer");
//         this.branch = branch;
//         this.name = name;
//         }
//     work (){
//         super.eat();
//         console.log("can work");
//     }
// }
// let ahmad = new engineer("CSE","ahmad");
// console.log(ahmad);

// class user {
//     constructor (name,email){
//     this.name=name;
//     this.email=email;
//      }
//      viewdata () {
//         console.log("Name : ");
//         console.log("Email : ");
// }
// }
// akash = new user ("akash" , "aakashbwd@gmail.com");
// ahmad = new user ("ahmad" , "ahmad@gmail.com");

/** CALLBACK HELL **/
// function getdata(id,getnextdata){
//     setTimeout( ()=>{
//         console.log("data" , id);
//         if (getnextdata){
//             getnextdata();
//         }
//     },1000);

// }
// // getdata(1);
// // getdata(2);
// // getdata(3);

// getdata(1, ()=>{
//     getdata(2 , ()=>{
//         getdata(3);
//     });
// });

function getdata2 (id){
    return new Promise ((resolve , reject)=>{
    setTimeout(()=>{
        console.log("data2" , id);
        // reject("rejectedd");
        resolve("sucessed");
    },1000);
});
}
/** PROMISE CHAIN **/
// console.log("getting data 12...");
// getdata2(12)
// .then(()=>{
// console.log("getting data 13...");
// return getdata2(13);
// })
// .then(()=>{
//     console.log("getting data 14...");
//     return getdata2(14); 
// })
// .then((res)=>{
//     console.log(res);
// });

// async function gettingdata() {
//     console.log("getting data 12...");
//     await getdata2(12);
//     console.log("getting data 13...");
//     await getdata2(13);
//     console.log("getting data 14...");
//     await getdata2(14);
// }
// gettingdata();

(async function () {
    console.log("getting data 12...");
    await getdata2(12);
    console.log("getting data 13...");
    await getdata2(13);
    console.log("getting data 14...");
    await getdata2(14);
})();