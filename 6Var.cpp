#include <iostream>//6
using namespace std;
void main() {
    int posl1[100], posl2[100], k1, k2, tmp, a = 0;
    setlocale(0, "");
    cout << "Введите число элементов последовательности 1" << endl;
    cin >> k1;
    int *u1 = &k1;
    cout << "Введите последовательность 1" << endl;
    for (int i = 0; i < k1; i++) {
        cin >> posl1[i];
    }
    cout << "Введите число элементов последовтельности 2" << endl;
    cin >> k2;
    int *u2 = &k2;
    cout << "Введите последовательность 2" << endl;
    for (int i = 0; i < *u2; i++) {
        cin >> posl2[i];
    }
    bool if_pod = false;  
    if (*u2 <= *u1) {
        int y = 0; 
        for (int i = 0; i < *u1; ++i) {
            if (posl1[i] == posl2[y]) {
                y++;
            }
            if (y == k2) {
                cout << "Последовательность 2 является подпоследовательностью 1" << "\n";
                if_pod = true;
                break;
            }
        }
    }
    if (!if_pod) {
        cout << "Последовательность 2 не является подпоследовательностью 1"
            << "\n";
    }
}