// const cars = ["Saab", "Volvo", "BMW"];
// console.log(cars);
//  crt = ( ()=>{
//     let fruits = ["Banana", "Orange", "Apple", "Mango"];
//     console.log(fruits.constructor);
//     let fruit = fruits.at(2);
//     console.log(fruit);
//     fruit = fruits.at();
//     console.log(fruit);
// })
// crt();

const fruits = ["Banana", "Orange", "Apple", "Mango","grapes"];
// fruits.fill("Kiwi"); //Fills all the elements with a value
fruits.fill("Kiwi", 4, 5);
console.log(fruits);

// array.copyWithin(target, start, length)
// console.log(fruits.copyWithin(2, 0));  //Copy to index 2, all elements from index 0:
// console.log(fruits.copyWithin(2, 0, 3)); //Copy to index 2, the elements from index 0 , 3 elements:
//The copyWithin() method overwrites the existing values.


// JavaScript Array entries()
// const f = fruits.entries();
// for (let x of f) {
//     console.log(x);
// }
// for (let x of fruits) {
//     console.log(x);
// }

// JavaScript Array every()
//every() returns true if all elements in an array pass a test (provided as a function).
function checkAge(age) {
    return( age > 18 );
  }  
const ages = [32, 33, 16, 40];
console.log(ages.every(checkAge));


console.log(ages.filter(checkAdult));//Return an array of all values in ages[] that are 18 or over:
//The filter() method creates a new array filled with elements that pass a test provided by a function.
function checkAdult(age) {
  return age >= 18;
}


console.log(ages.find(checkAge));//The find() method returns the value of the first element that passes a test.