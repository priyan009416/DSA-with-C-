// wap to print  sum of all even number n ?
#include<iostream>
using namespace std;
int main(){
    int sum = 0 ; //start with zero
    int n; //define karega n ko ki vo integer value ha 
    cout<< "enter a any value :"; //enter a value to print sum 
   cin >> n;  
int i = 2; //i ki value 2 sa start hogi 
while (i<=n)
{
sum = sum+i; //add karega sum ki value ko i ki value ka sath   
 i = i+2; // 2 ka increment  hoga i ki value ka sath 
}
cout<< "sum of all even number is:"<< sum<<endl; // print karega sum ki value ko 
}