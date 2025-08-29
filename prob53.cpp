#include <iostream>
#include <climits>
using namespace std;

// row wise sum
void sum(int arr[][4], int n, int m)
{
    for (int i = 0; i < n; i++) // ✅ n use kiya
    {
        int total = 0;
        for (int j = 0; j < m; j++) // ✅ m use kiya
        {
            total += arr[i][j];
        }
        cout << i << " row sum is " << total << endl;
    }
    cout << endl;
}

void largest(int arr[][4], int n, int m)
{
    int maxi = INT_MIN;
    int rowindex = -1; // ✅ sahi jagah

    for (int i = 0; i < n; i++) // ✅ n use kiya
    {
        int total = 0;
        for (int j = 0; j < m; j++) // ✅ m use kiya
        {
            total += arr[i][j];
        }
        if (total > maxi)
        {
            maxi = total;
            rowindex = i; // ✅ update kiya
        }
    }

    cout << "Maximum sum of row is: " << maxi << endl;
    cout << "Row index with maximum sum is: " << rowindex << endl;
}

int main()
{
    int arr[3][4];

    for (int i = 0; i < 3; i++)
    {
        cout << "enter " << i << " row element : ";
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << endl;
    sum(arr, 3, 4);
    largest(arr, 3, 4);

    return 0;
}

