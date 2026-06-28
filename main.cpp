//build and run comand: g++ main.cpp && ./a.out

#include <iostream>
using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    cout << "Hello, World!" << "\n";    //new line

    cout << "Rakibul" << "\n" << "Hasan" << endl; 

    int age = 25;               //int 4 byte space taken in memory

    char name = "Hasan";        //int 1 byte space taken in memory

    float PI = 3.1416f;         //int 4 byte space taken in memory

    double price = 100.99;      //int 8 byte space taken in memory

    bool isSafe = true;         //int 1 byte space taken in memory

    cout << age << endl;
    return 0;
}
