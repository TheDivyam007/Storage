#include<iostream>
using namespace std;
typedef struct employee
{
    int Id;
    float salary;
    char fav;
}pq;

int main(){
    struct employee Divyam;
    pq Komal;
    Divyam.Id = 21;
    Divyam.salary = 99999;
    Divyam.fav = 'G';
    Komal.fav = 'D';
    cout<<Divyam.Id<<endl;
    cout<<Divyam.salary<<endl;
    cout<<Divyam.fav<<endl;
    cout<<"The favourite character of komal is: "<<Komal.fav<<endl;
    return 0;
}