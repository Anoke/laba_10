#include <stdio.h> /* Включение информации о стандартной библиотеке.*/

int main ()  /* Определение функции с именем main, не получающей никаких аргументов*/
{ /*Начало тела функции*/
    char str[200];/* Инициализация строки, а также указание ее длины*/
    gets(str);/* Считывает строку стандартного ввода и помещает ее в буфер*/
    printf("Строка:"); /*Функция main вызывает библиотечную функцию printf для печати заданной последовательности символов*/
    puts(str); /* функция выводит строку, указанную в str*/
    int a; /* оператор объявления*/
    scanf("%d",&a); /*функция, которая используется для считывания данных*/
    printf("число:"); /*Функция main вызывает библиотечную функцию printf для печати заданной последовательности символов*/
    printf("%d",a); /*Функция main вызывает библиотечную функцию printf для печати заданной последовательности символов*/
    return 0; /* статус выхода процесса*/
}
