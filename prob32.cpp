#include<iostream>
using namespace std;
void update(int arr[], int n){
    cout<<"inside the function"<<endl;
    
     arr[0] = 120;
for(int i = 0; i<3; i++){
cout<< arr[i] << "" ;
}
cout<<endl;
cout<<"go back the main function  " <<endl;
} 
int main(){

int arr[3] = { 1 ,2 , 3 };
update(arr, 3);
cout<<endl;
cout<<"print the ma9in function"<<endl;
for(int i = 0; i<3; i++){
cout<< arr[i] << "" ;
}
cout<<endl;
return 0;
}