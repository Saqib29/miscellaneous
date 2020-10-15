const x = '10';

/* in terms of double equal the match is valid and true
    but in terms of triple equal it doesn't match! becaus 
    it chack data types too!
*/
if(x === 10){
    console.log('x is 10');
}else if(x > 10){
    console.log('x is greater than 10');
}
else if(x < 10){
    console.log('x is less than 10');
}
else{
    console.log('x is NOT 10');
}