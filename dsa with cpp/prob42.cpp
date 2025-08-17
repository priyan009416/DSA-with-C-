#include<iostream>
using namespace std;
int sum(int arr[] , int n ){
    int  sum = 0;
    for(int i= 0; i<n; i++){
        sum = sum + arr[i];
    }
    return sum;
}
int main(){
    int n = 5;
    int arr[5] = {20,20,20,20,120};

    int total=  sum(arr,n);
    cout<<"sum of array is : " << total <<endl;
}