#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;

class cap
{
public:
    float cap_price;
    string cap_name;
    string cap_color;
    cap(string cap_name, string cap_color, float cap_price);
    cap(string cap_name);
    cap();
    ~cap();
    void input();
    void output();
};

