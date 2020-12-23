#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int z, s, k;
	double b, b1;
	cout << "Введите зарплату: ";
	cin >> z;
	cout << "Введите стаж в годах: ";
	cin >> s;
	cout << "Введите курс доллара: ";
	cin >> k;
	while (s > 30) {
		s = 0;
		cout << "Столько не живут :) "<< endl;
		cout << "Введите стаж до 30 лет: ";
		cin >> s;
	}
	switch(s) 
	{
	case 0: case 1: case 2:
		cout <<"Выплата по больничному составляет 50 % от зарплаты"<< endl;
		b = (z*50)/100;
		b1 = b / k;
		cout <<"В рублях: " << b <<" рублей  В долларах: "<< b1 <<" долларов";
		break;
	case 3: case 4: 
		cout << "Выплата по больничному составляет 60 % от зарплаты " << endl;
		b = (z * 60) / 100;
		b1 = b / k;
		cout << "В рублях: " << b << " рублей  В долларах: " << b1 << " долларов";
		break;
	case 5: case 6: case 7:
		cout << "Выплата по больничному составляет 80 % от зарплаты " << endl;
		b = (z * 80) / 100;
		b1 = b / k;
		cout << "В рублях: " << b << " рублей  В долларах: " << b1 << " долларов";
		break;
	case 8: case 9:  case 10: case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18: case 19: case 20: case 21: case 22: case 23: case 24: case 25: case 26: case 27: case 28: case 29: case 30: 
		cout << "Выплата по больничному составляет 100 % от зарплаты " << endl;
		b = (z * 100) / 100;
		b1 = b / k;
		cout << "В рублях: " << b << " рублей  В долларах: " << b1 <<" долларов";
		break;
	default:
		cout << "Не верно указан стаж";
	}
}
