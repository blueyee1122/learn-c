#include <stdio.h>
int main()
{
    int number = 0;
    printf("Nhap so cua ban: ");
    scanf("%d", &number);
    switch (number)
    {
    case 10:
        printf("so ban vua nhap la: 10");
        break;
    case 50:
        printf("so ban vua nhap la: 50");
        break;
    case 100:
        printf("so ban vua nhap la: 100");
        break;
    default:
        printf("so ban vua nhap khong phai la 10, 50 hoac 100");
    }
    return 0;
}