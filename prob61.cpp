#include <iostream>
using namespace std;
int main()
{
    int row;
    cout <<"Enter  row size : " ;
    cin >> row;
     int col;
    cout <<"Enter col size : " ;
    cin >> col;
    int **arr = new int *[row];

    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }
   
    cout<<"<--- enter array elements --->"<<endl;
    for (int i = 0; i < row; i++)
    { 

        for (int j = 0; j < col; j++)
        {
           
            cin >> arr[i][j];
        }
    }

    cout << endl;
    cout <<"your array is --> " <<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}