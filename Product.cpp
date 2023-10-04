#include<iostream>
using namespace std;

int Product(int x, int y){
    return x*y;
}

int main(){
    int a, b;
    cout<<"Enter the first number: "<<endl;
    cin>>a;
    cout<<"Enter the second number: "<<endl;
    cin>>b;
    cout<<"The product is: "<<Product(a,b)<<endl;
    return 0;
}