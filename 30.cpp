#include<iostream>
using namespace std;
int main(){
    int a, b, c, d,sum, average;
    cout<<"Compute the total and average of four numbers:"<<endl;
    cout<<"----------------------------------------------"<<endl;
    cout<<"Input the 1st two numbers(separated by space): ";
    cin>>a>> b;
    cout<<"Input last two numbers(separated by space): ";
    cin>>c>> d;
    sum=(a+b+c+d);
    average = (a+b+c+d)/4;
    cout<<"The total of four numbers is:"<<sum<<endl;
    cout<<"The average of four numbers is:"<<average<<endl;
    return 0;
}