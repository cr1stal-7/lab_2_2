#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;

class glasses
{
public:
    float glasses_price;
    string glasses_name;
    string glasses_color;
    glasses(string glasses_name, string glasses_color, float glasses_price);
    glasses(string glasses_name);
    glasses();
    ~glasses();
    void input();
    void output();
};

