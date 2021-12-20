#include <iostream>

using namespace std;

int m = 25;
int n = 12;
struct edge
{
    int start;
    int end;
    int w;
};

void swap(edge &a, edge &b)
{
    edge tmp = a;
    a = b;
    b = tmp;

}
void sort(edge a[])
{
    int i, j;
    for (i = 0; i < m - 1; i++)
    {
        for (j = i + 1; i< m; j++)
        {
            if (a[i].w > a[j].w)
            {
                swap(a[i], a[j]);               
            }
        }
    }
}
void input(edge a[])
{
    for (int i = 0; i < m; i++)
    {
        cout << "Nhap dinh dau, dinh cuoi, trong so cua canh thu: " << i + 1 << ": ";
        cin >> a[i].start >> a[i].end >> a[i].w;
    }
}

void init(int daxet[])
{
    for (int i = 0; i < n; i++)
    {
        daxet[i] = 0;    //dat cac dinh da xet = 0
    }
}
void Prim(edge E[], edge T[], int daxet[])
{
    int k, weight, j;
    k = 0; T[k] = E[0]; weight = E[0].w; daxet[E[0].start - 1] = 1; daxet[E[0].end - 1] = 1; 
    while (k < n - 2)
    {
        j = 1; while (daxet[E[j].start - 1] == daxet[E[j].end - 1]) j++;  //chu trinh 
        k += 1; T[k] = E[j]; weight += T[k].w; daxet[E[j].start - 1] = 1; daxet[E[j].end - 1] = 1;
    }
}
void printoutput(edge T[])
{
    for (int i = 0; i < n - 1; i++)
    {
        cout << T[i].start << " " << T[i].end << " " << T[i].w << endl;
    }
}
int main()
{
    edge E[11];
    edge T[7 - 1];
    int weight, k, j;
    int daxet[7];
    input(E);
    init(daxet);
    sort(E);
    Prim(E, T, daxet);
    printoutput(T);
    return 0;
    
}

