
#include <iostream>
#include<unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_map<string, int> catalog;  // stores book title counts

    while (n--) {
        string title;
        cin >> title;

        if (catalog[title] == 0) {
            // first occurrence of this title
            cout << "ok" << endl;
        }
        else {
            // title already exists, generate a new unique title
            cout << title << catalog[title] << endl;
        }
        catalog[title]++;  // increase the count for this title
    }

    return 0;
}
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
