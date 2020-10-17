// Object of protos
const bookProtos = {
    getSummary: function(){
        return `${this.title} was written by ${this.author} in ${this.years}`;
    },
    getAge: function(){
        const years = new Date().getFullYear() - this.year;
        return `${this.title} is ${this.years} years old`;
    }
}



// cretae Object
// const book1 = Object.create(bookProtos);
// book1.title = 'My Life';
// book1.author = 'Saqib';
// book1.year = '2013';

const book1 = Object.create(bookProtos, {
    title: {value: 'My Life'},
    author: {value: 'Saqib'},
    year: {value: '2013'}
});


console.log(book1);