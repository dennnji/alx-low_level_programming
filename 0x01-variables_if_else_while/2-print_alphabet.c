#include <stdio.h>

int main(void) {
char c;

// print the alphabet in lowercase
for (c = 'a'; c <= 'z'; c++) {
putchar(c);
}

// print the alphabet in uppercase
for (c = 'A'; c <= 'Z'; c++) {
putchar(c);
}

// print a new line
putchar('\n');

return 0;
}
