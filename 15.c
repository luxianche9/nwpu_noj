#include<stdio.h>
#include<math.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    
    double i, sum;
    for (i = 1; i <= n; i++)
    {
        sum += (pow(-1,i-1)*pow(2,i))/((pow(2,i)+pow(-1,i))*(pow(2,i+1)+pow(-1,i+1)));
    }

    printf("%.6lf", sum);
    return 0;
}