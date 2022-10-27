#include "glasses.h"
#include <iostream>
#include <string.h>
using namespace std;

glasses::glasses(string name, string color, float price) {
    this->glasses_name = name;
    this->glasses_color = color;
    this->glasses_price = price;
}

glasses::glasses(string name) {
    this->glasses_name = name;
}

glasses::glasses() {
}

glasses::~glasses() = default;

void glasses::input() {
    cout << "������� �������� �����: ";
    cin >> glasses_name;
    cout << "������� ���� �����: ";
    cin >> glasses_color;
    cout << "������� ��������� �����: ";
    cin >> glasses_price;
}

void glasses::output() {
    cout << "�������� �����:" << glasses_name << " ���� �����:" << glasses_color << " ��������� �����:" << glasses_price << endl;
}