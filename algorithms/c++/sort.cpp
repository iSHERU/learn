#include <iostream>
#define SIZE 10
using namespace std;

void sortArray(int* arr);

int main() {
    int arr[SIZE] = {10, 90, 800, 7, 6, 5, 4, 3, 2, 1};

    sortArray(arr);

    return 0;
}

void sortArray(int arr[SIZE]) {
    for (int i = 0; i <SIZE; i++)
        cout << arr[i] << " ";

    cout << endl << endl;

    // will check from 1 to second last element since last element will always be automatically sorted
    for (int i = 0; i < SIZE - 1; i++) {
        int minIndex = i; // select the first element as minimum and compare it to next occouring elements
        for (int j = i + 1; j < SIZE; j++) {
            if (arr[minIndex] > arr[j]) {
                minIndex = j;
            }
        }

        // now swap the min value on index J with value on minIndex
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }

    for (int i = 0; i < SIZE; i++)
        cout << arr[i] << " ";

    cout << endl;
}
