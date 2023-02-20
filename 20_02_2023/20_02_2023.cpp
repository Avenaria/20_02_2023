
#include "Arle.h"
#include <iostream>
using namespace std;

int main()
{ 
	setlocale(LC_ALL,"");
	
		Arle::AreaRect(5, 4);
		Arle::aread2(8);
		Arle::areaTriang(5, 6, 7);
		Arle::areaTriang(7, 8);
	
		cout << Arle::GetcCount << endl;
}

