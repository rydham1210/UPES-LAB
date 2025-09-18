# include<stdio.h>
int main()
{
    int x =10;
    printf("initial value of x is %d\n",x);
    x += 5;
    printf("after x += 5 %d\n",x);
    x = 10;
    x -=5;
    printf("after a -= 5 %d\n",x);
    x =15;
    x *=2;
    printf("after a*=5 is %d\n",x);
    return 0;

}