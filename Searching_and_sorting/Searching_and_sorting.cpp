#include <iostream>
using namespace std;

void sortArray(int arr[], int size, int order = 1) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if ((order == 1 && arr[j] < arr[j + 1]) ||
                (order == 0 && arr[j] > arr[j + 1])) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    const int SIZE = 10;
    int numbers[SIZE] = { 15, -3, 42, 8, 0, 23, -11, 7, 99, 4 };

    cout << "Початковий масив: ";
    printArray(numbers, SIZE);

    sortArray(numbers, SIZE);
    cout << "За спаданням: ";
    printArray(numbers, SIZE);

    sortArray(numbers, SIZE, 0);
    cout << "За зростанням: ";
    printArray(numbers, SIZE);

    return 0;
}
