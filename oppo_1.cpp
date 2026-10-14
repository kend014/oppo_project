#include <iostream>
#include <string>
using namespace std;

string readinput(const string& prompt){
    cout << promt;
    string input;
    getline(cin, input);
    return input;
}

void printpassage(const string& date, const string& carNumber) {
    cout << "\nФиксация проезда:\n";
    cout << "Дата: " << date << "\n";
    cout << "Номер автомобиля: " << carNumber << "\n";
}

int main() {
    string date, carNumber;
    setlocale(LC_ALL, "Russian");

    cout << "Введите дату (формат гггг.мм.дд): ";
    getline(cin, date);

    cout << "Введите номер автомобиля: ";
    getline(cin, carNumber);

    printpassage(date, carNumber);
    
    return 0;       
}
