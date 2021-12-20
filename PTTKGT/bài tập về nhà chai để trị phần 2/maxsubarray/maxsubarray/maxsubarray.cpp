#include <iostream>
#include <math.h>
using namespace std;

int MaxLeftVector(int a[], int i, int j, int& dau)
{
    int MaxSum = a[j];
    int Sum = a[j];
    for (int k = j - 1; k >= i; k--)
    {
        Sum += a[k];
        if (Sum > MaxSum) { MaxSum = Sum; dau = k; }
    }
    return MaxSum;
}

int MaxRightVector(int a[], int i, int j, int& cuoi)
{
    int MaxSum = a[i];
    int Sum = a[i];
    for (int k = i + 1; k <= j; k++)
    {
        Sum += a[k];
        if (Sum > MaxSum) { MaxSum = Sum; cuoi = k; }
    }
    return MaxSum;
}
int MaxSubVector(int a[], int i, int j, int& dau, int& cuoi)
{
    int dau1, dau2, dau3, cuoi1, cuoi2, cuoi3;
    int WL, WR, WM, m;
    if (i == j) return a[j];
    else
    {
        m = (i + j) / 2;
        WL = MaxSubVector(a, i, m, dau1, cuoi1);
        WR = MaxSubVector(a, m + 1, j, dau2, cuoi2);
        WM = MaxLeftVector(a, i, m, dau3) + MaxRightVector(a, m + 1, j, cuoi3);
        int maxTemp = max(max(WL, WR), WM);
        if (maxTemp == WL) { dau = dau1; cuoi = cuoi1; }
        else if (maxTemp == WR) { dau = dau2; cuoi = cuoi2; }
        else if (maxTemp == WM) { dau = dau3; cuoi = cuoi3; }
        return maxTemp;
    }
}
int main()
{
    int dau, cuoi;
    int sum = MaxSubVector(b, 0, 9, dau, cuoi);
    cout << "day con co trong so lon nhat la: " << sum << endl;
    cout << "chi so tu: " << dau << " den :" << cuoi << endl;
}