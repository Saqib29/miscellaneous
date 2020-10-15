// boject-oriented programming in ES5

// Constructor Function

function Person(firstName, lastName, dob){
    this.firstName = firstName;
    this.lastName = lastName;
    this.dob = new Date(dob);
    /*
    this.getBirthYear = function(){
        return `${this.dob.getDate()}-${this.dob.getMonth()}-${this.dob.getFullYear()}`;
    }
    this.getFullName = function(){
        return `${this.firstName} ${this.lastName}`
    }
    */
}

Person.prototype.getFullName = function(){
    return `${this.dob.getDate()}-${this.dob.getMonth()}-${this.dob.getFullYear()}`; 
}

Person.prototype.getBirthYear = function(){
    return `${this.firstName} ${this.lastName}`;
}
// Instanciate object
const person1 = new Person('saqib', 'Aminul', '4-3-1980');
const person2 = new Person('Aminul', 'Islam', '12-29-1994');

console.log(person1.dob.getDate());
console.log(person2.firstName, person2.lastName, person2.dob.getFullYear())


console.log();
console.log(`Name: ${person1.getFullName()}\nBirth: ${person1.getBirthYear()}`);
console.log(`Name: ${person2.getFullName()}\nBirth: ${person2.getBirthYear()}`);

console.log(person2.dob.getMonth());
console.log(person2);