#include<iostream>
using namespace std;
int main(){
    float c,f;
    cout<<"Input the temperature in celcius: ";
    cin>>c;
    cout<<"The temperature in Celcius: "<<c<<endl;
    f=(c*9/5)+32;
    cout<<"The temperature in Fahrenheit: "<<f;
    return 0;
}