#include<iostream>//2
using namespace std;
int main()
{
int n, z, a[100][100];
cin >> n;
for (int i = 0; i < n; i++) {
	z = i + 1;
	for (int j = 0; j < n; j++) {
		a[i][j] = z;
		z++;
		if (z > n)
			z = 1;

	}
}

for (int i = 0; i < n; i++) {
	for (int j = 0; j < n; j++)
		cout << a[i][j] << " ";
	cout << endl;
}
}