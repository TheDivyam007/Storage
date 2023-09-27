#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the given number: ";
    cin>>n;
    for(int i=1; i<=10; i++){
        cout<<n<<" times "<<i<<" is "<<n*i<<endl;
    }
    return 0;
}