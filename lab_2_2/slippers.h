#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;

class slippers
{
public:
    float slippers_price;
    int slippers_size;
    string slippers_name;
    slippers(string slippers_name, int slippers_size, float slippers_price);
    slippers(string slippers_name);
    slippers();
    ~slippers();
    void input();
    void output();
};

