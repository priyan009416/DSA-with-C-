
// wap to print sum of  n number?
#include<iostream>
using namespace std;
int main(){
    int sum = 0 ; //start with zero
    int n; //define karega n ko ki vo integer value ha 
    cout<< "enter a any value :"; //enter a value to print sum 
   cin >> n;  
int i = 1; //i ki value 1 sa start hogi 
while (i<=n)
{
sum = sum+i; //add karega sum ki value ko i ki value ka sath   
 i = i+1; // 1 ka increment  hoga i ki value ka sath 
}
cout<< "your value is :"<< sum<<endl; // print karega sum ki value ko 
}
