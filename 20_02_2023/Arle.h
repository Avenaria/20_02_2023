#pragma once
#include <iostream>

using namespace std;
class Arle
{
	static int count;

public:
	int a = 9;
	static const int b = 8;
	static void AreaRect(int widht, int heigt);//����������� �������
	static void aread2(int);///������� 
	static void areaTriang(int, int);//��
	static void areaTriang(int, int, int);//���������� ������� ��� �����
	static int GetcCount() { return count; }
};


