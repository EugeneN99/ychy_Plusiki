#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	int first_num = 7, second_num = 12, third_num = 18;
	int sum, product;
	double ar_m;
	sum = first_num + second_num + third_num;
	product = first_num * second_num * third_num;
	ar_m =  (double) sum / 3;
	cout << "\t\t������ �����: " << first_num << "\t\t������ �����: " << second_num << "\t������ �����: " << third_num;
	cout << "\n\t\t\t����� �����: " << sum << "\n\t\t\t������������ �����: " << product;
	cout << "\n\t\t\t������� �������������� �����: " << ar_m;
}
