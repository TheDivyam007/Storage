#include <iostream>
#include <algorithm> // for reverse function
#include <string>

using namespace std;

int main() {
    string str;
    cout<<"Enter the name: "<<endl;
    cin>>str;

    // Using the reverse function to reverse the string
    reverse(str.begin(), str.end());

    // Output the reversed string
    cout << "Reversed String: " << str << endl;

    return 0;
}
