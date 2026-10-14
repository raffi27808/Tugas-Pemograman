#include <stdio.h>

int main() {
    char str[101];
    char ch1, ch2;
    int *p1, *p2, *ptr;
    scanf("%s", str);
    scanf(" %c", &ch1);
    scanf(" %c", &ch2);

    *ptr = &str;
    *p1 = &ch1;
    *p2 = &ch2;

    for (int i = 0; ptr[i] != '\0'; i++) {
        if (ptr[i] == *p1) {
            ptr[i] = *p2;
        }
    }

    printf("%s\n", str);
    return 0;
}