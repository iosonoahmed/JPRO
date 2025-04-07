// D.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // Read the number of commands
    int T = 0; // Initial temperature is 0

    for (int i = 0; i < n; i++) {
        string command;
        cin >> command; // Read the command

        // Check if command increases temperature
        if (command == "++T" || command == "T++") {
            T = T + 1;
        }
        // Check if command decreases temperature
        else if (command == "--T" || command == "T--") {
            T = T - 1;
        }
    }

    cout << T << endl; // Print the final temperature
    return 0;
}
