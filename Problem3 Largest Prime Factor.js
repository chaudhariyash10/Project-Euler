const number = 600851475143;

let num = number , i = 2;

while( num > 1 ){
    if(num % i == 0){
        num = num / i;
    }

    else i++;
}

console.log(i);