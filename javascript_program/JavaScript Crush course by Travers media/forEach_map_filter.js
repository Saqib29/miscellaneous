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
        isCompleted: false
    }
];


// forEach, map, filter
todos.forEach(function(todo){
    console.log(todo.text);
});

// map
const todoText = todos.map(function(todo){
    return todo.text;
});
console.log(todoText);

// filter
const todoCompleted = todos.filter(function(todo){
    return todo.isCompleted === true;
});
console.log(todoCompleted)


// this is actually called functional programming
const todoTexts = todos.filter(function(todo){
    return todo.isCompleted === true;
}).map(function(todo){
    return todo.text;
});
console.log(todoText);