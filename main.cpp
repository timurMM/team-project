// Командный проект.
#include <iostream>
#include <clocale>
// === БЛОК ПОДКЛЮЧЕНИЙ: каждый участник добавляет свой заголовочный файл ===
#include "malashok.h"
#include "lavrinec.h"
// === КОНЕЦ БЛОКА ПОДКЛЮЧЕНИЙ ===
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double a, b, c, h;
    int choice;
    double m, i;
    do {
        cout << "\n=== Командный проект: сборник расчётов ===\n";
        // === БЛОК МЕНЮ: каждый участник добавляет свои пункты ===
        cout << "1. Расчёт силы тяжести\n";
        cout << "2. Расчёт веса тела в лифте\n";
        cout << "3. Площадь (по основанию и высоте)\n";
        cout << "4. Периметр (по трём сторонам)\n";
       // === КОНЕЦ БЛОКА МЕНЮ ===
        cout << "0. Выход\n";
        cout << "Выберите пункт: ";
        cin >> choice;

        switch (choice) {
        // === БЛОК ОБРАБОТКИ: каждый участник добавляет свои case ===
             case 1:
                cout << "Введите массу: ";
                cin >> m;
                if (m <= 0) {
                    cout << "Ошибка, масса тела не может быть меньше нуля";
                }
                else {
                    cout << "Сила тяжести = " << gravityForce(m) <<"Н" "\n"; 
                }
                break;
            case 2:
                cout << "Введите массу: ";
                cin >> m;
                cout << "Введите ускорение лифта: ";
                cin >> i;
                if (m <= 0) {
                    cout << "Ошибка, масса тела не может быть меньше нуля";
                } else {
                    cout << "Вес в лифте = " << weightInLift(m, i) <<"Н" "\n";
                } break;
            case 3:
                cout << "Введите основание a и высоту h: ";
                cin >> a >> h;
                
                cout << "Введите две другие стороны b и c (для проверки): ";
                cin >> b >> c;
                
                if (a + b > c && a + c > b && b + c > a) {
                    cout << "Площадь = " << triangleArea(a, h) << " кв. ед.\n";
                } else {
                    cout << "Треугольник с такими сторонами не существует.\n";
                }
                break;
	case 4:
                cout << "Введите стороны a, b, c: ";
                cin >> a >> b >> c;
                if (a + b > c && a + c > b && b + c > a) {
                    cout << "Периметр = " << trianglePerimeter(a, b, c) << " ед.\n";
                } else {
                    cout << "Треугольник с такими сторонами не существует.\n";
                }
                break;
        // === КОНЕЦ БЛОКА ОБРАБОТКИ ===        
        case 0:
            cout << "Работа завершена.\n";
            break;
        default:
            cout << "Такого пункта нет.\n";
        }
    } while (choice != 0);
    return 0;
}
