#include<iostream>
using namespace std;

bool check(int arr[], int n, int k){  //true ya false

 for(int i= 0; i<n; i++){
    if(arr[i]==k){
        return 1; //true
    }
 }
 return 0; //false
}
int main(){
     int n = 10;
     int arr[10] ={1,4,8,5,65,54,-74,42,54,122};
     int k;
     cout<<"Enter the number to searh : ";
     cin >> k;

     bool find = check(arr,10,k);
      
     if(find){
        cout<<" '' Your number is present '' " <<endl;
     }
     else{
         cout<<"!! Your number is not  present!! " <<endl;
     }
}
