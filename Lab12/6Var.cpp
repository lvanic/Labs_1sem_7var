#include <iostream>//6
# include <cstring>
using namespace std;
void main() {
	char a[] = { "123 87face th t45 133 161klacnypoc dondon" };
	char b[100] = "";


	bool cifra = false, bukva = false;
	int start = 0;
	for (int i = 0; i < strlen(a); i++) {
		if ((a[i] == ' ') || (i == (strlen(a) - 1))) {
			if ((cifra == true) && (bukva == false)) {
				for (int g = start, j = strlen(b); g < i + 1; g++, j++)
					b[j] = a[g];
				if (i == (strlen(a) - 1))
					b[strlen(b)] = ' ';
			}
			start = i + 1;
			cifra = false;
			bukva = false;
		}
		else {
			if (((int(a[i]) > 47)) && (int(a[i]) < 58))
				cifra = true;
			else
				bukva = true;
		}
	}


	start = 0;
	for (int i = 0; i < strlen(a); i++) {
		if ((a[i] == ' ') || (i == (strlen(a) - 1))) {
			if ((cifra == false) && (bukva == true)) {
				for (int g = start, j = strlen(b); g < i + 1; g++, j++)
					b[j] = a[g];
				if (i == (strlen(a) - 1))
					b[strlen(b)] = ' ';
			}
			start = i + 1;
			cifra = false;
			bukva = false;
		}
		else {
			if (((int(a[i]) > 47)) && (int(a[i]) < 58))
				cifra = true;
			else
				bukva = true;
		}
	}

	start = 0;
	for (int i = 0; i < strlen(a); i++) {
		if ((a[i] == ' ') || (i == (strlen(a) - 1))) {
			if ((cifra == true) && (bukva == true)) {
				for (int g = start, j = strlen(b); g < i + 1; g++, j++)
					b[j] = a[g];
				if (i == (strlen(a) - 1))
					b[strlen(b)] = ' ';
			}
			start = i + 1;
			cifra = false;
			bukva = false;
		}
		else {
			if (((int(a[i]) > 47)) && (int(a[i]) < 58))
				cifra = true;
			else
				bukva = true;
		}
	}

	for (int i = 0; i < strlen(b); i++)
		cout << b[i];
}