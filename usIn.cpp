#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int age;
    cout << "Enter Your Age: ";
    cin >> age;


    cout << "You are " << age << "Years old";
    
    string name;
    cout << "Enter Your Name: ";
    getline(cin, name);

    cout << "Hello " << name;

    return 0; 
}

