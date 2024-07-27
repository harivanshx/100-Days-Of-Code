//Modern String Writing
// "Hello"
// 'Hello'  both are same

const name = "Harivansh ";
const repoCount = 50;
 
// console.log(name + repoCount + " value");
// dont use this syntex as it is outdatted


// in modern date we will use backtics``

console.log(   `Hello my name is ${name} abd my repo count is ${repoCount}`);


const gameName = new String('Harivansh')
console.log(gameName);
console.log(gameName.length);
console.log(gameName.__proto__);
console.log(gameName.toLowerCase());
console.log(gameName.toUpperCase());
console.log(gameName.charAt('2'));
console.log(gameName.indexOf('r'));
//make a list of all the string methods
const newString = gameName.substring(0,4);
console.log(newString);
 


console.log(gameName.toLowerCase());
console.log(gameName.toUpperCase());
console.log(gameName.charAt('2'));
console.log(gameName.indexOf('r'));
//make a list of all the string methods
const newString = gameName.substring(0,4);
console.log(newString);
 


