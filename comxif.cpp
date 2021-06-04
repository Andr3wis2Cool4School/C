#include<iostream>

using namespace std;

int main()
{
   int a, b, c;

   cout << "Please enter the a, b, c: " << endl;
   cin >> a >> b >> c;

   if (a == b && b == c)
   {
       cout << "Equilateral triangle";
    }
    else
    {
        if (a != b && a != c && b!= c)
        {
            cout << "Scalene trangle";
        }
        else
        {
            cout << "Isosceles triangle";
        }
    }


    return 0;
}
