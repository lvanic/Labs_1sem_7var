#include <locale>//5
#include <iostream>
void main()
{
	setlocale(LC_ALL, "rus");
	using namespace std;
	int h, n, m, A[30], kmax = 0, B[30];
	cout << "Введите размер массива A " << endl;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> A[i];
	}
	cout << endl;
	for (int i = 1; i < n; i++)
		if (A[i] > A[kmax])
			kmax = i;
	cout << "Максимальный элемент " << A[kmax] << endl;
	cout << "Введите размер массива B " << endl;
	cin >> m;
	for (int h = 0; h < m; h++)
	{
		cin >> B[h];
	}
	int y = 0;
	int *a = &A[kmax];
	for (int h = 0; h < m; h++) {
		if(*a == B[h])
		y++;
	}
	if (y == 1) {
			cout << "Содержится " << endl;
	}
	else {
		cout << "Не содержится " << endl;
	}
} 