#include <stdio.h>
#include <malloc.h>

int main()
{
    int argv;
    int **argc;
    char *a[4] = {"a","b","c","d"};
    for (int i = 0; i < 4; i++)
    {
        printf("%d\t", i);
    }
    printf("\n");
    for (int i = 0; i < 4; i++)
        printf("%c\t", *a[i]);
    printf("\n\n");

    char *a2;
    a2 = (char*) malloc (8 * sizeof(char));
    for (int i = 0; i <8; i++)
    {
        scanf("%c",&a2[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        printf("%d\t",i);
    }
    printf("\n");
    for (int i = 0; i < 8; i++)
    {
        printf("%c\t", a2[i]);
    }
    free(a2);

    return 0;
}
