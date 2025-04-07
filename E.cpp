// E.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;
int main() {
    string x;
    cin >> x;

     //Process each digit
    for (int i = 0; i < x.length(); i++) {
        int digit = x[i] - '0';  // Convert char to int
        int transformed = 9 - digit;  // Transformation rule

       //  Choose the smaller value, ensuring first digit isn't zero
        if (i == 0 && transformed == 0) {
            continue;  // Don't transform if it makes the first digit zero
        }

        if (transformed < digit) {
            x[i] = transformed + '0';  // Convert back to char
        }
    }

    cout << x << endl;  // Print the final transformed number
    return 0;
}
