# include<stdio.h>
int main()
{
    int a,b;
    printf("enter 2 numbers\n");
    scanf("%d",&a);
    scanf("%d", &b);
    if(a^b)
    printf("number will be not same");
    else
    printf("number will be same");
    return 0;
}