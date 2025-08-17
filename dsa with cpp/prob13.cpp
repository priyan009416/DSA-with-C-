
#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<< " Enter any number : " ;
    cin>>n;
     
 //1 method to write for loop 
     
    // for(int i = 1 ; i<=n ; i++){
    //     cout<< i <<endl;
    // }
    
//2 method to write for loop
     
    //   int i =1;
    //   for(;;){
    //     if(i<=n){
    //         cout<<i<<endl;
    //     }
    //     else{
    //         break;
    //     }
    //     i++;
    //   }

//3 method to write for loop

  for(int a = 0, b = 1; a >= 0 && b >= 1; a--, b--) {
        cout << a << " " << b << endl;
    }

}