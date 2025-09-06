#include <stdio.h>

int main() {
    FILE *f_ptr = fopen("input.txt", "r");
    if (f_ptr == NULL) {
        printf("Error opening file!\n");
        return 0;
    }
    int num;
    fscanf(f_ptr, "%d", &num);
    printf("Number: %d\n", num);
    fclose(f_ptr);
}