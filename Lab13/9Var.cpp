#include <iostream>//9
void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	int n, k;
	cout << "Введите номер(1 - указатели, 2 - без указателей): " << endl;
	cin >> k;
	switch (k)
	{
			case 1: {
				cout << "Введите n = ";
				cin >> n;
				int B[100][100];
				int i, j;
				cout << "Введите элементы массива" << endl;
				for (i = 0; i < n; i++)
					for (j = 0; j < n; j++)
						cin >> *(*(B + i) + j);
				float Y[100];
				int max = B[0][0];

				for (int i = 0; i < n; i++)
				{
					if (max < *(*(B + i) + i))
						max = *(*(B + i) + i);
					*(Y + i) = *(*(B + i) + i);
				}

				for (int i = 0; i < n; i++)
					*(Y + i) = *(Y + i) / max;

				cout << "Максималный элемент: " << max << endl;
				cout << "Массив Y:" << endl;

				for (int i = 0; i < n; i++)
				{
					cout << "Y[" << i << "] = " << *(Y + i) << " ";
				}
			}break;

			case 2: {
					cout << "Введите n = ";
					cin >> n;
					int B[100][100];
					int i, j;
					cout << "Введите элементы массива" << endl;

					for (i = 0; i < n; i++)
						for (j = 0; j < n; j++)
							cin >> B[i][j];
					float Y[100];
					int max = B[0][0];

					for (int i = 0; i < n; i++)
					{
						if (max < B[i][i])
							max = B[i][i];
						Y[i] = B[i][i];
					}

					for (int i = 0; i < n; i++)
						Y[i] = Y[i] / max;

					cout << "Максималный элемент: " << max << endl;
					cout << "Массив Y:" << endl;

					for (int i = 0; i < n; i++)
					{
						cout << "Y[" << i << "] = " << Y[i] << " ";
					}
			}break;
	}
	
}