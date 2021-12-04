#include <iostream>
#include <Windows.h>
using namespace std;

int Quarter(double x, double y){
	if (x > 0 && y > 0){
		return 1;
	}
	else if (x < 0 && y > 0){
		return 2;
	}
	else if (x < 0 && y < 0){
		return 3;
	}
	else {
		return 4;
	}
}

int main(){
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "¬ведите три пары координат. x != 0, y != 0\n";
	for(int i = 0; i < 3; i++){
		double x, y;
		cin >> x >> y;
		cout <<Quarter(x, y) << endl;
	}
}
