// constructor
function Book(title, author, year){
    this.title = title;
    this.author = author;
    this.year = year;
}
// getSummary
Book.prototype.getSummary = function(){
    return `${this.title} is written by ${this.author} in ${this.year}`;
};

// Inherit prototype
Magazine.prototype = Object.create(Book.prototype);

// Magazin Constructor
function Magazine(title, author, year, month){
    Book.call(this, title, author, year);

    this.month = month;
};

// Instantiate Magazine Object
const mag1 = new Magazine('Mag One', 'Saqib', '2016', 'Feb');

// Use Magazine Constructor
Magazine.prototype.constructor = Magazine;

console.log(mag1);
console.log(mag1.getSummary());