const library = [
    {
        title : "Sherlock Holmes",
        author : "Aurther Conan Doyale",
        status : {
            own : true,
            reading : false,
            read : false,
        },
    },
    {
        title : "I don't love you anymore",
        author : "Rithvik Singh",
        status : {
            own : true,
            reading : false,
            read : false,
        },
    },
    {
        title : "Devil in Disguise",
        author : "Marino",
        status : {
            own : true,
            reading : false, 
            read : false,
        },
    },
];

library[0].status.read = true;
library[1].status.read = true;
library[2].status.read = true;

// this transforms the value of first object of "library" and doesn't change the variable name
// library[0].title = "firstBook"


// this edits the variable name
const{title: firstBook} = library[0];

const libraryJSON = JSON.stringify(library);

console.log(libraryJSON)