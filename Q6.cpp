//Grade System
//Take marks as input and print grade:
//90+ → A
//75–89 → B
//50–74 → C
//Below 50 → Fail
#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout << "Enter your marks(out of 100):";
    cin >> marks;
    if (marks>90 && marks<=100)
    {
        cout<<"A";
    }
    else if (marks>=75 && marks<=89)
    {
        cout<<"B";
    }
    else if (marks>=50 && marks<=74)
    {
        cout<<"C";
    }
    else if (marks>=0 && marks<50)
    {
        cout<<"Fail";
    }
    else{
        cout<<"Invalid marks";
    }
}