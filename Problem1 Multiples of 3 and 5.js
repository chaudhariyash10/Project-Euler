const limit = 1000;

let result = 0;

for(let i = 1 ; i < limit; i++){
    if(i % 3 == 0 || i % 5 == 0){
        result += i;
    }
}

console.log(result);