// A.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include<iostream>
using namespace std;


//project A
int main() {
    long long n, m, a;
    // n-->Hieght of the garden
    //m-->width of the garden
    //a-->side length of each square flower bed
    cin >> n >> m >> a;

    // Compute the number of flower beds needed
    long long rows = (n + a - 1) / a;
    //this line intend -->ensures proper rounding up (ceil has the same job but this is more ensure)
    long long cols = (m + a - 1) / a;
    //the same idea 

    cout << rows*cols << endl;

    return 0;
}
