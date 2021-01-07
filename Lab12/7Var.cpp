#include<iostream>//7
# include <cstring>
using namespace std;
int main() 
{
	setlocale(0, "");
	char str[50];
	
	int i, k;
	cout << "Input string:";
	cin >> str;
	k = strlen(str);
	for ( i = 0; i < k; i++)
	{
		cout << str[i];
		if (str[i] == 'a')
		{
			k++;
			for (int l = k - 1; l > i; l--)
			{
				str[l] = str[l - 1];
			}
			str[i + 1] = '!';

		}	
	}
}