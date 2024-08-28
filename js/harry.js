let animal ={
    eats:true
};

let rabbit ={
    jumps:true
};
console.log(rabbit);

// extending properties of animal to rabbit 
// rabbit.__proto__= animal;
Object.setPrototypeOf(rabbit, animal);
let [x , y , ...rest] = [1 ,2 , 3 , 4 , 5, 6];
console.log(x,y,rest); // ... is spread operator
// let sum1 = (sum(...rest));
console.log(...rest);
