#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter any number : ";
    cin>>n;
    int row = 1;
    int num = 1;

    while(row <= n) {
        // Print leading spaces
        int space = 1;
        while(space <= n - row) {
            cout << "  ";  // 2 spaces
            space++;
        }

        // Print numbers in row
        int col = 1;
        while(col <= row) {
            cout << num << " ";
            num++;
            col++;
        }

        cout << endl;
        row++;
    }

    return 0;
}
   