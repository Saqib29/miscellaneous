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


console.log(todos);


// converting in JSON fromat
const todosJSON = JSON.stringify(todos);
console.log(todosJSON);

// going through For loop
for(let i=0; i<=10; i++){
    console.log(`index number: ${i}`);
}

// while 
let i = 0;
while(i <10){
    console.log(`while loop ${i}`);
    i++;
}

for(let todo of todos){
    console.log(`To Do: ${todo.text}, Id: ${todo.id}`);
}