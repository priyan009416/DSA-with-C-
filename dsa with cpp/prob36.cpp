#include<iostream>
using namespace std;
int binarysearch(int arr[], int size , int key){

    int start = 0; //starting index
    int end = size-1; //ending index

    int mid = start+ (end-start)/2;

   while(start <= end){

    if(arr[mid] == key){
        return mid;
    }

    //go to right side
    if(key >= arr[mid]){
        start = mid+1;
    }
    else{
        end = mid-1;
    }
    mid = start+ (end-start)/2;
   }
   return -1;
}
int main(){
    int even[6] = {2,4,6,8,12,18};   //yaha pa only increaing order ka array lana ha 
    
    int index = binarysearch(even , 6 , 1);
    cout<<"Index of 1 is "<< index <<endl;
}