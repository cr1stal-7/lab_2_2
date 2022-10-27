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
    cout << "������� �������� �������: ";
    cin >> cap_name;
    cout << "������� ���� �������: ";
    cin >> cap_color;
    cout << "������� ��������� �������: ";
    cin >> cap_price;
}

void cap::output() {
    cout << "�������� �������:" << cap_name << " ���� �������:" << cap_color << " ��������� �������:" << cap_price << endl;
}