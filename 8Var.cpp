#include <iostream>//8
#include <time.h>
using namespace std;
int main()
{
	srand(unsigned(time(NULL)));
	setlocale(0, "");

	int n, k, j = 1;
	cout << "Введите размер массива x ";

	cin >> k;
	int* x = new int[k];

	for (int i = 0; i < k; i++)

	{
		x[i] = rand() % 10;
		cout << x[i] << "- элемент массива с индексом : " << i << endl;
	}

	cout << endl;
	cout << "Введите размер массива y ";

	cin >> n;
	int* y = new int[n];

	for (int t = 0; t < n; t++)
	{
		y[t] = rand() % 10;
		cout << y[t] << " - элемент массива с индексом : " << t << endl;
	}
	cout << endl;

	int f = k + n;
	int* mas = new int[f];

	for (int i = 0; i < k; i++)
	{
		for (int t = 0; t < n; t++)
		{
			if (x[i] == y[t])
			{
				mas[j] = x[i]; j++;
			}
		}
	}

	cout << "Одинаковые числа : ";
	cout << endl;

	for (int i = 0; i < j; ++i) 
	{
		for (int s = 0; s < j; ++s) 
		{
			if (mas[s] == mas[i] && s != i) 
			{
				for (int r = s; r < j; r++) 
				{
					mas[r] = mas[r + 1];
				}
				j--;
			}
		}
	}

	for (int i = 1; i < j; i++)
	{
		cout << mas[i] << endl;
	}
}