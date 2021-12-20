#include <iostream>
#define N 5

using namespace std;

int dx[]={1,2,2,1,-1,-2,-2,-1};
int dy[]={2,1,-1,-2,-2,-1,1,2};


int h[N][N];
int count =0;

void init()
{
    int i,j;
    for(i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            h[i][j] =0;
        }
    }
}
void res()
{
    int i, j;
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N;j++)
        {
            cout<<h[i][j]<<"\t";   // \t = space
        }
        cout<<"\n";
    }
    cout<<"\n";
}

void Try(int i, int x, int y)
{
    int u, v, k;
    for(k = 0; k < 8; k++)
    {
        u = x+dx[k];
        v = y+dy[k];
        if((u >= 0) && (v >= 0) && (u <= N - 1) && (v <= N - 1) && (h[u][v] == 0))
        {
            h[u][v]=i;
            if(i < N * N)
            {
                Try(i + 1, u, v);
            }
            else
            {
             cout<<"Cach thu "<< ++count <<":"<<endl;
             res();
            }
            h[u][v] =0;
        }
    }
}
int main()
{
    init();
    h[0][0]=1; //vi tri dau tien tai vi tri 0-0 duoc danh dau la 1
    Try(2,0,0);    //buoc thu 2 tinh tu vi tri dau tien 0, 0
    if(count == 0)
    {
        cout<<"Khong ton tai cach di thoa man";
    }
}
