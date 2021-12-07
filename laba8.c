#include <stdio.h> /* подключение заголовочного файла стандартной библиотеки ввода/вывода*/
#include "string.h"
int main() /* Определение функции с именем main, не получающей никаких аргументов*/
{
    printf("9th task\n");
    char str25[100], *p, a;
    gets(str25);
    scanf("%c", &a);
    p = strrchr(str25, a);
    printf ("Last occurence of %c found at %d \n",a,(p-str25+1));
    getchar();

    printf("1st task\n");
    char str1[1022];
    char str2[1022];

    scanf("%s", str1);
    scanf("%s", str2);
    strcat(str1, str2);

    printf("%s\n", str1);

    printf("3rd task\n");
    char string1 [1023];
    char string2 [1023];

    scanf("%s", string1);
    scanf("%s", string2);

    if (strcmp(string1,string2) == 0)
        printf("strings are the same\n");
    else
        printf("strings aren't same\n");

    printf("5th task\n");
    char src[1024];
    char dst[1024];

    scanf("%s", &src);

    strcpy (dst, src);

    printf ("src: %s\n",src);

    printf ("dst: %s\n",dst);


    printf("7th task\n");
    char length [255];
    scanf("%s", length);

    printf ("length of the string '%s' - %d symbols\n", length, strlen (length) );


    return 0;

}
