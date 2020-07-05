//var bools = []; 

var primes = [];

for (let i = 0 ; i < 2000000 ; i++) primes.push(i);

primes[1] = 0 ;

for(let i = 0 ; i < 2000000 ; i++){
    if(primes[i] != 0 ){

        for(let j = i*2 ; j < 2000000 ; j = j+i){
            primes[j] = 0 ;
        }
    }

}

var sum = 0;  

for(let i = 0 ; i < 2000000 ; i++){

    sum = sum + primes[i];
}

console.log(sum);