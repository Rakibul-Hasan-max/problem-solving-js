//sum of 2 number
const sumFunc = (a, b) => {
    return (a+b);
}

console.log(sumFunc(4, 6));


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