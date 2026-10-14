#include <iostream>
#include <string>
using namespace std;

int main() {
    string date, carNumber;
    setlocale(LC_ALL, "Russian");

    cout << "Введите дату (формат гггг.мм.дд): ";
    getline(cin, date);

    cout << "Введите номер автомобиля: ";
    getline(cin, carNumber);

    cout << "\nФиксация проезда:\n";
    cout << "Дата: " << date << "\n";
    cout << "Номер автомобиля: " << carNumber << "\n";

    return 0;       
}