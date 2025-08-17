#include<iostream>
using namespace std;
int main(){
    int a =4;
    int b = 6;

       // bitwise Operator
       
    cout<<" a&b "<< (a&b) <<endl;  //4
    cout<<" a|b "<< (a|b) <<endl;  //6
    cout<<" ~a "<< ~a <<endl;      //-5
    cout<<" a^b "<< (a^b)  <<"\n" <<endl;  //2

    cout<< (17>>1) <<endl;   //8
    cout<< (17>>2) <<endl;   //4
    cout<< (19<<1) <<endl;   //38
    cout<< (21<<2) <<"\n" <<endl;   //84

    int i = 7 ;
    cout<<(++i) <<endl;    //8  
    cout<<(i++) <<endl;    //8
    cout<<(i--) <<endl;    //9
    cout<<(--i) <<endl;    //7
}