//liet ke hoan vi
#include <iostream>
#define n 4

using namespace std;

int a[n]; //a[i] nhan gia tri j neu j chua dc dung cho cac a[1] den a[i-1]
int b[n]; //de danh dau gia tri j da dc dung hay chua b[j] = 0: j da dc dung

void init()
{
    for(int i = 0; i < n; i++)
    {
        b[i] = 1;
    }
}
void res()
{
    for(int i = 0; i < n; i++)
    {
        cout<<a[i];
    }
    cout<<endl;
}
void Try(int i)
{
    int j;
    for(j = 0; j < n; j++) //(j=n-1; j >= 0; j--) nguoc tu dien (j = 0; j < n; j++) xuoi tu dien
    {
        if(b[j] == 1)
        {
            a[i]=j;
            b[j]=0;
            if(i == n-1)
            {
                res();
            }
            else
            {
                Try(i+1);
            }
            b[j]=1;
        }
    }
}
int main()
{
    init();
    Try(0);
}