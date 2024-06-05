/*7.6.2
		1
		2 3
		3 4 5
		4 5 6 7

*/


#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) 
{
    int num;
    cout << "Enter the value of num: ";
    cin >> num;

    cout << endl << endl;

    for (int row = 1; row <= num; row++) {
                int value = row;
                for (int col = 1; col <= row; col++) {
                        cout << value++ << " ";
                }

                cout << endl;  
        }

    return 0;
}
