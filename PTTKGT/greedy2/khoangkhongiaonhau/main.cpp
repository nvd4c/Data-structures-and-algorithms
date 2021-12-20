#include <iostream>
#include<algorithm>
#define max 100
using namespace std;

int n;
int x[max] = {0};
int C;
int res[max] = {0};

struct node
{
    int u;
    int v;
};
node arr[100];

bool cmp(node &a, node &b)
{
    return a.v < b.v;
}
void Init()
{
    freopen("input.txt","r",stdin);
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin>>arr[i].u>>arr[i].v;
    }
    C = 0;
}
void Res()
{
    cout<<"so luong cong viec da chon = "<<C<<endl;
    cout<<"Cac cong viec da chon: ";
    for(int i = 1; i <= n; i++)
    {
        if(res[i] == 1)
        {
            cout<<i<<" ";
        }
    }
}
void check()
{
    int totalt = 0;
    int totalc = 0;
    sort(arr+1,arr+n+1, cmp);//sap xep cong viec theo chieu tang dan dau mut phai-diem ket thuc cong viec
    int t = 1;
    for(int i = 2; i <= n; i++)
    {
        if(arr[i].u > arr[t].v) //neu diem bat dau cua cong viec sau lon hon diem ket thuc cua cong viec truoc thi chon
        {
            t = i;
            totalt += x[i] * (arr[i].v - arr[i].v);
            totalc += x[i];
        }
    }
    if(totalt <= 24)
    {
        if(totalc > C)//thoa man gia tri lon hon gia tri lon nhat truoc do
        {
            C = totalc;   //cap nhat gia tri max
            for(int i = 1; i <= n; i++)
            {
                res[i] = x[i]; //luu lai cac cong viec duoc chon
            }
        }
    }
}
void backtracking(int i) //Ham sinh ra day nhi phan
{
    for(int j = 0; j <= 1; j++)
    {
        x[i] = j; // x[i]=1 la viec i duoc chon, x[i]=0 la viec i khong duoc chon
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
int main()
{
    Init();
    backtracking(1);
    Res();
}

