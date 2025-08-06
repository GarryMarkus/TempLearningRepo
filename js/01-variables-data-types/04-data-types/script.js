// String
const firstName = 'Sara';

// Number (int, decimal, float all comes together in datatype Number)
const age = 30;
const temp = 98.9;

// Boolean
const hasKids = true;

// Null
const aptNumber = null; // type of aptNumber will be "object"

// Undefined
let score1; //both the value and type of variable "score" will be undefined
const score2 = undefined; //both the value and type of variable "score" will be undefined

// Symbol
const id = Symbol('id');

// BigInt
const n = 9007199254740991n; 

// Reference Types

const numbers = [1, 2, 3, 4];

const person = {
  name: 'Brad',
};

//value of a function is the function itself and the typeof any function is 'function' instead of 'object'
function sayHello() {
  console.log('Hello');
}

const output = sayHello;

console.log(output, typeof output);

// More info on why typeof null == object
// https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/typeof#typeof_null

//  More info on the "function object" type
// https://262.ecma-international.org/5.1/#sec-11.4.3
