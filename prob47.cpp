#include<iostream>
using namespace std;

void insertion(int arr[], int n){   // <-- yaha change
    for(int i = 1; i < n; i++){
        int j = i - 1;
        
    while(j>=0 && arr[j] > arr[i]){
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = arr[i];

}
}
int main(){
    int arr[5] = {3,2,4,5,8};
    int n = 5;

    insertion(arr, n);

    cout << "Sorted array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}