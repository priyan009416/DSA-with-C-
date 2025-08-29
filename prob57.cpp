#include <iostream>
using namespace std;
int main()
{
    // int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // //     cout<<"address of first memeory block is : "<<*arr<<endl;

    // //     //ye index ka base par address daga -->
    // //      cout<<"address of  arr 0th index  is : "<<&arr[0]<<endl;

    // //  *arr = *arr +1;
    // //     cout<<"address of first memeory block is : "<<*arr<<endl;

    // int temp[10];
    // int *ptr = &temp[0];
    // cout << sizeof(temp) << endl;
    // cout << sizeof(ptr) << endl;

    // cout << sizeof(*ptr) << endl;
    // cout << "start" << endl;
    // int a[20] = {1, 2, 3, 4};
    // int *p = &a[20];
    // cout << a << endl;
    // cout << &a << endl;
    // cout << *a << endl;
    // cout << *p << endl;
    // cout << p << endl;
    // cout << p << endl;
    // *p = (*p + 1);

    // cout << *p << endl;
    // *p = (*p + 1);
    // cout << *p << endl;

    int arr[10];

    // arr = arr+1;   // not allow
    cout<<arr<<endl;

    int *p = &arr[10];
    p = p+1;
    cout<<p<<endl;
}