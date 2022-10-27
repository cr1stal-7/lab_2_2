#include "cap.h"
#include <iostream>
#include <string.h>
using namespace std;

cap::cap(string name, string color, float price) {
    this->cap_name = name;
    this->cap_color = color;
    this->cap_price = price;
}

cap::cap(string name) {
    this->cap_name = name;
}

cap::cap() {
}

cap::~cap() = default;

void cap::input() {
    cout << "Введите название шапочки: ";
    cin >> cap_name;
    cout << "Введите цвет шапочки: ";
    cin >> cap_color;
    cout << "Введите стоимость шапочки: ";
    cin >> cap_price;
}

void cap::output() {
    cout << "Название шапочки:" << cap_name << " Цвет шапочки:" << cap_color << " Стоимость шапочки:" << cap_price << endl;
}