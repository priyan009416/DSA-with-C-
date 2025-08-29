#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int row = 1;
    while (row <= n) {
        int col = 1;
        while (col <= n - row + 1) {
            cout << col;
            col = col+1;
        }
        int space = 1;
        while (space < row) {
            cout << "**";
            space = space+1;
        }
        int num = n - row + 1;
        while (num >= 1) {
            cout << num;
            num--;
        }
        cout << endl;
        row = row+1;
    }
}
// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1
