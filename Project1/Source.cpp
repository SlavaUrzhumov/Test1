#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int z, s, k;
	double b, b1;
	cout << "������� ��������: ";
	cin >> z;
	cout << "������� ���� � �����: ";
	cin >> s;
	cout << "������� ���� �������: ";
	cin >> k;
	while (s > 30) {
		s = 0;
		cout << "������� �� ����� :) "<< endl;
		cout << "������� ���� �� 30 ���: ";
		cin >> s;
	}
	switch(s) 
	{
	case 0: case 1: case 2:
		cout <<"������� �� ����������� ���������� 50 % �� ��������"<< endl;
		b = (z*50)/100;
		b1 = b / k;
		cout <<"� ������: " << b <<" ������  � ��������: "<< b1 <<" ��������";
		break;
	case 3: case 4: 
		cout << "������� �� ����������� ���������� 60 % �� �������� " << endl;
		b = (z * 60) / 100;
		b1 = b / k;
		cout << "� ������: " << b << " ������  � ��������: " << b1 << " ��������";
		break;
	case 5: case 6: case 7:
		cout << "������� �� ����������� ���������� 80 % �� �������� " << endl;
		b = (z * 80) / 100;
		b1 = b / k;
		cout << "� ������: " << b << " ������  � ��������: " << b1 << " ��������";
		break;
	case 8: case 9:  case 10: case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18: case 19: case 20: case 21: case 22: case 23: case 24: case 25: case 26: case 27: case 28: case 29: case 30: 
		cout << "������� �� ����������� ���������� 100 % �� �������� " << endl;
		b = (z * 100) / 100;
		b1 = b / k;
		cout << "� ������: " << b << " ������  � ��������: " << b1 <<" ��������";
		break;
	default:
		cout << "�� ����� ������ ����";
	}
}
