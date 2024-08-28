console.log("athar");
fullname ="akash";
console.log(fullname);
// VARIABLES
let name = "akash";
console.log(name);
age =1;
console.log(age);
age="akash";
console.log(age);
var ak=2;
console.log(ak);
var ak =5;     // global variable
console.log(ak);
const pi=3.14;
console.log(pi);
{
    let a=8;
    console.log(a);
    console.log(ak);
}
{
    let a=78;
    console.log(a);
    // block variable
}
//DATA TYPES
console.log("---PRIMITIVE DTs---");
let a=10;    console.log(a);console.log(typeof a);
a="akash";    console.log(a);console.log(typeof a);
a=false;    console.log(a);console.log(typeof a);
let b;    console.log(b);console.log(typeof b);
b=null;    console.log(b);console.log(typeof b);
// a=BigInt("123");    console.log(a);console.log(typeof a);
// a=Symbol("ak!");    console.log(a);console.log(typeof a);
console.log("---NON-PRIMITIVE DTs---");
const studentdata = {
    fullName : "akash",
    cgpa:8.2,
    ispass:true,
};
console.log(typeof studentdata);
console.log(studentdata);
console.log(studentdata ["cgpa"]);
console.log(studentdata.cgpa);
studentdata.cgpa++; //const object key can be updated
console.log(studentdata.cgpa);
// ARTHIMATIC OPERATORS
// BINARY OPERATORS
 a=2; b=6;
console.log("a =", a );
console.log("b =", b );
console.log("a+b =", a+b );
console.log("a-b =", a-b );
console.log("a*b =", a*b );
console.log("a/b =", a/b );
console.log("a**b =", a**b );
console.log("a%b =", a%b );
// URINARY OPERATORS
console.log("a++ =", a++ );
console.log("a =", a );
console.log("++a =", ++a );
// ASSIGNMENT OPERATORS
console.log("a =", a );
console.log("b =", b );
console.log("a=8 =", a=8  );
console.log("a+=5 =", a+=5 );
console.log("a**=2 =", a**=2 );
// COMPARISON OPERATORS
console.log("a==8 =", a==8  );
console.log("a!=8 =", a!=8  );
b="169";
console.log("a==b =", a==b  );
console.log("a===b =", a===b  ); //strictly ==
console.log("a!==b =", a!==b  );
console.log("a>b =", a>b  );
// logical OPERATORS && ,||, !.

//CONDITIONAL STATEMENTS
//terenary operators
 age=25;
console.log(age >18 ? "adult" : "not adult");

alert("hiiii");
let p = prompt("Enter");
console.log(p);

