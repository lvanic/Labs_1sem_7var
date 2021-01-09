#include <iostream> //Числа фибоначчи
#include <cmath>
#include <math.h>

using namespace std;
int main()
{
	setlocale(0, "");
	int n, f, i, k;
	const int m = 14;

	cout << "Введите число элементов массива " << endl;
	cin >> n;
	

	int* numbers = new int[n];
	int fib[m];
	fib[1] = 0;		
	fib[2] = 1;
	fib[3] = 1;
	for (f = 1; f < m; f++)
	{
		fib[f] = fib[f - 1] + fib[f - 2];

		fib[1] = 0;
		fib[2] = 1;
		fib[3] = 1;

		cout << fib[f] << " - число Фибоначчи" << endl;
	}

	for (i = 0; i < 14; i++)
	{

	}

	for (i = 0; i < n; i++)
	{
		numbers[i] = 0 + rand() % 101;
	}

	int min = numbers[0];

	for (i = 0; i < n; i++)
	{
		cout << numbers[i] << " - элемент массива " << i << endl;
	}

	numbers[1] = 89;

	for (i = 0; i < n; i++)
	{
		for ( f = 1; f < m; f++)
		{
			if (numbers[i] == fib[f])
			{
				cout << numbers[i] << " - число Фибоначчи c индексом " << i << endl;
			}
		}
	}
	
}