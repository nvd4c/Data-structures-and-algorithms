#include <iostream>
using namespace std;

struct dovat
{
    int w;
    int c;
};

void replace(dovat& a, dovat& b)
{
    dovat tmp = a;
    a = b;
    b = tmp;
}

void greedy1(dovat a[], int n) 
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i].c < a[j].c)
            {
                replace(a[i], a[j]);
            }
        }
    }
    
}

void greedy2(dovat a[], int n)  
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i].w > a[j].w)
            {
                replace(a[i], a[j]);
            }
        }
    }
}

void greedy3(dovat a[], int n) 
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i].c / a[i].w <a[j].c / a[j].w)
            {
                replace(a[i], a[j]);
            }
        }
    }
}

void nhapdovat(dovat a[], int n, int &b)
{
    cout << "trong luong tui: ";
    cin >> b;
    for (int i = 0; i < n; i++)
    {
        cout<<"khoi luong va gia tri cua vat thu" <<i+1<<": ";
        cin >> a[i].w >> a[i].c;
    }
}

void chondovat(dovat a[], int n, int b)
{
    for (int i = 0; i < n; i++)
    {
        if (b >= a[i].w)
        {
            cout << "chon do vat co khoi luong =" << a[i].w <<"gia tri bang " << a[i].c <<endl;
            b = b - a[i].w;
        }
    }
}
int main()
{
    dovat a[3];
    int b;
    nhapdovat(a, 3, b);
    greedy1(a, 3);
    chondovat(a, 3, b);
    return 0;
}

