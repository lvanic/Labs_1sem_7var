#include <iostream> //Подрядоидущие числа
#include <cmath>
#include <math.h>
using namespace std;
int main()
{
	setlocale(0, "");
	int n, m, i, k = 0, j;
	cout << "Введите число элементов массива " << endl;
	cin >> n;

	int* numbers = new int[n];



	for (i = 0; i < n; i++)
	{
		numbers[i] = 0 + rand() % 101;
	}

	for (i = 0; i < n; i++)
	{
		cout << numbers[i] << " - элемент массива " << i << endl;
	}

	numbers[0] = 40;
	numbers[1] = 40;
	numbers[2] = 40;

	numbers[6] = 40;
	numbers[7] = 40;
	numbers[8] = 40;
	numbers[9] = 40;
	numbers[10] = 40;

	for (i = 0; i < n; i++)
	{
		if (numbers[i] == numbers[i+1])
		{
			m = k = k + 1;
			
		}
		
		if (m != k)
		{
			k = 0;
			
		}

		if (m > k)
		{
			k = m;
			
		}
		
	}

m = m - 1;

	cout << m << " - кол-во подрядоидущих чисел " << endl;
}