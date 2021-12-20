#include <iostream>
#include <math.h>
using namespace std;

int MaxLeftVector(int a[], int i, int j)
{
    int MaxSum = a[j];
    int Sum = a[j];
    for (int k = j-1; k >= i; k--)
    {
        Sum += a[k];
        if(Sum > MaxSum) MaxSum = Sum;
    }
    return MaxSum;
}

int MaxRightVector(int a[], int i, int j)
{
    int MaxSum = a[i];
    int Sum = a[i];
    for (int k = i + 1; k <= j; k++)
    {
        Sum += a[k];
        if (Sum > MaxSum) MaxSum = Sum;
    }
    return MaxSum;
}
int MaxSubVector(int a[], int i, int j)
{
    int WL, WR, WM, m;
    if (i == j) return a[j];
    else
    {
        m = (i + j) / 2;
        WL = MaxSubVector(a, i, m);
        WR = MaxSubVector(a, m+1, j);
        WM = MaxLeftVector(a, i, m)+ MaxRightVector(a, m+1, j);
        return(max(WM, max(WL, WR)));
    }
}
int main()
{
    int a[] = { -98,54,67, 65,-879,78,65,21,-6,67 };
    cout << MaxSubVector(a, 0, 9);
}


