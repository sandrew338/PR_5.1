// Lab 5_1
// < Назаркевич, Андрій>
// Лабораторна робота № 5.1
// Функції, що містять арифметичний вираз
// Варіант 17 

#include <iostream>
#include <cmath>
using namespace std;
double h(const double x, const double y, const double z); // прототип
int main()
{
	double a, b;
	
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	double c = (h(a, b, 1) + h(1, a, b)) / (1 + h(a*a + b*b, 1, 0));
	cout << "c = " << c << endl;
	return 0;
}
double h(const double x, const double y, const double z) // визначення
{
	return ((x + y + z) / (x*x + y*y + z*z));
}