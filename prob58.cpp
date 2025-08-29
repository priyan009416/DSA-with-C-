#include <iostream>
using namespace std;
void print(int *p)
{
    cout << *p << endl;
}
void update(int *p)
{
    *p = *p + 1;

}
void getsum(int arr[] ,int n){
int sum =0;
for(int i =0; i<n;i++){
    sum +=arr[i];
}
cout<<"sum is : "<<sum<<endl;
}
int main()
{

    int value = 5;
    int *p = &value;
    // print(p);
    cout << *p << endl; // never change
    update(p);
    cout << *p << endl; //never change

    int arr[5] ={1,2,3,4,5};
    getsum(arr,5);
    return 0;
}