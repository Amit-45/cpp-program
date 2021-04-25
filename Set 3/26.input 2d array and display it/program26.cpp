//Taking 2d array as an input and printing it
//First for loop is for taking input and other for output
//For loop just inside the first for loop is for the rows and the next one for columns
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row, column;
    cin >> row >> column;
    int array[row][column];
    for (int i = 0; i < row; ++i) //row
    {
        for (int j = 0; j < column; ++j) //column
        {
            cin >> array[i][j];
        }
    }
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < column; ++j)
        {
            cout << array[i][j] << " ";
        }
        cout << "\n";
    }
}