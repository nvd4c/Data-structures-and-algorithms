﻿#include<iostream>
using namespace std;


int m = 25;
int n = 12;
struct canh
{
	int d;
	int c;
	int w;
};

void doicho(canh& a, canh& b)
{
	canh tmp = a;
	a = b;
	b = tmp;
}
void sapxep(canh a[])
{
	int i, j;
	for (i = 0; i < m - 1; i++)
		for (j = i + 1; j < m; j++)
		{
			if (a[i].w > a[j].w)
			{
				doicho(a[i], a[j]);
			}
		}
}

void nhap(canh a[])
{
	for (int i = 0; i < m; i++)
	{
		cout << "Nhap dinh dau, dinh cuoi va trong so cua canh thu " << i + 1 << ": ";
		cin >> a[i].d >> a[i].c >> a[i].w;
	}
}
void khoitao(int sh_cay[])
{
	for (int i = 0; i < n; i++)
	{
		sh_cay[i] = i;
	}
}
void Kruskal(canh E[], canh T[], int sh_cay[])
{
	int k = -1, trong_so, j, x, a, b;
	for (j = 0; j < m; j++)
		if (sh_cay[E[j].d - 1] != sh_cay[E[j].c - 1])
		{
			k += 1; T[k] = E[j]; trong_so += T[k].w;
			a = sh_cay[E[j].d - 1];
			b = sh_cay[E[j].c - 1];
			for (x = 0; x < n; x++)   if (sh_cay[x] == b)  sh_cay[x] = a;
		}
}
void incaykhung(canh T[])
{
	for (int i = 0; i < n - 1; i++)
	{
		cout << T[i].d << " " << T[i].c << " " << T[i].w << endl;
	}
}
int main()
{
	canh E[25], T[12 - 1];
	int trong_so, k, j;
	int sh_cay[12];
	nhap(E);
	khoitao(sh_cay);
	sapxep(E);
	Kruskal(E, T, sh_cay);
	incaykhung(T);
	return 0;
}

