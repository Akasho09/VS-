let i=1;
j=2;
for(;i<=5;){
    console.log("akash");
j=j+2;
i++;
}
console.log(i);
console.log(j);
let s="akash ahmad";
let l=0; 
for (let i of s ){
    console.log("i = ",i);
l++;
}
console.log("size of s = ",l);
let student = {
name :"akash",
age:20,
cgpa:7.2
}
for (let v in student ){
    console.log("v = ",v ,"   value" , student[v]);
}
console.log( "the name of student is ", student.name , "& his age is ",student.age );
console.log(`Using templete literals \nthe name of student is ${student.name} & his age is ${student.age}`)
// console.log("---GAME----");
// let a=9;
// while(true){
// let b=prompt("Enter number");
// if(b==a)
// break;
// }
str = '     akash     malik';
str.toUpperCase();
console.log(str);
console.log(str.toUpperCase());
console.log(str.trim());
s ='akashkk'
console.log(s.slice(2,4)); //2&3 only
console.log(str.concat(s));
console.log(str+s);
console.log(s.replace('k','z'));
console.log(s.replaceAll('k','z'));
console.log(s.charAt(3));
// k=prompt("Enter your name");
// l=0; 
// for (let i of k ){
// l++;
// }
// console.log(`Username generated is  @${k}${l}`);
// console.log(`Username generated is  @${k}${k.length}`);
//ARRAYS
let marks =[3,5,7,8]; //array is object & mutable wrt string
console.log(marks);
console.log(marks.toString());
let deleteditem=marks.pop();
console.log(marks);
console.log(deleteditem);
marks.unshift(1,9);// add iems to array at start
console.log(marks);
marks.shift();
console.log(marks);
console.log(marks.slice(1,4));
marks.splice(2,2,10,11);// from 2 ,2 elements and 10,11 are added
console.log(marks);