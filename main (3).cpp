/*
 * Лабораторна робота №1
 * Дисципліна: Алгоритмізація та програмування
 * Виконала: студентка групи 318, Сергійчук Ольга
 * Завдання: Begin38 (Переведення відстані з кілометрів у метри й сантиметри)
 */

#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Ukrainian");
    
    cout << "--- ЗАДАЧА Begin38: Переведення кілометрів ---" << endl;
    
    double kilometers, meters, centimeters;

    // Введення відстані в кілометрах
    cout << "Введіть відстань у кілометрах: ";
    cin >> kilometers;

    // Математичні розрахунки: 1 км = 1000 м, 1 км = 100000 см
    meters = kilometers * 1000.0;
    centimeters = kilometers * 100000.0;

    // Виведення результатів
    cout << "Результат:" << endl;
    cout << " - Метри: " << meters << " м" << endl;
    cout << " - Сантиметри: " << centimeters << " см" << endl;

    return 0;
}
