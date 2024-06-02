
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	
	for (int i = 1; i <= 5; ++i) {
		for (int j = 0; j <= 5; ++j) {
			for (int k = 1; k < 3; ++k) {
				cout << "Pritha " << i << " " << j << " " << k << endl;
			}

			cout << endl;
		}

		for (int l = 0; l < 2; ++l) {
			cout << "Imran " << l << endl;
		}

		cout << endl;
	}

	return 0;
}