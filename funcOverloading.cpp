#include<iostream>
using namespace std;
int volume(double r, int h){
    return(3.14 * r * r * r);
}

int volume(int a){
    return(a * a * a);
}

int volume(int l, int b, int h){
    return(l * b* h);
}
int main(){
    cout<<"The volume of cylinder with radius 3 and height 5 is: "<<volume(3, 5)<<endl;

    cout<<"The volume of cube with side 6 is: "<<volume(6)<<endl;
    
    cout<<"The volume of cuboid with sides 3, 6 and 8 is: "<<volume(3, 6, 7)<<endl;
    
    return 0;
}