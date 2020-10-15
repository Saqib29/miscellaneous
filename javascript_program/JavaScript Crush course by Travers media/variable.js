//  let, const

let score;
const v = 30;

//v = 40;
score = 10;

console.log(v);
console.log(score);


// data types: String, Number, Boolean, null, undefined,

const name = 'Saqib';
const age = 30;
const isCool = true;
const rating = 4.5;
const x = null;
const y = undefined;
let z;


console.log(typeof name,typeof age,typeof isCool,typeof rating,typeof y,typeof z,typeof x);


// Concatenation
console.log('Concatenation--: '+'My name is '+ name + ' and I am ' + age);

// Template String
const me = `My name is ${name} and I am ${age}`;
console.log("Tamplate String:-- "+me)

// length proparty
console.log(me.length)

// Uppercase proparty
console.log(me.toUpperCase());
console.log(me.toLowerCase());
console.log(me.substring(0,8).toUpperCase());
console.log(me.split(' '))