#include "pch.h"
#include <iostream>
using namespace std;

int b = 1;

int fib(int n, int b) {

	if (n > 2) {
		b++;		
		b = fib(n - 1, b) + fib(n - 2, b);
	}

	if (n == 2 || n == 1) {
		return 1;
	}
	
	if (n <= 0 ) {
		cout << "n <= ";
		return 0;
	}

	else return b;
}

int main()
{
	int a;
	cin >> a;
	int num;
	num = fib(a, b);
    cout << num << endl; 
	system("pause");
	return 0;
}