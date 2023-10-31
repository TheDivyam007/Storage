#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Check whether a number is positive, negative or zero:"<<endl;
    cout<<"------------------------------------------------"<<endl;
    cout<<"Input a number: ";
    cin>>num;
    if (num>0)
    {
        cout<<"The entered number is positive.";
    }
    else if (/* condition */num<0)
    {
        /* code */cout<<"The entered number is negative.";
    }
    else
    {
        /* code */cout<<"The number is Zero.";
    }
    
    
    
    return 0;
}