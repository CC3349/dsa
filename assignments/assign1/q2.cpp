#include <iostream>
using namespace std;

int main() {
    int n;

    // Array of English names
    string names[] = {"One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};

    cout << "Enter a number (1 to 9): ";
    cin >> n;

    if (n >= 1 && n <= 9) {
        cout << "English name: " << names[n - 1] << endl;
    } else {
        cout << "Invalid input! Please enter a number between 1 and 9." << endl;
    }

    return 0;
}

