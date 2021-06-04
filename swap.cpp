#include <iostream>
using namespace std;

int main()
{
    int a = 20;
    int b = 10;

    cout << a << endl;
    cout << b << endl;

    int temp;
    temp = a;
    a = b;
    b = temp;
    
    cout << a << endl;
    cout << b << endl;

    return 0;
}
