#include <stdio.h>
int main()
{
    int i, j;
    int a; /*�����*/
    int b; /*������*/

    printf("  |");

    for (a = 1; a <= 9; a++) {
        printf("  %d", a);
    }

    printf("\n");

    printf("------------------------------\n");

    for (i = 1; i <= 9; i++) {
        printf("%d ", i);
        printf("|");
        for (j = 1; j <= 9; j++)
            printf("%3d",i * j);
        putchar('\n');
    }

    return (0);
}