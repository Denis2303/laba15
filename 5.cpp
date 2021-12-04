#include <iostream>
#include <Windows.h>
using namespace std;

long long int Fact2(long long int x){
	long long int y = 1;
	for (int i = 1; i <= x; i++){
		if (i % 2 == x % 2){
			y *= i;
		}
	}
	return y;
}

int main(){
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	long long int n;
	cout << "Введите число N:\n";
	cin >> n;
	cout << "Двойной факториал N = " << Fact2(n);
}
