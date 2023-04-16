#include <stdio.h>

int main() {
char arr[10] = {'a', 'a', 'b', 'c', 'a', 'a', 'a', 'a', 'b', 'a'};
char sym;
int max_len = 0;
int len = 0;
printf("Введите символ: ");
scanf("%c", &sym);

for (int i = 0; i < 10; i++) {
if (arr[i] == sym) {
len++;
} else {
if (len > max_len) {
max_len = len;
}
len = 0;
}
}

if (len > max_len) {
max_len = len;
}

printf("Максимальная длина непрерывной последовательности символа %c: %d\n", sym, max_len);
return 0;
}