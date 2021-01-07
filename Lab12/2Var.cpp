#include <iostream>//2
using namespace std;

int main() {
 const int SIZE = 10;
 int glasnie = 0, glasnieMAX = 0;
 char k;
 string s[] = { "Posle","menu","mom","ya", "risovat", "erunda", "laba", "JavaScript", "yagor", "krasivo" }, answer;
 for (int i = 0; i < SIZE; i++) {
 cout << s[i] << " ";
 }
 cout << endl;
 for (int i = 0; i < SIZE; i++) 
 {
	 for (int j = 0; j < s[i].length(); j++) 
	 {
	 if (s[i][j] == 'u' || s[i][j] == 'a' || s[i][j] == 'e' || s[i][j] == 'o' || s[i][j] == 'i' || s[i][j] == 'U' || s[i][j] == 'A' || s[i][j] == 'E' || s[i][j] == 'I' || s[i][j] == 'O') {
	 glasnie += 1;
	 }
 }
 if (glasnie > glasnieMAX) {
 glasnieMAX = glasnie;
 answer = s[i];
 }
 glasnie = 0;
 }
 cout << endl << answer;
}