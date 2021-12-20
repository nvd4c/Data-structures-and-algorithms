// tinhluythua.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int pow(int a, int n)
{
	if (n == 1) {
		return a;
	}
	else {
		int temp = pow(a, n / 2);
		if (n % 2 == 0)
			return temp * temp;     //chan
		else
			return temp * temp * a;   //le
	}
}

int main()
{
	cout << "ket qua la:" << pow(2, 3);
}
