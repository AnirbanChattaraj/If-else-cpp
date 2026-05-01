//Simple Calculator
//Take two numbers and an operator (+, -, *, /)
//Perform the operation using conditionals
#include<iostream>
using namespace std;
int main(){
    int x,y;
    char ch;
    cout<<"Enter your first number:";
    cin>>x;
    cout<<"Enter your second number:";
    cin>>y;
    cout<<"Enter your operator(+,-,*,/):";
    cin>>ch;
    if (ch=='+')
    {
        cout<<"Sum is :"<<x+y;
    }
    else if (ch=='-')
    {
       cout<<"Subtraction is :"<<x-y;
    }
    else if (ch=='*')
    {
       cout<<"Multiplication is :"<<x*y;
    }
    else if (ch=='/')
    {
       cout<<"Division is :"<<x/y;
    }
}