#include<iostream>

using namespace std;


int main()
{
    //User enter int num
    //Program write out if that number is even or odd

    int num;
    bool res;
    cout << "Enter a Int Number: ";
    cin >> num;

    if(num % 2 == 0)
    {
        res = true;
    }
    else
    {
        res = false;
    }

    cout << res << endl;
    return 0;
}
