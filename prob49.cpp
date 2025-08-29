#include <iostream>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int arr3[])
{
    int i = 0, j = 0, k = 0;

    // merge elements
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }

    // agar arr1 bacha ho
    while (i < n)
    {
        arr3[k++] = arr1[i++];
    }

    // agar arr2 bacha ho
    while (j < m)
    {
        arr3[k++] = arr2[j++];
    }
}

void print(int ans[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {5, 6, 7};

    int n = 4, m = 3;
    int arr3[n + m]; // result array size = 7

    merge(arr1, n, arr2, m, arr3);
    print(arr3, n + m);

    return 0;
}
