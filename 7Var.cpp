#include <iostream>//7
#include <time.h>

using namespace std;
int main()

{
	srand(unsigned(time(NULL)));
	setlocale(0, "");

	int n, k;

	cout << "Введите размер массива ";
	cin >> n;

	cout << endl;

	cout << "Введите число k ";
	cin >> k;

	int* A = new int[n];

	for (int i = 0; i < n; i++)
	{
		A[i] = rand() % 100;
		cout << A[i] << " - элемент массива с индексом : " << i << endl;
	}
	cout << endl;

	cout << " номера элементов > k : ";
	for (int i = 0; i < n; i++)
	{

		if (*(A + i) > k)
		{
			cout << i << ' ';
		}
	}
	cout << endl;

	cout << " номера элементов < k : ";
	for (int i = 0; i < n; i++)
	{
		if (*(A + i) < k) 
		{
			cout << i << ' ';
		}
	}
	cout << endl;
	cout << " номера элементов = k : ";

	for (int i = 0; i < n; i++)
	{
		if (*(A + i) == k)
			cout << i << ' ';
	}
	cout << endl;
}