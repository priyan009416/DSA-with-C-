#include<iostream>
using namespace std;
bool isprime(){
    int n ;
    cout<<"enter any number : ";
    cin>>n;
    for(int i = 2;i<n;i++){
    if ( n % i==0){
        return 0 ;
    }
    
}
return 1;
}
int main(){
    if(isprime()){
        cout<<"prime"<<endl;
    }
    else{
    cout<<"not prime"<<endl;
    }
}