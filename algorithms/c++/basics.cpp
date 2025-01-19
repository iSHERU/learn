#include <iostream>
using namespace std;

int main() {
    // all the datatypes
    // int, long, long long
    // float, double, long double
    // string, char

    // declaring variable name of string datatype
    string name;

    // this will take input only upto first space
    // input: Hello World. -- Output: Hello
    /*cin >> name;*/
    /*cout << name << endl;*/

    // this will get input upto newLine, \n, or when enter is pressed
    // input: Hello World. -- Output: Hello World.
    cout << "Enter your Name Please: "; getline(cin, name);
    cout << name << endl;


    int age;
    cout << "Enter Your Age Please: "; cin >> age;

    if (age <=0)
        cout << "Invalid Age Entered!" << endl;
    else if (age >= 1 && age <= 12)
            cout << "You're underaged!" << endl;
    else if (age >= 13 && age <= 18)
        cout << "You're a Teenager and not an Adult!" << endl;
    else
        cout << "Your're an Adult!" << endl;

    return 0;
}
