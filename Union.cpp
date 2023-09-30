#include<iostream>
using namespace std;
union Money
{
    int rice;
    float car;
    char bike;
};
int main(){
    union Money m1;
    m1.rice = 54;
    m1.car = 20;
    cout<<m1.car<<endl;

    return 0;
}