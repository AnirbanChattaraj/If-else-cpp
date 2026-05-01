// Largest of Three Numbers
#include <iostream>
using namespace std;
int main()
{
    int x, y, z;
    cout << "Enter your first number:";
    cin >> x;
    cout << "Enter your second number:";
    cin >> y;
    cout << "Enter your third number:";
    cin >> z;
    if (x > y && x > z)
    {
        cout << "The greater number is:" << x;
    }
    else if (y > x && y > z)
    {
        cout << "The greater number is:" << y;
    }
    else if (z > x && z > y)
    {
        cout << "The greater number is:" << z;
    }
    else
    {
        cout << "All numbers are equal";
    }
}