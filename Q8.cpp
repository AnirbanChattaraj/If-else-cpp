//Character Check
//Take a character and check if it is:
//Alphabet
//Digit
//Special character
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter your character:";
    cin>>ch;
    if (ch>='a' && ch<='z' || ch>='A' && ch<='Z')
    {
        cout<<"Alphabet";
    }
    else if (ch>=0 && ch<=9)
    {
        cout<<"Digit";
    }
    else{
        cout<<"Special Character";
    }
}