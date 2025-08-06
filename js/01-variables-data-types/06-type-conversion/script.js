let amount = '100';

// Convert string to number, if the string will contain anything other than numerical values than converted result will of the Number data type but the value will be NaN, i.e. not a number
amount = parseInt(amount);//using function, only convert to a number that is integer, decimal value will be removed, and the type will be NUMBER always 
amount = +amount;//unary operator
amount = Number(amount);//using constructor

// Convert number to string
amount = amount.toString();//using Method, a function that is attached to an object is termed as a method
amount = String(amount);

// Convert string to decimal
amount = parseFloat(amount);

// Convert number to boolean
amount = Boolean(amount); //0 will give false after conversion, rest all will give true

// Ways to get NaN
console.log(Math.sqrt(-1));
console.log(1 + NaN);
console.log(undefined + undefined);
console.log('foo' / 3);

console.log(amount, typeof amount);
