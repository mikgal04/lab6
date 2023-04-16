#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 5
#define COLS 5

// ������� ������ �������� � ��������� �������
void find_element(int arr[][COLS], int element) {
	int row, col;
	for (row = 0; row < ROWS; row++) {
		for (col = 0; col < COLS; col++) {
			if (arr[row][col] == element) {
				printf("������� %d ������ � ������ %d, ������� %d.\n", element, row + 1, col + 1);
				return;
			}
		}
	}
	printf("������� %d �� ������ � �������.\n", element);
}

int main(void) {
	int arr[ROWS][COLS];
	int element;
	int row, col;
	srand(time(NULL));

	// ���������� ������� ���������� �������
	printf("�������� ������:\n");
	for (row = 0; row < ROWS; row++) {
		for (col = 0; col < COLS; col++) {
			arr[row][col] = rand() % 10;
			printf("%d ", arr[row][col]);
		}
		printf("\n");
	}

	// ��������� �������� ��� ������ �� ������������
	printf("������� ������� ��� ������: ");
	scanf("%d", &element);

	// ����� ������� ������ ��������
	find_element(arr, element);

	return 0;
}