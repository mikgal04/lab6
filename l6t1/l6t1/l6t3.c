#include <stdio.h>

void print(int numArr[], int size);
void insert(int numArr[], int size, int numInput);
void append(int numArr[], int size, int numInput);

int main() {

    int size;
    int elem;
    int numInput;
    int numFun;

    printf("������� ������ �������: \n");
    scanf_s("%d", &size);

    printf("������� ���������� ���������: \n");
    scanf_s("%d", &elem);

    if (elem > size) {
        printf("������! ���-�� ��������� ����������� ������ �������. \n");
        return 0;
    }

    int numArr[size];

    int k;

    for (k = 0; k < size; k++) {
        if (k < elem) {
            numArr[k] = k;
        }
        else if (k >= elem) {
            numArr[k] = 0;
        }
    }

    print(numArr, size);

    printf("������� �����, ������� �� ������ �������� � ������: \n");
    scanf_s("%d", &numInput);

    printf("������� ����� ��������, ������� �� ������ ����������: \n1. insert\n2. append\n");
    scanf_s("%d", &numFun);
    if (numFun == 1) {
        insert(numArr, size, numInput);
    }
    else if (numFun == 2) {
        append(numArr, size, numInput);
    }

    return 0;
}

void print(int numArr[], int size) {
    int j;

    printf("{");
    for (j = 0; j < size; j++) {
        if (j == size - 1) {
            printf("%d}\n", numArr[j]);
            break;
        }
        printf("%d, ", numArr[j]);
    }
}

void insert(int numArr[], int size, int numInput) {
    numArr[size / 2] = numInput;
    print(numArr, size);
}

void append(int numArr[], int size, int numInput) {
    numArr[size - 1] = numInput;
    print(numArr, size);
}