#include<iostream>
using namespace std;
int factorial(int n ){
    int fact = 1;
    for(int i= 1;i<=n;i++){
        fact = fact*i;
    }
    return fact;
}

int nCr(){

    int n,r;

    cout<<"enter a number n : ";
    cin>>n ;
    cout<<"enter a number r : ";
    cin>>r;

    
    int num = factorial(n);

    int demo = factorial(r) * factorial(n-r);

    return num/demo;
}
int main(){
    
    cout << " Your answer is "<<nCr()<<endl;
}