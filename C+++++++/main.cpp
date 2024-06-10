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
	cout << "\t\tПервое число: " << first_num << "\t\tВторое число: " << second_num << "\tТретье число: " << third_num;
	cout << "\n\t\t\tСумма чисел: " << sum << "\n\t\t\tПроизведение чисел: " << product;
	cout << "\n\t\t\tСреднее арифметическое чисел: " << ar_m;
}
