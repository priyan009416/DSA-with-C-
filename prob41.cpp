#include <iostream>
#include <climits>
using namespace std;

int getmax(int num[], int n)
{
    int maxVal = INT_MIN; // Sabse chhoti possible value se start
    for (int i = 0; i < n; i++)
    {
        if (num[i] > maxVal)
        { // Semicolon hata diya
            maxVal = num[i];
        }
    }
    return maxVal;
}

int getmin(int num[], int n)
{
    int minVal = INT_MAX; // Sabse badi possible value se start
    for (int i = 0; i < n; i++)
    {
        if (num[i] < minVal)
        { // Semicolon hata diya
            minVal = num[i];
        }
    }
    return minVal;
}

int main()
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    int num[100];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> num[i];
    }

    cout << " " << "Maximum number is: " << getmax(num, size) << endl;
    cout << " " << "Minimum number is: " << getmin(num, size) << endl;

    return 0;
}
