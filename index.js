//sum of 2 number
const sumFunc = (a, b) => {
    return (a+b);
}

console.log(sumFunc(4, 6));

//area of a square
const areaFunc = (a) => {
    return (a*a);
}

console.log(areaFunc(7));


//even or odd number
const evenOddFunc = (num) => {
    if(num % 2 === 0) {
        console.log("even");
    }else{
        console.log("odd");
    }
}

evenOddFunc(8);


//max number
const maxNum = (a, b) => {
    if (a>b){
        return a;
    }else{
        return b;
    }
}

console.log(maxNum(15, 8));


//max number
const maxNumT = (a, b) => {
    return a>b ? a : b;
}

console.log(maxNumT(15, 83));


//max 3 number
const maxNum3 = (a, b, c) => {
    return Math.max(a, b, c);
}

console.log(maxNum3(5, 9, 23));


//factorial
const factFunc = (n) =>{
    let result = 1;

    for(let i = 1; i<=n; i++){
        result = result*i;
    };
    return result;
}

console.log(factFunc(5));


//sum of numbers 1 to N
const sum1toN = (n) => {
    let sum = 0;

    for(let i = 1; i<=n; i++){
        sum = sum + i;
    }
    return sum;
}

console.log(sum1toN(4));


// //sum of numbers 1 to N
const sumN = (n)=> {
  return (n * (n + 1)) / 2;
}

console.log(sumN(4));


// is the number prime or not
const primeNum = (n) => {

    if(n<2){
        return "non prime"
    }

    for(let i=2; i < n; i++){
        if(n%i === 0){
            return "non prime"
        }
    }
    return "prime"
}

console.log(primeNum(17));