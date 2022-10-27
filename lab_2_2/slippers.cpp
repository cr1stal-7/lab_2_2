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
    cout << "������� �������� �������: ";
    cin >> slippers_name;
    cout << "������� ������ �������: ";
    cin >> slippers_size;
    cout << "������� ��������� �������: ";
    cin >> slippers_price;
}

void slippers::output() {
    cout << "�������� �������:" << slippers_name << " ������ �������:" << slippers_size << " ��������� �������:" << slippers_price << endl;
}