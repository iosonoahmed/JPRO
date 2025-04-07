// B.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;
int main() {
    int n, count = 0;
    cin >> n;  // Read the number of projects

    for (int i = 0; i < n; i++) {
        int a, b, c; //opinions
        cin >> a >> b >> c;  // read confidence levels
        if (a + b + c >= 2) {  // at least 2 engineers are confident
            count++;
        }
    }

    cout << count << endl;  // output the result
    return 0;
}
