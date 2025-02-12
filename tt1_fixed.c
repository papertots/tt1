#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *encode_spaces(char *str) {
    char buffer[3 * strlen(str) + 1];

    int j = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ' ') {
            buffer[j] = '%';
            buffer[j+1] = '2';
            buffer[j+2] = '0';
            j+= 3;
        } else {
            buffer[j] = str[i];
            j++;
        }
    }
    buffer[j] = '\0';
    j++;
    printf("Size of allocated string: %lu\n", j * sizeof(char));
    char *result = malloc(j * sizeof(char));
    strcpy(result, buffer);
    return result;
}


int main(int argc, char **argv) {
    if (argc != 2) {
        printf("Usage: <executable> <quoted string>");
        exit(1);
    }
    
    printf("Input String: %s\n", argv[1]);
    char *result = encode_spaces(argv[1]);
    printf("Output String: %s\n", result);
    free(result);
}
