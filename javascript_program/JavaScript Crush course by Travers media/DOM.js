// Single element 
console.log(document.getElementById('my-form'));
console.log(document.querySelector('.container'));


// Multiple element
console.log(document.querySelectorAll('.item'));
console.log(document.getElementsByClassName('item'));
console.log(document.getElementsByTagName('li'));


// looping through items
const items = document.querySelectorAll('.item');

items.forEach((item) => console.log(item));

//
const ul = document.querySelector('.items');
//ul.remove();
//ul.lastElementChild.remove();
ul.firstElementChild.textContent = 'Hello';
ul.children[1].innerText = 'Brad';
ul.lastElementChild.innerHTML = "<h1>Hello</h1>";

///
const btn = document.querySelector('.btn');
//btn.style.background = 'red';
btn.addEventListener('click', (e) => {
    e.preventDefault();
    //console.log(e.target.className);
    document.querySelector('#my-form').style.background = '#ccc';
    document.querySelector('body').classList.add('bg-dark');
});