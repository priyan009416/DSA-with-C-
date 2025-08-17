#include <iostream>
using namespace std;
void reverse(int arr[], int n)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[5] = {2, 0, 3, 4, 1};
    int n = 5;

    reverse(arr, 5);

    cout<< "reverce arry is : "<<endl;
    
    print(arr, 5);
    return 0;
}