/*
Data Types: 
undefined- that hasn't been defined of its type
null- nothing
boolean- true or false
string- series of characters
symbol- immutable premitive values that is unique
number- are numbers
object- can store a lot of key-value pair

Variable: a box to store a data, the names of variables are case sensitive
*/

var myName = "Name"; //will be accesible throughout whole program
let myName2 = "Name2"; // will be available only in the scope of declaration

myName2 = 'My name is ' + myName2;
console.log(myName);
console.log(myName2);

const pi = 3.14;     //a fixed constant value throughout the program

/* assigining a variable = 1. declaration and then 2. initialization */


var a; //declaration of variable, here a = undefined, something that is not defined yet, we can also say that a is uninitialized
var b = 2; //declaration and then initialising (assignment operator "=") a value to a variable
var c = 3
b = a; //b = undefined
console.log(a);
a = c; //c was 3 so now a = c =3;
console.log(a);
console.log(b);
console.log(c);