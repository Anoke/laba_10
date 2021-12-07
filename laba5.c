#include <stdio.h>

int main() {
    int mass[7] = {10,20,30,40,50,60,70};
    for(int i=0; i < 7; i++) {
        printf("%d\t", i+1);
        printf("%d\n", mass[i]);
    }
    printf("\n");

    int arr1[2][2] = {{1, 2}, {3, 4}};
    int arr2[2][2] = {{1, 0}, {0, 1}};

    int res[2][2] = {0, 0, 0, 0};

    for (int i=0; i<2; ++i)
    {
        for (int j=0; j<2; ++j)
        {
            for (int k=0; k<2; ++k)
            {
                res[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    for (int i=0; i<2; ++i)
    {
        for (int j=0; j<2; ++j)
        {
            printf("%d\t",res[i][j]);
        }
        printf("\n");
    }

    return 0;
}
