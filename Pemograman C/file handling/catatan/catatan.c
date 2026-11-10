#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *fp;

    fp = fopen("catatan.txt", "a+");

    if (fp == NULL) {
        printf("File gagal dibuka.\n");
        return 1;
    }

    fprintf(fp, "Belajar File Handling\n");
    fclose(fp);
    return 0;
}