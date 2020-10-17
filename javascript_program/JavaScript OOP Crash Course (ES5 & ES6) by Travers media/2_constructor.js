function Book(title, author, year){
    this.title = title;
    this.author = author;
    this.year = year;
    this.getSummery = function(){
        return `${this.title} is written by ${this.author} in ${this.year}`;
    };
}

const book1 = new Book('My Life', 'Saqib', 2020);
const book2 = new Book('My approaches', 'Saqib', '2025');

console.log(book1.getSummery());