#include<iostream>
using namespace std;
 void printcounting(){
    int n;
    cout<<"Enter any number : ";
    cin>>n;
    for (int i =1; i <= n; i++){
        cout<< i<<endl;
    }
    cout<<endl;
 }
 int main(){
    printcounting();
 }