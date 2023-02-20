#include "Arle.h"

#include <iostream>
using namespace std;
int Arle::count{ 0 };

void Arle::AreaRect(int widht, int heigt) {
	cout << "Площадь прямоугольнркиа равна : " << widht * heigt;
	count++;
}
void Arle::aread2(int widht) {
	cout << "\nплощадь квадрата равна = " << widht * widht;
	count++;

};
 void Arle::areaTriang(int a, int b) {
	 cout << "Площадь треугольника = " << .5 * a * b << endl;//.5 как 0,5
	 count++;
};
 void Arle::areaTriang(int a, int b, int c) {
	 auto p = (a + b + c) / 2;
	 cout << "Площадь треугольника = " << sqrt(p * (p - a) * (p - c) * (p - b));// sqrt квадратный корень 
	 count++;

};