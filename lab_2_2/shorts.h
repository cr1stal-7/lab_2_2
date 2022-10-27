#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;

class shorts
{
public:
    float shorts_price;
    string shorts_name;
    string shorts_color;
    shorts(string shorts_name, string shorts_color, float shorts_price);
    shorts(string shorts_name);
    shorts();
    ~shorts();
    void input();
    void output();
};

