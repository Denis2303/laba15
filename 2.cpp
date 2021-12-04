#include <iostream>
#include <Windows.h>
using namespace std;

void Sign(double &x){
	if ( x < 0){
		x = -1;
	}
	else if (x == 0){
		x = 0;
	}
	else{
		x = 1;
	}
}

int main(){
	double a, b;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "¬ведите числа A и B\n";
	cin >> a >> b;
	Sign(a); Sign(b);
	cout << "Sign(A) + Sign(B) = " << a + b;
}
