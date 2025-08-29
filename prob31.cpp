#include <iostream>
#include <climits> // for INT_MAX and INT_MIN
using namespace std;

int getmin(int num[], int n) {
    int minVal = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (num[i] < minVal) {
            minVal = num[i];
        }
    }
    return minVal;
}

int getmax(int num[], int n) {
    int maxVal = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (num[i] > maxVal) {
            maxVal = num[i];
        }
    }
    return maxVal;
}

int main() {
    int size;
    cin >> size;
    int num[100];

    for (int i = 0; i < size; i++) {
        cin >> num[i];
    }

    cout << "Maximum value is : " << getmax(num, size) << endl;
    cout << "Minimum value is : " << getmin(num, size) << endl;

    return 0;
}
