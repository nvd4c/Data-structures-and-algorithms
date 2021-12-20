#include<iostream>

#define N 5
#define Start 3
using  namespace std;

int a[N], b[N], luu[N], gttu = 100000, S=0;
int A[N][N]={ {0,1,2,7,5},
              {1,0,4,4,3},
              {2,4,0,1,2},
              {7,4,1,0,3},
              {5,3,2,3,0},
};
void init()
{
    for(int i =0 ;i <N ; i++)
        b[i]=1;
    a[0]= Start; //tp bat dau
    b[Start] = 0; //danh dau

}
void luukq()
{
    for(int i =0; i<N;i++)
        luu[i]= a[i];
}
void Xuat()
{
    cout<<"Gia tri toi uu = "<<gttu<<endl;
    for(int i=0;i<N;i++)
        cout<<luu[i]<<" ";
    cout<<Start;
    cout<<endl;
}

int giatri()
{
    int S=0, start = Start;
    for(int i =1;i<N;i++)
    {
        S+=A[start][a[i]];
        start = a[i];
    }
    S+=A[start][a[0]];
    return S;

}
void xuatduongdi()
{
    cout<<"gia tri trung gian =" <<giatri()<<endl;
    for(int i =0; i<N; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<Start;
    cout<<endl;
}

void Try(int i)
{
    int j;
    for(j=0;j<N;j++)
    {
        if(b[j]==1)
        {
            a[i] = j;
            b[j]=0;
            if(i==N-1)
            {
                xuatduongdi();
                if(giatri()<gttu)
                {
                    gttu =giatri();
                    luukq();
                }
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
    Try(1);
    Xuat();
}