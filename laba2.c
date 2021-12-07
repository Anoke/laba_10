#include <stdio.h> /* подключение заголовочного файла стандартной библиотеки ввода/вывода*/
#include <math.h>/* подключение заголовочного файла стандартной математической библиотеки*/

int main() /* Определение функции с именем main, не получающей никаких аргументов*/
{ /*Начало тела функции*/
    float a; /*вводим переменную типа float(с плавающей точкой)*/
    float pi=3.141592;/*вводим переменную с плавающей точкой и присваиваем ей значение*/
    scanf("%f",& a);/*функция, которая используется для считывания данных*/
    float z1=(2*sin(3*pi-2*a)*sin(3*pi-2*a)*cos(5*pi+2*a)*cos(5*pi+2*a));/* вводим переменную с плавающей точкой и присваиваем ей значение в виде выражения*/
    float z2=(1./4+(1./4)*sin((5./2)*pi-8*a)); /* вводим переменную с плавающей точкой и присваиваем ей значение в виде выражения*/
    printf("%f %f",z1,z2); /*Функция main вызывает библиотечную функцию printf для печати заданной последовательности символов*/
}
