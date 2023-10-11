#include<iostream>
using namespace std;
int main(){
    float radius,height,volume;
    cout<<"Enter the radius: ";
    cin>>radius;
    cout<<"Enter the height: ";
    cin>>height;
    volume = 22/7*(radius*radius*height);
    cout<<"The volume should be equal to: "<<volume;
    return 0;
}