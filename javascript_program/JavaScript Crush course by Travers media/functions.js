function addNums(num1 = 1, num2 = 1){
    return num1+num2;
}

const addition = addNums(5, 5);
console.log(addition);

// in the modern javascript ES6
const addFunc = (num1 = 1, num2 = 1) => num1+num2;

console.log(addFunc(5,6));

const subNum = (num1 = 3, num2 = 3) => {
    return num1+num2;
}
console.log(subNum(5,7));

// if there is one perameter no need parenthesis in the function
const numSquare = num => num*num;
console.log(numSquare(2))



const todos =[
    {
        id: 1,
        text: 'Take out trash',
        isCompleted: true
    },
    {
        id: 1,
        text: 'Meeting with boss',
        isCompleted: true
    },
    {
        id: 1,
        text: 'Dentist appt',
        isCompleted: true
    }
];

todos.forEach((todo) => console.log(todo));