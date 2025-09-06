#include <stdio.h>

int main() {
    FILE *f_ptr = fopen("output.txt", "w");
    if (f_ptr == NULL) {
        printf("Error opening file!\n");
        return 0;
    }
    fprintf(f_ptr, "Hello World\n");
    fflush(f_ptr);
    fclose(f_ptr);
}