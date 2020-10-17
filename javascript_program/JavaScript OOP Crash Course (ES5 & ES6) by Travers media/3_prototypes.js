function Book(title, author, year){
    this.title = title;
    this.author = author;
    this.year = year;
    this.getSummery = function(){
        return `${this.title} is written by ${this.author} in ${this.year}`;
    };
}

// getSummary as prototype
Book.prototype.getSummery = function(){
    return `${this.title} is written by ${this.author} in ${this.year}`;
};

// getAge
Book.prototype.getAge = function(){
    const year = new Date().getFullYear() - this.year;
    return `${this.title} is ${year} years old`;
};

// revise
// here you can manipulated the data too
Book.prototype.revise = function(newYear){
    this.year = newYear;
    this.revised = true;
}


// Instanciate an Object
const book1 = new Book('My Life', 'Saqib', 1998);
const book2 = new Book('My approaches', 'Saqib', '1994');

console.log(book1.getSummery());
console.log(book1.getAge());
console.log(book2.getAge()); 

// manipulatting the data
console.log(book2);
book2.revise(2018);
console.log(book2);
