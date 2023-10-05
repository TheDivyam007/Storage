#include<iostream>
using namespace std;

int Rem(int a, int b){
    return a%b;
}

int main(){
    int x, y;
    cout<<"Enter the first number: "<<endl;
    cin>>x;
    cout<<"Enter the second number: "<<endl;
    cin>>y;
    cout<<"The remainder will be: "<<Rem(x,y);
    return 0;
}