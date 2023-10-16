#include<iostream>
using namespace std;
int main(){
    float a,b,c;
    cout<<"Input the first angle: ";
    cin>>a;
    cout<<"Input the second angle: ";
    cin>>b;
    c=180-(a+b);
    cout<<"The thirt angle of the triangle is: "<<c;
    return 0;
}