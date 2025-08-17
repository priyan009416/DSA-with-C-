#include<iostream>
using namespace std;
int firstocc(int arr[], int size , int key){

    int start = 0; //starting index
    int end = size-1; //ending index
    int ans = -1;
    int mid = start+ (end-start)/2;

   while(start <= end){

    if(arr[mid] == key){
        ans = mid;
        start = mid+1;
    }
    else if(key >arr[mid]){
        start = mid+1;
    }
    else if(key< arr[mid]){
        end = mid-1;
    }
    mid = start+ (end-start)/2;
   }
   return ans;
}
int lastocc(int arr[], int size , int key){

    int start = 0; //starting index
    int end = size-1; //ending index
    int ans = -1;
    int mid = start+ (end-start)/2;

   while(start <= end){

    if(arr[mid] == key){
        ans = mid;
        end = mid-1;
    }
    else if(key >arr[mid]){
        start = mid+1;
    }
    else if(key< arr[mid]){
        end = mid-1;
    }
    mid = start+ (end-start)/2;
   }
   return ans;
}
int main(){
    int even[5] = {1,2,3,3,5};   //yaha pa only increaing order ka array lana ha 
    
    cout<<"fist Index of 3 is "<< firstocc(even ,5 , 3)<<endl;
    cout<<"last Index of 3 is "<< lastocc(even , 5, 3)<<endl;
}