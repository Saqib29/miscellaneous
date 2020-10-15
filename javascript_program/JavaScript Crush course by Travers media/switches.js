const x = '21';

const color = x <= 10 ? 'red' : 'blue';

switch(color){
    case 'red':
        console.log('Color is red.');
        break;
    case 'blue':
        console.log('color is blue');
        break;
    default:
        console.log('color is NOT red pr blue');
        break;
}