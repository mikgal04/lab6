#include <stdio.h>

void NumberSearch(int* ptrArr, int i, int inputNumber);

int main() {
    int numArr[3][3] = { {1,3,2},{5,4,6},{9,0,8} };
    int* ptrArr = numArr[0];
    int i = 3;
    int k = 3;
    int inputNumber;

    printf("Введите число из списка: \n");

    for (i = 0; i < 3; i++) {
        for (k = 0; k < 3; k++) {
            printf("%d ", numArr[i][k]);
        }
    }

    printf("\n");
    scanf_s(" %d", &inputNumber);

    NumberSearch(ptrArr, i, inputNumber);

    return 0;
}

void NumberSearch(int* ptrArr, int i, int inputNumber) {

    i = 0;

    for (i = 0; i < 9; i++) {
        if (inputNumber == *(ptrArr + i)) {
            printf("Строка: %d\nСтолбец: %d", i / 3 + 1, i % 3 + 1);
            break;
        }
    }
}