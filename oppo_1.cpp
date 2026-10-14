#include <iostream>
#include <string>
using namespace std;

class Passage {
public:
    string readinput(const string& prompt) {
        cout << prompt;
        string input;
        getline(cin, input);
        return input;
    }

    void printpassage(const string& date, const string& car_number) {
        cout << "\nФиксация проезда:\n";
        cout << "Дата: " << date << "\n";
        cout << "Номер автомобиля: " << car_number << "\n";
    }

    bool validateDate(const string& date) {
        if (date.size() != 10) return false;
        if (date[4] != '.' || date[7] != '.') return false;
        return true;
    }

    bool validateCarNumber(const string& car_number) {
        return !car_number.empty();
    }
};

int main() {
    setlocale(LC_ALL, "Russian");
    Passage p;

    string date = p.readinput("Введите дату (формат гггг.мм.дд): ");
    string carNumber = p.readinput("Введите номер автомобиля: ");

    if (!p.validateDate(date)) {
        cout << "Ошибка: неверный формат даты\n";
        return 1;
    }
    if (!p.validateCarNumber(carNumber)) {
        cout << "Ошибка: номер не может быть пустым\n";
        return 1;
    }

    p.printpassage(date, carNumber);
    return 0;    
}
