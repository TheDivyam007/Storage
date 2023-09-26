#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    switch (a)
    {
    case 22:
        cout<<"The number is 22"<<endl;
        break;

    case 18:
        cout<<"The number is 18"<<endl;
        break;

    case 5:
        cout<<"The number is 5"<<endl;
        break;
    
    default:
    cout<<"Not a special case.";
        break;
    }
    return 0;
}