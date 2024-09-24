#include<iostream>
using namespace std;

int main() {
int base, exp;
cout << "Enter the base number: " << endl;
cin >> base;
cout << "Enter the exponent: " << endl;
cin >> exp;
int exponent = exp;
int result = 1;
while( exponent != 0) {
    result = result * base;
    exponent--;
}
cout << "pow of " << base << " to the power " << exp << " is " << result;
}