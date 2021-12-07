# include<stdio.h>
# include <math.h>
# include <stdlib.h>

int NOD(int a, int b)
{
    while(a!=b)
    {
        if(a>b)
            a=a-b;
        else
            b=b-a;
    }
    return a;
}

struct point
{
    double x, y;
};

double distance( const struct point a, const struct point b)
{
    return sqrt(pow(b.x - a.x,2) + pow(b.y - a.y,2));
}

void rand_point(struct point* point, int size)
{
    for (int i = 0; i < size; i++)
    {
        point[i].x = rand()%15 + 1;
        point[i].x = rand()%15 + 1;
    }
}

int main(void)
{
    int N,M;
    printf("Enter N= ");
    scanf("%d", &N);
    printf("Enter M= ");
    scanf("%d", &M);
    printf("NOD = %d\n", NOD(N,M));
    printf("NOK = %d", N*M/NOD(N,M));

return 0;
}

