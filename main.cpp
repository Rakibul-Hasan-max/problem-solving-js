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




//sum of 2 numbers from users
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter a number: ";
    cin >> a;

    cout << "Enter a number: ";
    cin >> b;

    int sum = (a+b);

    cout << "Sum: " << sum << endl;
    return 0;
}