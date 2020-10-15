// oneline comment
/*
multiline 
comments
*/

// Arrays
// old style declearation
const numbers = new Array(1,2,3,4,5,6);
console.log(numbers)

// new style
const fruits = ['apples', 'oranges', 'opears', 10, 20];
for (i in fruits){
    console.log(typeof fruits[i]);
}

//adding to the last of the array
fruits.push('mango');
console.log(fruits);

// adding to the fisrt of the array
fruits.unshift('strawberries');
console.log(fruits);

// pop from the last
fruits.pop();
console.log(fruits);

console.log(Array.isArray(fruits))

console.log(fruits.indexOf('apples'))