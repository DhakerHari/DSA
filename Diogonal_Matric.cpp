#include <iostream>
using namespace std;

void setMatrix(int a[], int i, int j, int x)
{
    if (i == j)
    {
        a[i - 1] = x;
    }
}
int getMatrix(int a[], int i, int j)
{
    if (i == j)
    {
        return a[i - 1];
    }
    else
    {
        return 0;
    }
}

int main()
{
    int arr[] = {3, 5, 9, 8, 2};
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j)
            {
                setMatrix(arr, i, j, arr[i - 1]);
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j)
            {
                cout << arr[i - 1] << " ";
            }
            else
            {
                cout << 0 << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}