# include<stdio.h>
int main()
{
    int a=10;
    int b=9;
    printf("and = %d\n",a&&b);
    printf("or = %d\n",a||b);
    printf("xor = %d\n",(a||b) && !(a&&b));
}