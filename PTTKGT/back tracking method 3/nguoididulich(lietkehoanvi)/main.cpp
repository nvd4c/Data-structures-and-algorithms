#include<iostream>

using namespace std;

int n, a[100][100];
int danhdau[100] = {0};
int kq[100], x[100];
int minn;

void Init()
{
    freopen("input.txt", "r", stdin);
    cin>>n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cin>>a[i][j];
            if(a[i][j] == 0)
            {
                a[i][j] = 99000;
            }
        }
    }
    danhdau[1] = 1;
    x[1] = 1;
    minn = 99000;
}

void Check()//ham check ket qua toi uu nhat
{
    int distance = 0;
    for(int i = 1; i <= n-1; i++)
    {
        distance += a[x[i]][x[i+1]];    //tinh do dai duong di qua tung thanh pho
    }
    distance += a[x[n]][1];       //quay lai thanh pho 1
    if(distance < minn)       //neu duong di toi uu hon
    {
        minn = distance;      //gan minn bang ket qua do dai duong di
        for(int i = 1;i <= n; i++)
        {
            kq[i] = x[i];//luu lai duong di vao mang kq[]
        }
    }
}

void Backtracking(int i)
{
    for(int j = 2; j <= n; j++)//vong lap for xet het cac thanh pho
    {
        if(danhdau[j] == 0) //neu thanh pho chua xet
        {
            x[i] = j;       //xet thanh pho do, them vao duong di
            danhdau[j] = 1; //danh dau la da xet
            if(i == n)
            {
                Check();//khi tim ra 1 duong di thi check xem duong di co toi uu khong
            }
            else
            {
                Backtracking(i+1);//khi chua tim duoc duong di thi tiep tuc xet thanh pho i+1
            }
            danhdau[j] = 0;//khoi tao lai thanh pho la chua xet
        }
    }
}

void Res()
{
    cout<<"Tong chi phi la: "<< minn<<endl;
    cout<<1;
    for(int i = 2; i <= n; i++)
    {
        cout<<" --> "<<kq[i];
    }
    cout<<"-->1";
}

int main()
{
    Init();
    Backtracking(2);
    Res();
}
// Do phuc tap: O(n^n)
