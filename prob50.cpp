#include<iostream>
using namespace std;
int getlength(char name[]){

    int count = 0;
    for(int i =0; name[i] !='\0'; i++){
        count++;
 }
 return count;
}


 int main(){
    char name[10];
    cout<<"enter your name : ";
    cin>>name;
    // name[2] = '\0';
    cout<<"your name is "<<name<<endl;

    int length = getlength(name);
    cout<<"name length is : "<<length<<endl;
 }