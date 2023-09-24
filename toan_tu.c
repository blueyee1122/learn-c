#include <stdio.h>

void main()
{
    char bien_a;
    char bien_b;

    printf("Moi ban nhap so a:");
    scanf("%d", &bien_a);

    printf("Moi ban nhap so B: ");
    scanf("%d", &bien_b);

    printf("ket qua la: %d", (bien_a / bien_b));

    printf("\n");
}