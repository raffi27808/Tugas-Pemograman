#include <stdio.h>
#include <string.h>
char *ganti_karakter(char *data, char find, char replace) {
    char *ptr = data;
    
    while (*ptr != '\0') {
        if (*ptr = find) {
            *ptr = replace;
        }
        *ptr++;
    }
    return data;
}
int main() {
    char string[100];
    char target;
    char replace;

    printf("Masukkan sebuah string: ");
    fgets(string, sizeof(string), stdin);
    printf("Karakter yang dicari: ");
    scanf(" %c", &target);
    printf("Karakter pengganti: ");
    scanf(" %c", &replace);

    printf( "%s", ganti_karakter(string, target, replace));
    return 0;
}