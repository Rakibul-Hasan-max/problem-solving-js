// //build and run comand: g++ main.cpp && ./a.out

// #include <iostream>
// using namespace std;

// int main() {
//     cout << "Hello, World!" << endl;
//     cout << "Hello, World!" << "\n";    //new line

//     cout << "Rakibul" << "\n" << "Hasan" << endl; 

//     int age = 25;               //int 4 byte space taken in memory

//     char name = "Hasan";        //char 1 byte space taken in memory

//     float PI = 3.1416f;         //float 4 byte space taken in memory

//     double price = 100.99;      //double 8 byte space taken in memory

//     bool isSafe = true;         //bool 1 byte space taken in memory

//     cout << age << endl;
//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main() {
//     int age;

//     cout << "Enter a number: ";
//     cin >> age;

//     cout << "Age: " << age << endl;
//     return 0;
// }




// //sum of 2 numbers from users
// #include <iostream>
// using namespace std;

// int main() {
//     int a, b;
//     cout << "Enter a number: ";
//     cin >> a;

//     cout << "Enter a number: ";
//     cin >> b;

//     int sum = (a+b);

//     cout << "Sum: " << sum << endl;
//     return 0;
// }



// //eligible for vote or not
// #include <iostream>
// using namespace std;

// int main() {
//     int age;
//     cout << "Enter your age: ";
//     cin >> age;

//     if(age >= 18){
//         cout << "Eligible for vote" << endl;
//     } else {
//         cout << "Not eligible for vote" << endl;
//     }

//     return 0;
// }



// //1-10 number print
// #include <iostream>
// using namespace std;

// int main() {
//     int count = 1;

//     while (count <= 10) {
//         cout << count;
//         count++;
//     };

//     cout << endl;
//     return 0;
// }


// //1-10 number print
// #include <iostream>
// using namespace std;

// int main() {
//     int n = 10;

//     for(int i=1; i<=n; i++) {
//         cout << i << " ";
//     };
    
//     cout << endl;
//     return 0;
// }



// //1-10 number print
// #include <iostream>
// using namespace std;

// int main() {
//     int n = 10;
//     int i = 1;

//     do {
//         cout << i << " ";
//         i++;
//     } while (i <= n);
    
//     cout << endl;
//     return 0;
// }


// //1-n odd number sum
// #include <iostream>
// using namespace std;

// int main() {
//     int n = 10;
//     int oddSum = 0;

//     for(int i=1; i<=n; i++) {
//         if(i%2 != 0){
//             oddSum = oddSum+i;
//         }
//     };
    
//     cout << oddSum << endl;
//     return 0;
// }



// //sum of all number from 1 to N, which is divisible by 3
// #include <iostream>
// using namespace std;

// int main() {
//     int n = 10;

//     int sum = 0;

//     for(int i=1; i<=n; i++) {
//         if(i%3 == 0){
//             sum = sum+i;
//         }
//     };
    
//     cout << sum << endl;
//     return 0;
// }




// //square pattern making using nested loop
// #include <iostream>
// using namespace std;

// int main() {
//     int n = 5;

//     for(int i=1; i<=n; i++) {

//         for(int j=1; j<=n; j++) {
//             cout << j;
//         };

//         cout << endl;
//     };
    
//     return 0;
// }



// //star pattern making using nested loop
// #include <iostream>
// using namespace std;

// int main() {
//     int n = 5;

//     for(int i=1; i<=n; i++) {

//         for(int j=1; j<=n; j++) {
//             cout << "* ";
//         };

//         cout << endl;
//     };
    
//     return 0;
// }



// //charecter pattern making using nested loop
// #include <iostream>
// using namespace std;

// int main() {
//     int n = 5;

//     for(int i=1; i<=n; i++) {

//         char ch = 'A';

//         for(int j=1; j<=n; j++) {
//             cout << ch;
//             ch = ch +1;
//         };

//         cout << endl;
//     };
    
//     return 0;
// }




// //number pattern making using nested loop
// #include <iostream>
// using namespace std;

// int main() {
//     int n = 3;

//     int num = 1;

//     for(int i=0; i<n; i++) {

//         for(int j=0; j<n; j++) {
//             cout << num << " ";
//             num++;
//         };

//         cout << endl;
//     };
    
//     return 0;
// }



