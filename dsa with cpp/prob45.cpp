#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {          // outer loop
        for(int j = 0; j < n-i; j++) {    // inner loop
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main() {
    int arr[5] = {5, 3, 2, 4, 1};
    int n = 5;

    bubbleSort(arr, n);

    // print sorted array
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
