#include <stdio.h>
#include <string.h>
char *ganti_karakter(char *data, char find, char replace) {
    *ptr = data;
    
    while (*ptr != '\0') {
        if (*ptr = find) {
            *ptr = replace;
        }
        *ptr++;
    }
}
int main() {
    char string[100];
    char target;
    char replace;

    printf("Masukkan sebuah string: ");
    fgets(str, sizeof(string), string);
    printf("Karakter yang dicari: ");
    scanf("%c", &target);
    printf("Karakter pengganti: ");
    scanf("%c", &replace);

    ganti_karakter(&string, target, replace);
    return 0;
}