#include <iostream> //9
#include <cmath>
#include <math.h>
using namespace std;
int main()
{
	setlocale(0, "");
	int n, m, i, k, j;
	cout << "Введите число элементов массива " << endl;
	cin >> n;
	m = n;

	int* numbers = new int[n];



	for (i = 0; i < n; i++)
	{
		numbers[i] = 0 + rand() % 101;
	}

	int avg = 0;

	for (i = 0; i < n; i++)
	{
		cout << numbers[i] << " - элемент массива " << i << endl;
	}
	int sum = 0;
	k = 1;
	for (int i = 0; i < n; ++i)
	{
		sum = sum + numbers[i];
	}
	avg = sum / n;
	cout << avg << " - среднее значение " << endl;

	int delta = 100;
	int delt;
	int closer = 0;
	for ( i = 0; i < n; i++)
	{
		delt = abs(avg - numbers[i]);
		if (delt <= delta)
		{
			delta = delt;
			closer = numbers[i];
		}

	}
	cout << closer << " - ближайшее значение к среднему";

}