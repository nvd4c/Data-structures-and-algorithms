#include<iostream>
#define max 100
using namespace std;

int W, C;
int n, b;
int w[max], c[max];
int x[max] = {0};
int res[max] = {0};

void init()
{
    freopen("input.txt","r",stdin);
    cin>>n>>b;
    for(int i = 1; i <= n; i++)
    {
        cin>>w[i]>>c[i];
    }
    C = 0;
    cout<<"Tong so do vat la: "<<n<<endl;
    cout<<"Tong trong luong cai tui co the mang di la: "<<b<<endl;
}

void check()
{
    int totalw = 0;
    int totalc = 0;
    for(int i = 1; i <= n; i++)
    {
        totalw += x[i] * w[i];
        totalc += x[i] * c[i];
    }
    if(totalw <= b)
    {
        if(totalc > C)//thoa man gia tri lon hon gia tri lon nhat truoc do
        {
            C = totalc;//cap nhat gia tri max
            W = totalw;//cap nhat khoi luong max
            for(int i = 1; i <= n; i++)
            {
                res[i] = x[i]; //luu lai cac do vat duoc chon
            }
        }
    }
}

void backtracking(int i) //Ham sinh ra day nhi phan
{
    for(int j = 0; j <= 1; j++)
    {
        x[i] = j; // x[i]=1 la vat i duoc chon, x[i]=0 la vat i khong duoc chon
        if(i == n)
        {
            check();
        }
        else
        {
            backtracking(i+1);
        }
    }
}

void Res()
{
    cout<<"Trong luong max = "<<W<<" , Gia tri max = "<<C<<endl;
    cout<<"Cac do vat da chon la: ";
    for(int i = 1; i <= n; i++)
    {
        if(res[i] == 1) cout<<i<<" ";
    }
}

int main()
{
    init();
    backtracking(1);
    Res();
}
// Do phuc tap: O(n)
