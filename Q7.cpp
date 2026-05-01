//Divisible Check
//Check if a number is divisible by both 3 and 5.
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter your number:";
    cin>>x;
    if (x%3==0 || x%5==0)
    {
        cout<<"Divisible";
    }
    else{
        cout<<"Not Divisible";
    }
}