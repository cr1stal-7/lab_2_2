#include "shorts.h"
#include <iostream>
#include <string.h>
using namespace std;

shorts::shorts(string name, string color, float price) {
    this->shorts_name = name;
    this->shorts_color = color;
    this->shorts_price = price;
}

shorts::shorts(string name) {
    this->shorts_name = name;
}

shorts::shorts() {
}

shorts::~shorts() = default;

void shorts::input() {
    cout << "������� �������� ����: ";
    cin >> shorts_name;
    cout << "������� ���� ����: ";
    cin >> shorts_color;
    cout << "������� ��������� ����: ";
    cin >> shorts_price;
}

void shorts::output() {
    cout << "�������� ����:" << shorts_name << " ���� ����:" << shorts_color << " ��������� ����:" << shorts_price << endl;
}