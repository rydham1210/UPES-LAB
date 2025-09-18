# include<stdio.h>
int main()
{
    int rect1,rect2,l1,b1,l2,b2;
    printf("enter the l1 of rect1");
    scanf("%d" , &l1);

    printf("enter the b1 of rect1");
    scanf("%d", &b1);

    printf("enter the l2 of rect2");
    scanf("%d" , &l2);
    printf("enter the b2 of rect2");
     scanf("%d", &b2);
    printf("perimeter of rect1 %d ", 2*(l1+b1));

    printf("perimeter of rect2 %d ", 2*(l2+b2));
    return 0;
}