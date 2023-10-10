#include<iostream>
using namespace std;
int main(){
    float r,Volume;
    cout<<"Enter the radius: ";
    cin>>r;
    Volume = 1.33*(3.14*(r*r*r));
    cout<<Volume;
    return 0;
}