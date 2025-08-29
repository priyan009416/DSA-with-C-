#include<iostream>
using namespace std;

// function to search key in array
bool search(int array[], int size, int key) {
    for(int i = 0; i < size; i++) {
        if(array[i] == key) {
            return 1; // mil gaya
        }
    }
    return 0; // nahi mila
}

int main() {
    int array[5] = {1, 3, 5, -5, 9};
    cout<<"jisa search karna ha enter kro : ";
    int key;
    cin >> key;

    bool found = search(array, 5, key); // size sahi pass karo
    if(found) {
        cout << "value hai" << endl;
    }
    else {
        cout << "nahi hai" << endl;
    }

    return 0;
}
