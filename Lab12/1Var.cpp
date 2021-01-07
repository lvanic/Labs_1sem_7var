#include <conio.h>//1
#include <locale.h>
#include<iostream>
using namespace std;
void main() {
 

 char a[] = { "book bad boy kbkbk hartdg dhcmdldg brod" };

 char n;
 cout << "Введите окончание : " << endl;
 cin >> n;


 int start = 0;
 int i = 0;
 for (i = 0; i < strlen(a) + 1; i++)
 if (a[i] == ' ') {
 if (a[i - 1] == n) {
 for (int j = start; j < i; j++)
 cout << a[j];
 cout << endl;
 }

 start = i + 1;
 }
 else if (i == strlen(a))
 if (a[i - 1] == n) {
 for (int j = start; j < i; j++)
 cout << a[j];
 cout << endl;
 }


}