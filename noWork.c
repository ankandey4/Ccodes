#include <stdio.h>
#include <string.h>

int main() {
    char id[50];
    char fid[50];
    int fla = 0;
    FILE *ptr;

    printf("Enter your ID: ");
    fgets(id, sizeof(id), stdin);
    id[strcspn(id, "\n")] = 0;  // remove newline

    ptr = fopen("studentin.txt", "r");
    if (ptr == NULL) {
        printf("File not found!\n");
        return 1;
    }

    while (fgets(fid, sizeof(fid), ptr)) {
        fid[strcspn(fid, "\n")] = 0;  // remove newline

        if (strcmp(fid, id) == 0) {
            printf("You can entry now\n");
            fla = 1;
            break;
        }
    }

    if (!fla) {
        printf("Not allowed\n");
    }

    fclose(ptr);
    return 0; }