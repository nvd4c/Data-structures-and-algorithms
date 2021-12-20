#include "iostream"

using namespace  std;

//int count =0;
int x[20],n, b[50],c[50], a[20];

void init()
{
    cout <<"Nhap kich thuoc ban co: "<<endl;
    cin >> n;
    for(int i = 2; i<= 2 * n; i++)
    {
        b[i] = 1;
    }
    for (int i = 1-n; i <= n-1 ; i++)
    {
        c[i]=1;
    }
    for(int i = 1; i<=n; i++)
    {
        a[i] = 1;
    }
}
void res()
{
    for(int i =1; i <= n-1; i++)
    {
        cout <<x[i] <<"-";
    }
    cout <<x[n];
    cout <<endl;
}
void find(int i)
{
    for(int j = 1; j <= n; j++)
    {
        if(a[j] && b[i+j] && c[i-j])
        {
            a[j] = 0;
            b[i+j] = 0;
            c[i-j] =0;
            x[i] = j;
            if(i==n)
            {
                res();
                //count++;
            }
            else
            {
                find(i+1);
            }
            a[j] =1;
            b[i+j] = 1;
            c[i-j] =1;
        }
    }
}
int main()
{
    init();
    find(1);
    //cout<<count;
}