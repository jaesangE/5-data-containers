//chap4ex3
#include <iostream>
#include <iomanip>
using namespace std;
int main() {

	int max = 1000; //최대 제곱할 수
	

	for (int i = 1; i <= max; i++) {
		cout << setw(10) << i;
	}
	cout << endl;
	for (int i = 1; i <= max; i++) {
		cout << setw(10) << i * i;
	}
	return 0;
}