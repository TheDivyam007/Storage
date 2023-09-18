#include<iostream>
using namespace std;
int main(){
    int num,ctr=0;
    cout<<"Enter the number: ";
    cin>>num;
    for(int i=1; i<=num; i++){
        if(num%i==0){
            ctr++;
        }
    }
    if(ctr==2){
        cout<<"The number is prime.";
    }
    else{
        cout<<"The number is composite.";
    }

    return 0;
}