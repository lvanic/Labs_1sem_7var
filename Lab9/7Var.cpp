#include <iostream> //7
#include <cmath>
#include <math.h>
using namespace std;
int main()
{
	setlocale(0, "");
	int n, m, i, k, j = 0;
	cout << "Введите число элементов массива " << endl;
	cin >> n;
	m = n;

	int* numbers = new int[n];
	int* numb = new int[n];


	for (i = 0; i < n; i++)
	{
		numbers[i] = 0 + rand() % 101;
	}

	int min = numbers[0];

	for (i = 0; i < n; i++)
	{
		cout << numbers[i] << " - элемент массива " << i << endl;
	}
	for (int i = 0; i < n; ++i)
	{
		if (numbers[i] < min)
		{
			min = numbers[i];
		}

	}
	
	j = 0;
	cout << "Минимальное число - " << min << endl;
	k = n;
	for (i = 0; i < k; i++)
	{
		

		if (numbers[i] != min)
		{

			numbers[j] = numbers[i];

			cout << numbers[j] << " - элемент массива без минимума " << j << endl;
			j++;
			
		}	
	}
	m = j;
	int sum = 0;
	int avg;
		for (int i = 0; i < n; ++i)
		{
			sum = sum + numbers[i];
		}
		avg = sum / n;
		cout << avg << " - среднее значение " << endl;

		j = 0;
		for (int l = 0; l < m + 3; l++)
		{
			if (l < 3)
			{
		numb[l] = avg;
		cout << numb[l] << endl;
			}
			else
			{
					numb[l] = numbers[j];
					cout << numb[l] << endl;
					j++;
					
			}
		}
}