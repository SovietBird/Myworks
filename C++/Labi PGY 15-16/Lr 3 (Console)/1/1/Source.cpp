#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	for (int i = 1; i <= 10; i++) {

		for (int j = 1; j <= 9; j++) {

			cout << setw(3) << i * j;

		}

		cout << endl;
	}

	system("pause");

	return 0;
}