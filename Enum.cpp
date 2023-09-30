#include<iostream>
using namespace std;
int main(){
    enum meal{breakfast, lunch, dinner};
    meal m1 = breakfast;
    cout<<m1<<endl;
    meal m2 = lunch;
    cout<<m2<<endl;
    return 0;
}