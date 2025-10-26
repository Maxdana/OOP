#include <iostream>
#include <windows.h>
using namespace std;
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const int n = 6;
    double B[n] = {6.2, -3.2, 0.0, 3.3, 2.2, -3.6};
    int start, finish;
    double x0, dx;
    cout << "Початкове значення індексної змінної: ";
    cin >> start;
    cout << "Кінцеве значення індексної змінної: ";
    cin >> finish;
    cout << "Початкове значення аргументу: ";
    cin >> x0;
    cout << "Крок зміни аргументу: ";
    cin >> dx;
    if (start < 0) start = 0;
    if (finish >= n) finish = n - 1;
    if (start > finish) swap(start, finish);
    int lich_poz = 0;
    double x = x0;
    cout << "\nЕлементи масиву B:\n";
    double* ptr = B + start;
    double* endPtr = B + finish;
    while (ptr <= endPtr) {
        cout << "B = " << *ptr << "  x = " << x << endl;
        if (*ptr > 0)
            lich_poz++;
        ptr++;
        x += dx;
    }
    cout << "\nКількість додатних елементів: " << lich_poz << endl;
    return 0;
}
