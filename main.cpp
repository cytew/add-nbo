#include <stdio.h>
#include <stdint.h>
#include <netinet/in.h>
#include "file_read.h"

int main(int argc, char* argv[]) {
    if(argc != 3) {
        printf("Error %s\n", argv[0]);
        return 0;
    }
    uint32_t a, b;

    a = file_read(argv[1]);
    b = file_read(argv[2]);

    a = ntohl(a);
    b = ntohl(b);

    printf("%d(0x%2x) + %d(0x%2x) = %d(0x%2x)\n", a, a, b, b, a + b, a + b);

    return 0;
}