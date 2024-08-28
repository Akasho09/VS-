function sum(a,b){
    return a+b;
}
let mult = (a,b)=>{
    return a*b;
}
console.log(sum(1,7));
console.log(mult(1,7));

let arr =[10,2,7,4,5];
arr.forEach(function print (i){ //higher order function--> return another function or takes function as input
console.log(i);
}
)
arr.forEach(print = (i)=>{
    console.log(i);
})
arr.forEach((i)=>{
    console.log(`square of ${i} is ${i*i}`);
})
let sting =["akash" , "ahmad " ,"malik" ,"waripora"];
sting.forEach((i,idx,sting)=>{
    console.log(i.toUpperCase(),idx,sting);
})
let squareArray = arr.map((val,idx,arr)=>{
    return val,idx,arr;
})
console.log(squareArray);

let evenArr = arr.filter((i)=>{
    return i%2==0;
})
console.log(evenArr);

let sumArr= arr.reduce((prev,curr)=>{
    return prev+curr;
})
console.log("sumArr = " ,sumArr);
let biggestNum = arr.reduce((prev,next)=>{
    return prev>next ?prev : next;
})
console.log("biggestNum = ", biggestNum );

// let txt = "We are \"Vikings\""; //escape characters
// alert(txt);
//  txt = 'We are "Vikings"'; 
// alert(txt);
let txt = "I can eat bananas all day";
let x = txt.slice(10,17);console.log(x);
const cars = ["Saab", "Volvo", "BMW"];
let y = cars[1];console.log(y);
const fruits = ["Banana", "Orange", "Apple", "Kiwi"];
fruits.sort(); //alphabatically sorting of array
console.log(fruits);
const d = Date();
alert(d);