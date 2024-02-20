#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    const int a = 3;
    const int b = 5;

    double arr[a][b];

    for (int i = 0; i < a; ++i) {
        cout << "Введите элементы для строки " << i + 1 << " (5 элементов): \n";
        for (int j = 0; j < b; ++j) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < a; ++i) {
        double sum = 0;
        for (int j = 0; j < b; ++j) {
            sum += arr[i][j];
        }

        double c = sum / b;
        cout << "Среднее арифметическое " << i + 1 << ": " << c << endl;
    }

    return 0;
}