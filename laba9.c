#include <stdio.h>
#define LIMIT 499

int main()
{
    char a[80] = { '\0' } ;
    int countNumber = 0, countUpper = 0, countLower = 0;

    printf("\n Input line: \n");
    gets(a);

    for (int n = 0; n < sizeof(a) / sizeof(char) - 1; n++)
    {
        if (a[n] >= '0' && a[n] <= '9') countNumber++;
        else
            if (a[n] >= 'A' && a[n] <= 'Z') countUpper++;
            else
                if (a[n] >= 'a' && a[n] <= 'z') countLower++;
    }

    printf("\n Number = %d \n Upper = %d \n Lower = %d\n\n\n", countNumber, countUpper, countLower);

    int iValue;
    int iValue2;
    int iDuration;
    int iTotal;
    printf("Enter subscription fee:  \n");
    scanf("%d", &iValue);
    printf("Enter the cost per minute over the limit: ");
    scanf("%d", &iValue2);
    printf("Call duration: ");
    scanf("%d", &iDuration);

    if(iDuration>LIMIT)
        iTotal = (LIMIT*iValue+(iDuration-LIMIT)*iValue2);
    else
        iTotal = iDuration*iValue;

    printf("%d", iTotal);

    return 0;
}