// //charachter pattern making using nested loop
// #include <iostream>
// using namespace std;

// int main() {
//     int n = 3;

//     char ch = 'A';

//     for(int i=0; i<n; i++) {

//         for(int j=0; j<n; j++) {
//             cout << ch << " ";
//             ch++;
//         };

//         cout << endl;
//     };
    
//     return 0;
// }



// //triangle pattern making using nested loop
// #include <iostream>
// using namespace std;

// int main() {
//     int n = 4;

//     for(int i=0; i<n; i++) {        //outer loop

//         for(int j=0; j<i+1; j++) {    //inner loop
//             cout << "* ";
//         };

//         cout << endl;
//     };
    
//     return 0;
// }



// //triangle pattern making using nested loop
// #include <iostream>
// using namespace std;

// int main() {
//     int n = 5;

//     for(int i=0; i<n; i++) {        //outer loop

//         for(int j=0; j<i+1; j++) {    //inner loop
//             cout << i+1;
//         };

//         cout << endl;
//     };
    
//     return 0;
// }



// //triangle pattern making using nested loop
// #include <iostream>
// using namespace std;

// int main() {
//     int n = 5;

//     char ch = 'A';

//     for(int i=0; i<n; i++) {        //outer loop

//         for(int j=0; j<i+1; j++) {    //inner loop
//             cout << char(ch+i);
//         };

//         cout << endl;
//     };
    
//     return 0;
// }



// //triangle pattern making using nested loop
// #include <iostream>
// using namespace std;

// int main() {
//     int n = 5;

//     for(int i=0; i<n; i++) {        //outer loop

//         for(int j=1; j<=i+1; j++) {    //inner loop
//             cout << j;
//         };

//         cout << endl;
//     };
    
//     return 0;
// }



// //reverse triangle pattern
// #include <iostream>
// using namespace std;

// int main() {
//     int n = 5;

//     for(int i=0; i<n; i++) {        //outer loop

//         for(int j=i+1; j>0; j--) {    //inner loop
//             cout << j << " ";
//         };

//         cout << endl;
//     };
    
//     return 0;
// }




// //floyd's triangle pattern
// #include <iostream>
// using namespace std;

// int main() {
//     int n = 5;

//     int num = 1;

//     for(int i=0; i<n; i++) {

//         for(int j=i+1; j>0; j--) {    //backwords => i+1
//             cout << num << " ";
//             num++;
//         };

//         cout << endl;
//     };
    
//     return 0;
// }




// //Inverted triangle pattern
// #include <iostream>
// using namespace std;

// int main() {
//     int n = 5;

//     int num = 1;

//     for(int i=0; i<n; i++) {

//         //space
//         for(int j=0; j<i; j++) {
//             cout << " ";
//         };

//         //number
//         for(int j=0; j<n-i; j++) {
//             cout << (i+1);
//         };

//         cout << endl;
//     };
    
//     return 0;
// }



// //Piramid pattern design
// #include <iostream>
// using namespace std;

// int main() {
//     int n = 5;

//     for(int i=0; i<n; i++) {

//         //space : n-i-1
//         for(int j=0; j<n-i-1; j++) {
//             cout << " ";
//         };

//         //nums1 : i+1
//         for(int j=1; j<=i+1; j++) {
//             cout << j;
//         };

//         //nums2
//         for(int j=i; j>0; j--) {
//             cout << j;
//         };

//         cout << endl;
//     };
    
//     return 0;
// }



//Hollow diamond pattern
#include <iostream>
using namespace std;

int main() {
    int n = 10;

    //top
    for(int i=0; i<n; i++) {

        //space
        for(int j=0; j<n-i-1; j++) {
            cout << " ";
        };

        cout << "*";
        
        if(i != 0) {
            //spaces
            for(int j=0; j<2*i-1; j++) {
                cout << " ";
            };

            cout << "*";
        }

        cout << endl;
    };

    //bottom
    for(int i=0; i<n-1; i++) {

        //space
        for(int j=0; j<i+1; j++) {
            cout << " ";
        };

        cout << "*";
        
        if(i != n-2) {
            //spaces
            for(int j=0; j<2*(n-i)-5; j++) {
                cout << " ";
            };

            cout << "*";
        }

        cout << endl;
    };
    
    return 0;
}
