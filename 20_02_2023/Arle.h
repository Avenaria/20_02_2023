#pragma once
#include <iostream>

using namespace std;
class Arle
{
	static int count;

public:
	int a = 9;
	static const int b = 8;
	static void AreaRect(int widht, int heigt);//статическая функция
	static void aread2(int);///квадрат 
	static void areaTriang(int, int);//тр
	static void areaTriang(int, int, int);//перегрузка функций как полим
	static int GetcCount() { return count; }
};


