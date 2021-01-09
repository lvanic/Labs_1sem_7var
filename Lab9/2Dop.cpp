#include <iostream> //поменять местами 
#include <cmath>
#include <math.h>
using namespace std;
int main()
{
	setlocale(0, "");
	int n, i, k, j = 0;
	cout << "Введите число элементов массива " << endl;
	cin >> n;

	int* numbers = new int[n];



	for (i = 0; i < n; i++)
	{
		numbers[i] = 0 + rand() % 101;
	}

	int min = k = 0;

	for (i = 0; i < n; i++)
	{
		cout << numbers[i] << " - элемент массива " << i << endl;
	}
	for (i = 0; i < n; ++i)
	{
		if (numbers[i] < numbers[0])
		{
			 min = i ;
			
		}

	}
	cout << "Минимальный элемент - " << min << endl;

	int max = 0;

	for (i = 0; i < n; ++i)
	{
		if (numbers[i] > numbers[0])
		{
			max = i;
		}

	}
	cout << "Максимальный элемент - " << max << endl;
	if (min <= max)
	{
		cout << "Исправленный массив :" << endl;

		for (min; min <= max; max--)
		{

			numbers[i] = numbers[max];
			cout << numbers[i] << endl;


		}
	}
	else
	{
		cout << "Исправленный массив :" << endl;

		for (min; min >= max; min--)
		{

			numbers[i] = numbers[min];
			cout << numbers[i] << endl;


		}
	}
}