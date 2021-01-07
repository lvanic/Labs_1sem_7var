#include<iostream>//10
# include <cstring>
using namespace std;
int main() 
{
	setlocale(0, "");
	char* str = new char[50];
	char* stp = new char[50];
	
	int i = 0, k;
	cout << "Input string:";
	cin >> str;
	k = strlen(str);
	if (k % 2 == 0)
	{
		for (int g = 0; g < k; g++)
		{
			*(stp + g) = *(str + g);
		}

		for (int l = k - 1; l > i; l--)
		{
			str[i] = *(str + l);
			i++;
		}
		i = 0.5 * k;

		for (int l = (0.5 * k) - 1; l < k; l++)
		{
			str[l] = stp[i];
			i--;
		}

		for (i = 0; i < k; i++)
		{
			cout << str[i];
		}
	}
	else
	{
		for (int g = 0; g < k; g++)
			{
				*(stp + g) = *(str + g);
			}
	
			for (int l = k - 1; l > i; l--)
			{
					str[i] = *(str + l);
				i++;
			}
			i = 0.5 * k;
			for ( int l = 0.5*k; l < k; l++)
			{
				str[l] = stp[i];
					i--;
			}	

			for (i = 0; i < k; i++)
					{
						cout << str[i];
					}
	}
}