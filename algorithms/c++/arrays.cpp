#include <iostream>
#define SIZE 5 // this is a MACRO, it's not necessary
#define ROW 2
#define COL 2
using namespace std;

int main() {
    // this is how one-dimension arrays are declared
    int arr[SIZE];

    cout << "Enter Array Elements: ";
    for (int i = 0; i < SIZE; i++)
        cin >> arr[i];

    cout << "Your Array Elements: ";
    for (int i = 0; i < SIZE; i++)
        cout << arr[i] << " ";
    cout << endl;

    // this is how two-dimensional arrays are declared
    int twoArray[ROW][COL];

    // now to access both paramaters at same time we take two loops
    cout << "Enter Array Elements: ";
    for (int i = 0; i < ROW; i++)
        for (int j = 0; j < COL; j++)
            cin >> twoArray[i][j];

    // printing it in a pattern, just like a MATRIX, 2D-Arrays are stored in memory exactly the same as 1D-Arrays
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++)
            cout << twoArray[i][j] << " ";
        cout << endl;
    }


    return 0;
}
