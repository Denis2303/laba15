#include <iostream>
#include <Windows.h>
#include <cmath>
#include <vector>
using namespace std;
void PowerA3(double a, double &b){
	b = pow(a, 3);
}

int main(){
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	vector <double> a;
	cout << "¬ведите 5 чисел\n";
	for (int i = 0; i < 5; i++){
		double c;
		cin >> c;
		a.push_back(c);
	}
	for (int i = 0; i < 5;i ++){
		double b;
		cout << "A = " << a[i];
		PowerA3(a[i], b);
		cout << "	 B = " << b << endl;
	}
}
