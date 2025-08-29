#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int array[n];
    // input the array
    for(int i = 0; i<n; i++){
        cin>> array[i];
    }
    // sum array
    int sum = 0;
    for(int i = 0 ; i<n; i++){
        sum = sum + array[i];
    }
    //print the tottal sum of array 
    cout<< "total sum of array : "<< sum <<endl;
}