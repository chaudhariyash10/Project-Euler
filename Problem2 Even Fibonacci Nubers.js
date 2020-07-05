const limit = 4000000;
let result = 0;
let a = 1 , b = 2;

while( b <= limit){
    if(b % 2 == 0){
        result += b;
    } 
    let temp = b;
    b = b + a;
    a= temp; 
}

console.log(result);