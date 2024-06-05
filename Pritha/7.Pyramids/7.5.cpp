/*7.5.
        2
        3 4
        4 5 6
        5 6 7 8
        6 7 8 9 10
		
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) 
{
    int num;
    cout << "Enter the value of num: ";
    cin >> num;

    cout << endl << endl;

        for (int row = 1, start = 2; row <= num; row++) {
                for (int col = 0; col < row; col++) {
                        cout << (start + row - 1 + col) << " ";  
                }
                
                cout << endl;  
        }

    return 0;
}
