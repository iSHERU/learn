#include <iostream>
using namespace std;

// swapping two variables permanently using their addresses with pointers
void swapVariables(int* one, int* two) {
    int temp = *one;
    *one = *two;
    *two = temp;
}

int main() {
    int one, two;

    cout << "Enter Value of One: "; cin >> one;
    cout << "Enter Value of Two: "; cin >> two;

    swapVariables(&one, &two);

    cout << "Value of One After Swap: " << one << endl;
    cout << "Value of Two After Swap: " << two << endl;

    return 0;
}
