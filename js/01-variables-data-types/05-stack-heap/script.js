// Primitive data type: Value is stored in the stack
const name = 'John';
const age = 30;

// Reference data type: Value is stored in the heap
const person = {
  name: 'Brad',
  age: 40,
};//variable person will be stored as stack but it will reference to data sotred as heap which contains all the data of person(the object, since it is initialised as an object with curly brackets {})

let newName = name; //a new variable of name "newName" will be added to the stack with the initial value that of the variable "name"
newName = 'Jonathan'; //will only change the value of variable - newName and not of the variable - name

let newPerson = person;// will point to the same heap storage/reference where person is already pointing
newPerson.name = 'Bradley';// changes the value for both person and newPerson since they were both pointing on to the same reference

console.log(name, newName); // John, Jonathan
console.log(person, newPerson); // { name: 'Bradley', age: 40 }, { name: 'Bradley', age: 40 }
