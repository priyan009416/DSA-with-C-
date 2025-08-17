#include<iostream>
using namespace std;
int main(){
    int ch = 'a';
    int num =1;
    cout<<endl;
    switch(ch){
        case 1: cout << "first"<<endl;
             break;
        case 'a':  switch (num) 
        {
        case 1: cout<<"value is " << num <<endl;
            break;
        }
             break;

        default : cout << " it is default case"<<endl;

    }
    cout<<endl;
    return 0;
}