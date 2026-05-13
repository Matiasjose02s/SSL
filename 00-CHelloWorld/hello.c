#include <stdio.h>

int main(void) {
    printf("Hello, World! 🌍\n");
    printf("Compilado con GCC %s\n", __VERSION__);
    printf("Estándar C: %ld (C23)\n", __STDC_VERSION__);
    return 0;
}
