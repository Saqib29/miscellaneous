// class
class Person{
    constructor(firstName, lastName, dob){
        this.firstName = firstName;
        this.lastName = lastName;
        this.dob = new Date(dob);
    }

    getFullName(){
        return `${this.firstName} ${this.lastName}`;
    }

    getBirthDay(){
        return `${this.dob.getDay()}-${this.dob.getMonth()}-${this.dob.getFullYear()}`;
    }

    getBirthYear(){
        return this.dob.getFullYear();
    }
}

// Instanciate object

const person1 = new Person('Chester', 'benington', '12-12-1956');

console.log(`Full Name: ${person1.getFullName()}\nDOB: ${person1.getBirthDay()}`);
console.log(`Age: ${parseInt(Date().split(' ')[3])-parseInt(person1.getBirthYear())}`)



const person2 = new Person('Saqib', 'Aminul', '11-29-1994');
console.log(`Full Name: ${person2.getFullName()}\nDOB: ${person2.getBirthDay()}`);
console.log(`Age: ${parseInt(Date().split(' ')[3])-parseInt(person2.getBirthYear())}`)
