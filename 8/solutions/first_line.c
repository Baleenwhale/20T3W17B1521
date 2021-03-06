#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    if (argc != 2) {
        printf("Expected: %s [file_name]\n", argv[0]);
        exit(0);
    }

    FILE *file = fopen(argv[1], "r");

    if (file == NULL) {
        perror(argv[1]);
        exit(0);
    }

    int ch;
    while ((ch = fgetc(file)) != EOF ) {
        fputc(ch, stdout);
        if (ch == '\n') {
            break;
        }
    }

    fclose(file);

}