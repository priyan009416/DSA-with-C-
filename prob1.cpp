
// char value is lowercase , uppercase or zero to check 

#include<iostream>
using namespace std;

int main() {
    char ch;
    cin >> ch;

    if (ch == '0') {
        cout << "Zero" << endl;
    }
    else if (ch >= 'A' && ch <= 'Z') {
        cout << "Uppercase" << endl;
    }
    else if (ch >= 'a' && ch <= 'z') {
        cout << "Lowercase" << endl;
    }
    else {
        cout << "Not an alphabet or zero" << endl;
    }

    return 0;
}



