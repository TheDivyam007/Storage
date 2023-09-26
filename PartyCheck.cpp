#include<iostream>
using namespace std;
int main(){
    int age; 
    cout<<"Tell me your age: ";
    cin>>age;
    if((age<18) && (age>0)){
        cout<<"You are not allowed."<<endl;
    }
    else if(age<1){
        cout<<"You are not even born"<<endl;
    }
    else if(age==18){
        cout<<"You will get a kid pass for the party"<<endl;
    }
    else{
        cout<<"You are allowed in the party"<<endl;
    }
    return 0;
}