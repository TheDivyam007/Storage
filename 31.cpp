#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Make a rectangular shape by a single digit number:"<<endl;
    cout<<"-----------------------------------------------------"<<endl;
    cout<<"Input the number: ";
    cin>>n;

    if (n>=0 && n<=9)
    {
        for(int i=1; i<=6; i++){
            for(int j=1; j<=4; j++){
                if(j==1||j==4||i==1||i==6){
                    cout<<n;
                }
                else
                {
                    cout<<" ";
                }
                
            }
            cout<< endl;
        }
    }else{
        cout<<"Invalid input! Please enter a single digit number.";
    }
    
    return 0;
}