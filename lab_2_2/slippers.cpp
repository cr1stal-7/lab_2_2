#include "slippers.h"
#include <iostream>
#include <string.h>
using namespace std;

slippers::slippers(string name, int size, float price) {
    this->slippers_name = name;
    this->slippers_size = size;
    this->slippers_price = price;
}

slippers::slippers(string name) {
    this->slippers_name = name;
}

slippers::slippers() {
}

slippers::~slippers() = default;

void slippers::input() {
    cout << "Введите название сланцев: ";
    cin >> slippers_name;
    cout << "Введите размер сланцев: ";
    cin >> slippers_size;
    cout << "Введите стоимость сланцев: ";
    cin >> slippers_price;
}

void slippers::output() {
    cout << "Название сланцев:" << slippers_name << " Размер сланцев:" << slippers_size << " Стоимость сланцев:" << slippers_price << endl;
}