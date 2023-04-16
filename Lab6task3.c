#include <stdio.h>
#include <stdlib.h>

void print(int* arr, int size) {
int i;
printf("[");
for (i = 0; i < size; i++) {
printf("%d", arr[i]);
if (i < size - 1) {
printf(", ");
}
}
printf("]\n");
}

int* append(int* arr, int* size, int element) {
(*size)++;
arr = (int*) realloc(arr, (*size) * sizeof(int));
arr[(*size) - 1] = element;
return arr;
}

int* insert(int* arr, int* size, int index, int element) {
int i;
(*size)++;
arr = (int*) realloc(arr, (*size) * sizeof(int));
for (i = (*size) - 1; i >= index + 1; i--) {
arr[i] = arr[i - 1];
}
arr[index] = element;
return arr;
}

int main() {
int i, size, element, index;
int* arr;
printf("Введите количество элементов в массиве: ");
scanf("%d", &size);

arr = (int*) malloc(size * sizeof(int));

printf("Введите %d элементов массива:\n", size);
for (i = 0; i < size; i++) {
scanf("%d", &arr[i]);
}

printf("Массив: ");
print(arr, size);

printf("Введите элемент, который нужно добавить в конец: ");
scanf("%d", &element);
arr = append(arr, &size, element);
printf("Массив после добавления элемента в конец: ");
print(arr, size);

printf("Введите индекс, на который нужно вставить элемент: ");
scanf("%d", &index);
printf("Введите элемент, который нужно вставить: ");
scanf("%d", &element);
if (index >= size) {
printf("Индекс должен быть меньше %d\n", size);
} else {
arr = insert(arr, &size, index, element);
printf("Массив после вставки элемента: ");
print(arr, size);
}

free(arr);
return 0;
}