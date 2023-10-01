#include<iostream>
using namespace std;
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    // int x = 5;
    // int y = 4;
    int x,y;
    cout<<"The value of first number is : ";
    cin>>x;
    cout<<"The value of second number is : ";
    cin>>y;
    swap(x,y);
    cout<<"The changed value of first number is : "<<x<<endl;
    cout<<"The changed value of second number is : "<<y<<endl;
    return 0;
}