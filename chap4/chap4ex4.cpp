//chap4ex4
#include <iostream>
#include <iomanip>
using namespace std;
int main() {

	int max = 1000; //최대 제곱할 수


	for (double i = 1; i <= max; i++) {
		cout << setw(10.1) << i;
	}
	cout << endl;
	for (double i = 1; i <= max; i++) {
		cout << setw(10.1) << i * i;
	}
	return 0;
}