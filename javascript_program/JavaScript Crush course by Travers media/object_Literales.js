const person = {
    firstName: 'Saqib',
    lastName: 'Aminul',
    age: 25,
    hobbies: ['music', 'movies', 'sports', 'programming'],
    address: {
        street: 'collage road 38/2',
        city: 'Narayanganj',
        country: 'Bangladesh'
    }
}

console.log("First Name: " + person.firstName+"\n"+"Last Name: "+ person.lastName);
console.log("Age: "+ person.age+"\nHobbies: "+person.hobbies);
console.log("Address: "+ person.address.street, person.address.city+ "\n\t\t "+person.address.country);


const { firstName, lastName, address: { city }} = person;
console.log(firstName, lastName);
console.log(city)

person.email = 'saqib29111@gmail.com';
console.log(person);
console.log(person.email);