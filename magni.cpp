#include<iostream>

using namespace std;

// pointer

int main(){
    int a;
    int *p;

    a = 3; 
    p = &a;

    cout << a << endl;
    cout << p << endl;
    cout << *p << endl;

    return 0;
}
