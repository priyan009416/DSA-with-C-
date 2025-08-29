#include <iostream>
using namespace std;

// element search
bool ispresent(int arr[][4], int target, int n, int m)
{
    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i][j] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}
int main()
{
    // int arr[3][4]  = {1,2,3,4,5,6,7,8,9,10,11,12};
    // int arr[3][4]  = {{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};

    int arr[3][4];

    // input from row wise

    for (int i = 0; i < 3; i++)
    {
        cout << "enter " << i << " row  element : ";
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    // input colum wise

    //  for (int i = 0; i < 4; i++)
    // {
    //     cout<< "enter "<<i<<" column element : ";
    //     for (int j = 0; j < 3; j++)
    //     {

    //         cin >> arr[j][i];
    //     }
    // }
    cout << endl;
    // print
    cout << "your array is " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // element search
    cout << "enter the element to search : ";
    int target;
    cin >> target;

    if (ispresent(arr, target, 3, 4))
    {
        cout << "Element found" << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    return 0;
}
