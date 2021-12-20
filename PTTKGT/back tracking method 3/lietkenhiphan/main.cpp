#include<iostream>
#define max 5

using namespace std;

int n;

int a[max];

void res() {
    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << "\t";
    }
    cout << endl;
}

void Try(int i)
{
    for (int j = 0; j <= 1; j++)
        {
            a[i] = j;
            if (i == n)
            {
                res();
            }
            else
            {
                Try(i + 1);
            }
        }
}

int main()
{
    cout << "Nhap n: ";
    cin >> n;
    cout <<endl;
    Try(1);
}