var nameAdj = "Queen's Gambit Declined";

var LnameAdj = nameAdj.length;

console.log(LnameAdj);

console.log(nameAdj[0]); // 0 based indexing

//we can not edit a string by changing one of the char at an index, we either have to change the whole string or reassign it altogether

nameAdj[1] = 'L'; // this will not do anything, string are immutable
console.log(nameAdj);

nameAdj = "King's Gambit Declined"; // this will edit the string
console.log(nameAdj);
