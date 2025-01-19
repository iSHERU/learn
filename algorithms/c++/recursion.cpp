#include <iostream>
using namespace std;

// declaring function before defining it, we can directly define it here too
int findFactorial(int num);

// main function definition
int main() {
    int num;

    cout << "Enter Number for Factorial: "; cin >> num;

    // catching the value obtained from findFactorial into the factorial variable
    int factorial = findFactorial(num);

    cout << "Factorial of Number is: " << factorial << endl;

    return 0;
}

// user function defined here
int findFactorial(int num) {
    int fact = 1;

    // if num reaches 1/0 return 1 for it
    if (num <= 1)
        return 1;

    // keep recusring the function for num -1, and return the value obtained
    return num * findFactorial(num - 1);
}
