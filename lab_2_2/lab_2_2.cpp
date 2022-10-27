#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;
#include "glasses.h"
#include "cap.h"
#include "shorts.h"
#include "slippers.h"
#include "swim.h"

int main()
{
	setlocale(LC_ALL, "Rus");
	int k = 0;
	glasses _glasses = glasses("glasses_name", "glasses_color" , 0);
	cap _cap = cap("cap_name", "cap_color", 0);
	shorts _shorts = shorts("shorts_name", "shorts_color", 0);
	slippers _slippers = slippers("slippers_name", 0, 0);
	swim* set = new swim[2];
	set[0] = swim(_glasses, _cap, _shorts, _slippers);
	set[0].input();
	while (k != 4) {
		cout << "Введите:" << endl;
		cout << "1 - Для вывода вашего комплекта" << endl;
		cout << "2 - Для вывода итоговой стоимости" << endl;
		cout << "3 - Для анализа цветовой гаммы" << endl;
		cout << "4 - Завершить работу программы" << endl;
		cin >> k;
		switch (k) {
		case 1:
			set->output();
			break;
		case 2:
			set->res(*set);
			break;
		case 3:
			set->color(*set);
			break;
		}
		fflush(stdin);
	}
	delete set;
	delete[] set;
}