#include <stdio.h>
#define min_value 1
#define max_value 10

int main() {
    int a,result;
    printf("Write the number: ");
    scanf("%d", &a);
    result = min_value<=a && max_value>=a;
    printf("number %d in range %d...%d : %s",a,min_value,max_value,result ? "Yes":"No");

    int b;
    scanf("%d",&b);
    printf("%d",(b>>1)%2);
    return 0;
}