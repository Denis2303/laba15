#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;

double RingS(double R1, double R2){
	double pi = acos(-1);
	return (pi*pow(R1, 2) - pi * pow(R2, 2));
}

int main(){
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "¬ведите три пары R1 R2. R1 > R2. R2 > 0\n";
	for (int i = 0; i < 3; i++){
		double R1, R2;
		cin >> R1 >> R2;
		cout <<"ѕлощадь кольца = " << RingS(R1, R2) << endl;
	}
}
