#include<iostream>
using namespace std;
int main(){
    float principle, rate, intrest, time, amount;
    cout<<"Enter the Principle: "<<endl;
    cin>>principle;
    cout<<"Enter the rate of intrest: "<<endl;
    cin>>rate;
    cout<<"Enter the time(in years): "<<endl;
    cin>>time;
    intrest = (principle*rate*time)/100;
    cout<<"The Simple Intrest is: "<<intrest;
    amount = principle + intrest;
    cout<<"The Total Amount is: "<<amount;
    return 0;
}