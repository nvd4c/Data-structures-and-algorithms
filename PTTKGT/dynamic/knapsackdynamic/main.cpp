#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);

    int V[100][100];
    int w[100];
    int c[100];

    int b, n, i, L;
    cin >> b;   //khoi luong tui
    cin >> n;   //sl do vat

    for (i = 1; i <= n; i++)
    {
        cin >> w[i];
        cin >> c[i];
    }
    for (L = 0; L <= b; L++)
    {
        V[0][L] = 0;
    }
    for (i = 0; i <= n; i++)
    {
        V[i][0] = 0;
    }
    for (i = 1; i <= n; i++)
    {
        for (L = 1; L <= b; L++)//chi mang them do vat thu i khi gia tri tui luc mang i-1 do vat o trong luong tui
        {                       // L-w[i] +c[i] lon hon khi ko mang do vat i
            V[i][L] = V[i - 1][L];
            if ((L >= w[i]) && (V[i - 1][L - w[i]] + c[i] > V[i - 1][L]))
            {
                V[i][L] = V[i - 1][L - w[i]] + c[i];
            }
        }
    }
    for (i = 0; i <= n; i++)
    {
        for (L = 0; L <= b; L++)
        {
            cout << V[i][L] << " ";//qua trinh thuc hien
        }
        cout << endl;
    }

    cout << "max weight: " << V[n][b] << endl;

    int j = n, k = b;
    cout << "selected items: ";

    while (j != 0 && k != 0)
    {
        if (V[j][k] != V[j - 1][k])
        {
            cout << j << " ";
            k -= w[j];
        }
        j--;
    }
}
