#include <stdio.h>
#include <string.h>

#define ROWS 5
#define COLUMNS 3

int areRowsEqual(int row1[], int row2[], int colCount) {
for (int i = 0; i < colCount; i++) {
if (row1[i] != row2[i]) {
return 0;
}
}
return 1;
}

int main() {
int matrix[ROWS][COLUMNS] = {
{1, 0, 1},
{0, 0, 1},
{1, 1, 0},
{0, 0, 1},
{1, 0, 1}
};

int hash[ROWS] = {0};

for (int i = 0; i < ROWS - 1; i++) {
if (hash[i] == 0) {
for (int j = i + 1; j < ROWS; j++) {
if (areRowsEqual(matrix[i], matrix[j], COLUMNS)) {
hash[j] = 1;
}
}
}
}

printf("Unique matrix:\n");

for (int i = 0; i < ROWS; i++) {
if (hash[i] == 0) {
for (int j = 0; j < COLUMNS; j++) {
printf("%d ", matrix[i][j]);
}
printf("\n");
}
}
return 0;
}