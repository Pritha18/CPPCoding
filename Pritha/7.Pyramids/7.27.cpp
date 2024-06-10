/*7.27.
				A
				B B
				C C C 
				D D D D
				E E E E E
				D D D D
				C C C
				B B
				A

*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num = 5; 
    cout << endl << endl;

    // part 1
    for (int row = 1; row <= num; ++row) {

        char letter = 'A' + row - 1;
        for (int col = 1; col <= row; ++col) {
            cout << letter << " ";
        }

        cout << endl;
    }

    // part 2
    for (int row = num - 1; row >= 1; --row) {
        
        char letter = 'A' + row - 1;
        for (int col = 1; col <= row; ++col) {
            cout << letter << " ";
        }

        cout << endl;
    }

    return 0;
}
