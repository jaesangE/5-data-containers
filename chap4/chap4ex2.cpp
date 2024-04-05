#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	
	for (int i = 1; i <= 100; i++) {
		cout << setw(5) << i;
	}
	cout << endl;
	for (int i = 1; i <= 100; i++) {
		cout << setw(6) << i*i;
	}
	return 0;
}