#include<stdio.h>
#include<string.h>

int main() {
    char s1[20] = "ankan dey";
    char s2[20];
    int count = 0;

    while(s1[count] != '\0') {
        count++;
    }

    for(int i = 0; i < count; i++) {
        s2[i] = s1[count - 1 - i];
    }

    s2[count] = '\0'; // null character

    printf("%s\n", s2);

    return 0;
}

