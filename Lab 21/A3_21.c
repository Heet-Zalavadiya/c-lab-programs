#include <stdio.h>
// Define structure and union
struct StructExample {
    int x;
    float y;
    char z;
};

union UnionExample {
    int x;
    float y;
    char z;
};

int main() {
    struct StructExample s = {1, 2.5, 'A'};
    union  UnionExample u;

    u.x = 1;
    u.y = 2.5;
    u.z = 'A';

    printf("Structure Example:\n");
    printf("x: %d, y: %.2f, z: %c\n", s.x, s.y, s.z);

    printf("\nUnion Example:\n");
    printf("x: %d, y: %.2f, z: %c\n", u.x, u.y, u.z);

    printf("\nNote: In a structure, all members occupy separate memory.\n");
    printf("In a union, all members share the same memory space, so only the last assigned value is valid.\n");

    return 0;
}
