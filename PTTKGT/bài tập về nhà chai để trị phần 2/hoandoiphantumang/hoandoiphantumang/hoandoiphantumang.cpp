#include<iostream>
using namespace std;

void swap(int arr[], int i, int j, int m)
{
    int p, temp;
    for (p = 0; p < m; p++)
    {
        temp = arr[i + p];
        arr[i + p] = arr[j + p];
        arr[j + p] = temp;
    }
}
void Transpose(int arr[], int m, int n)
{
    int i, j;
    if (m == 0 || n == m)
        return;
    i = m;
    j = n - m;
    while (i != j)
    {
        if (i < j)
        {
            swap(arr, m - i, m + j - i, i);
            j -= i;
        }
        else
        {
            swap(arr, m - i, m, j);
            i -= j;
        }
    }
    swap(arr, m - i, m, i);
}
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
    Transpose(arr, 2, 7);
    printArray(arr, 7);
    return 0;
}