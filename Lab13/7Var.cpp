#include <iostream>//7
void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;

	int n, m, k;
	cout << "Введите номер(1 - указатели, 2 - без указателей): " << endl;
	cin >> k;
	switch (k)
	{
	case 1: {
		cout << "Введите n = ";
		cin >> n;
		cout << "Введите m = ";
		cin >> m;

		int B[100][100];
		int i, j, row = 0, colum = 0;
		cout << "Введите элементы массива" << endl;

		for (i = 0; i < n; i++)
			for (j = 0; j < m; j++)
				cin >> *(*(B + i) + j);
		int min = B[0][0];
		int max = B[0][0];
		int minX = 0;
		int minY = 0;
		int maxX = 0;
		int maxY = 0;

		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				if (min > * (*(B + i) + j))
				{
					min = *(*(B + i) + j);
					minX = i;
					minY = j;
				}
				else if (max < *(*(B + i) + j)) {
						max = *(*(B + i) + j);
						maxX = i;
						maxY = j;
					}

		*(*(B + minX) + minY) = max;
		*(*(B + maxX) + maxY) = min;
		cout << "Минимальный элемент B[" << minX << "," << minY << "] =" << min << endl;
		cout << "Максимальный элемент B[" << maxX << "," << maxY << "] =" << max << endl;
		cout << " Результирующий массив:" << endl;

		for (int i = 0; i < n; i++)
		{
			cout << "\n";
			for (int j = 0; j < m; j++)
				cout << "B[" << i << "," << j << "] =" << *(*(B + i) + j) << "\t";
		}
		 cout << endl;
	}break;

	case 2: {
			cout << "Введите n = ";
				cin >> n;

				cout << "Введите m = ";
				cin >> m;

				int B[100][100];
				int i, j, row = 0, colum = 0;

				cout << "Введите элементы массива" << endl;

				for (i = 0; i < n; i++)
					for (j = 0; j < m; j++)
						cin >> B[i][j];
				int min = B[0][0];
				int max = B[0][0];
				int minX = 0;
				int minY = 0;
				int maxX = 0;
				int maxY = 0;

				for (int i = 0; i < n; i++)
					for (int j = 0; j < m; j++)
						if (min > B[i][j])
						{
							min = B[i][j];
							minX = i;
							minY = j;
						}
						else if (max < B[i][j]) {
								max = B[i][j];
								maxX = i;
								maxY = j;
							}

				B[minX][minY] = max;
				B[maxX][maxY] = min;

				cout << "Минимальный элемент B[" << minX << "," << minY << "] =" << min << endl;
				cout << "Максимальный элемент B[" << maxX << "," << maxY << "] =" << max << endl;
				cout << " Результирующий массив:" << endl;

				for (int i = 0; i < n; i++)
				{
					cout << "\n";
					for (int j = 0; j < m; j++)
						cout << "B[" << i << "," << j << "] =" << B[i][j] << "\t";
				}
				cout << endl;
	}break;
	}
	
}