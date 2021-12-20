#include <iostream>

using namespace std;

int a[100][100];
int n;
int tick[100] = {0}, color[100] = {0}, count = 1;

void input()
{
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }
}

void drawColor()
{
    color[1] = 1;
    // m[v]=x
    for (int u = 2; u <= n; u++)       //xet tu dinh so 2
    {
        for (int i = 1; i <= n; i++) {
            tick[i] = 0;
        }
        for (int v = 1; v <= n; v++) {
            if (a[u][v] != 0 && color[v] != 0) {
                tick[color[v]] = 1;
            }
        }

        int x = 0;

        for (int i = 1; i <= count; i++) //xet cac mau da to
        {
            if (tick[i] == 0)    //tim mau nho nhat trong so cac mau da to chua to cho cac dinh ke voi dinh dang xet
            {
                x = i;
                break;         //neu tim thay thi to mau cho dinh do
            }
        }
        if (x == 0)       //neu khong tim thay thi tang so mau len va to cho dinh dang xet
        {
            count++;
            x = count;
        }
        color[u] = x;         //to mau cho dinh dang xet
    }
}

void output()
{
    cout << "So mau can dung la: " << count << endl;
    for (int i = 1; i <= count; i++)
    {
        cout << " mau " << i << " gom cac dinh la: ";
        for (int j = 1; j <= n; j++)
        {
            if (color[j] == i)
            {
                cout << j << " "; //in ra cac dinh co mau i
            }
        }
        cout << endl;
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    input();
    drawColor();
    output();
}
