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