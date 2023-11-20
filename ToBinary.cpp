#include <iostream>
#include <bitset>

using namespace std;

string intToBinary(int number) {
    return bitset<32>(number).to_string();
}

int main() {
    // Example usage:
    int integer_value;
    cout<<"Enter the number: "<<endl;
    cin>>integer_value;
    string binary_value = intToBinary(integer_value);

    cout << "The binary representation of " << integer_value << " is: " << binary_value << endl;

    return 0;
}
