#include <iostream>//2
#include <ctime>
void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	int s, n, k, A[100], B[100], S[100];
	cout << "Размер массива: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> A[i];
		cout << "Номер элемента массива A " << i << ": " << A[i] << endl;
	}
	for (int i = 0; i < n; i++) {
		cin >> B[i];
		cout << "Номер элемента массива B " << i << ": " << B[i] << endl;
	}
	
	for (int j = 0; j < n; j++) {
		int *a = &A[j];
	    int *b = &B[j];
	    S[j] = *a + *b;
		cout << " "<< S[j];
	}
}