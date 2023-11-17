#include<iostream>
using namespace std;
int main(){
    int arr2d[2][3] = {
        {3,2,4},
        {5,3,7}
    };
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<"the value at "<<i<<"and "<<j<<"is "<<arr2d[i][j]<<endl;
        }
        
    }
    

    return 0;
}