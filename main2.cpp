// //calculate sum of digits of a number
// #include <iostream>
// using namespace std;

// int sumOfDigit(int num) {
//     int digSum = 0;

//     while (num > 0) {
//         int lastDig = num % 10;
//         num = num/10;

//         digSum = digSum + lastDig;
//     }

//     return digSum;
// }


// int main() {
//     cout << "Sum = " << sumOfDigit(245) << endl;

//     return 0;
// }



// //calculate nCr binomial coefficient for n & r
// //formula : nCr = n!/r! (n-r)!
// #include <iostream>
// using namespace std;

// int factorial(int n) {
//     int fact = 1;

//     for(int i=1; i<=n; i++) {
//         fact = fact * i;
//     }
//     return fact;
// }


// int nCr(int n, int r) {
//     int fact_n = factorial(n);
//     int fact_r = factorial(r);
//     int fact_nmr = factorial(n-r);

//     return fact_n / (fact_r * fact_nmr);
// }


// int main() {
//     int n = 6, r = 3;

//     cout << nCr(n, r) << endl;

//     return 0;
// }



//fibonacci - 0 1 1 2 3 5 8
#include <iostream>
using namespace std;

int main() {

    int n = 59;

    int first = 0;
    int second = 1;

    cout << first << " " << second << " ";

    for(int i = 3; i <= n; i++) {

        int next = first + second;

        cout << next << " ";

        first = second;
        second = next;
    }

    return 0;
}