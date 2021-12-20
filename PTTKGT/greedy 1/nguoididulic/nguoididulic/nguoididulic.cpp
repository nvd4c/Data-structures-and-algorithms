#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
int c = 0, cost = 999999;

int graph[4][4] = { {0, 10, 15, 20},
                    {10, 0, 35, 25},
                    {15, 35, 0, 30},
                    {20, 25, 30, 0}
};
void swap(int* x, int* y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void copy_array(int* a, int n)
{
    int i, sum = 0;
    for (i = 0; i <= n; i++)
    {
        sum += graph[a[i % 4]][a[(i + 1) % 4]];
    }
    if (cost > sum)
    {
        cost = sum;
    }
}
void hoanvi(int* a, int i, int n) //hoan vi
{
    int j, k;
    if (i == n)
    {
        copy_array(a, n);
    }
    else
    {
        for (j = i; j <= n; j++)
        {
            swap((a + i), (a + j));
            hoanvi(a, i + 1, n);
            swap((a + i), (a + j));
        }
    }
}
int main()
{
    int i, j;
    int a[] = { 0, 1, 2, 3 };
    hoanvi(a, 0, 3);
    cout << "minimum cost:" << cost << endl;
}