#include<iostream>
# define max 11
using namespace std;

int MIN(int a[max], int left, int right)
{
	if (left == right) return a[left];
	else
	{
		int mid = (left + right) / 2;
		if (MIN(a, left, mid) < MIN(a, mid + 1, right)) return MIN(a, left, mid);
		else return MIN(a, mid + 1, right);
	}
}

int MAX(int a[max], int left, int right)
{
	if (left == right) return a[left];
	else
	{
		int mid = (left + right) / 2;
		if (MAX(a, left, mid) > MAX(a, mid + 1, right)) return MAX(a, left, mid);
		else return MAX(a, mid + 1, right);
	}
}

int main() {
	int a[max] = { 2, 3, 3, 4, 5, 5, 7, 8, 8, 9, 9 };
	cout << MIN(a, 0, max - 1);
	cout << "" << endl;
	cout << MAX(a, 0, max - 1);
	return 0;
}