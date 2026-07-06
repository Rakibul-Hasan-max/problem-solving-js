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



// //fibonacci - 0 1 1 2 3 5 8
// #include <iostream>
// using namespace std;

// int main() {

//     int n = 59;

//     int first = 0;
//     int second = 1;

//     cout << first << " " << second << " ";

//     for(int i = 3; i <= n; i++) {

//         int next = first + second;

//         cout << next << " ";

//         first = second;
//         second = next;
//     }

//     return 0;
// }



// //decimal to binary
// #include <iostream>
// using namespace std;

// int decToBin(int decNum) {
//     int ans = 0, pow = 1;

//     while (decNum > 0) {
//         int rem = decNum % 2;
//         decNum = decNum/2;

//         ans += (rem * pow);
//         pow *= 10;
//     }

//     return ans;
// }

// int main() {
//     int decNum = 50;

//     cout << decToBin(decNum) << endl;
//     return 0;
// }




// //binary to decimal
// #include <iostream>
// using namespace std;

// int binToDec(int binNum) {
//     int ans = 0, pow = 1;

//     while (binNum > 0) {
//         int rem = binNum % 10;
//         ans += (rem * pow);

//         binNum /= 10;
//         pow *= 2;
//     }

//     return ans;
// }

// int main() {
//     int decNum = 50;

//     cout << binToDec(1010) << endl;
//     return 0;
// }



// //bitwise operator
// #include <iostream>
// using namespace std;

// int main() {
//     cout << (10 << 2) << endl;
//     return 0;
// }



// //bitwise operator
// #include <iostream>
// using namespace std;

// int main() {
//     cout << (8 >> 2) << endl;
//     return 0;
// }




// //minimum and maxium number of an array
// #include <iostream>
// #include <climits>
// using namespace std;

// int main() {
//     int nums[] = {5, 23, 53, -54, -32, 4};

//     int size = 6;

//     int smallest = INT_MAX;
//     int largest = INT_MIN;

//     for(int i=0; i<size; i++) {
//         // if(nums[i] < smallest) {
//         //     smallest = nums[i];
//         // }

//         smallest = min(nums[i], smallest);
//         largest = max(nums[i], largest);
//     }

//     cout << "Smallest = " << smallest << endl;
//     cout << "Largest = " << largest << endl;
//     return 0;
// }




// //linear search algorithm for find an element of array
// #include <iostream>
// using namespace std;

// int linearSearch(int arr[], int sz, int target) {
//     for(int i=0; i<sz; i++) {
//         if(arr[i] == target) {  //found
//             return i;
//         }
//     }
//     return -1; //not found
// }


// int main() {
//     int arr[] = {5, 23, 53, -54, 8, -32, 4};
//     int sz = 7;
//     int target = 5;

//     cout << linearSearch(arr, sz, target) << endl;
//     return 0;
// }


// //array reverse
// #include <iostream>
// using namespace std;

// void reverseArray(int arr[], int sz) {
//     int start = 0, end = sz-1;

//     while (start < end) {
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }    
// }


// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     int sz = 5;

//     reverseArray(arr, sz);

//     for(int i=0; i<sz; i++) {
//         cout << arr[i] << " ";
//     }

//     cout << endl;
//     return 0;
// }




// //vector
// //g++ -std=c++11 main2.cpp && ./a.out
// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int> vec = {1,2,3}; 
//     cout << vec[0] << endl;
//     return 0;
// }



//vector use
//g++ -std=c++11 main2.cpp && ./a.out
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec;

    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);

    cout << vec.size() << endl;
    cout << vec.capacity() << endl;
    return 0;
}