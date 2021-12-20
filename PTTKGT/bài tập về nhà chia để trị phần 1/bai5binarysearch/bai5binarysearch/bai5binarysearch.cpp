#include<iostream>
# define max 11
using namespace std;

int binary_search(int a[max], int left, int right, int x) {
	if (left > right) return -1;
	int mid = (left + right) / 2;
	if (x == a[mid]) return mid;
	if (x < a[mid])
		return binary_search(a, left, mid - 1, x);
	return binary_search(a, mid + 1, right, x);
}
int main() {
	int a[max] = {2, 3, 3, 4, 5, 5, 7, 8, 8, 9, 9 };
	cout << binary_search(a, 0, max - 1, 7);
	return 0;
}