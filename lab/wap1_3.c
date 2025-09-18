# include<stdio.h>
int main()
{
        int side1,side2,side3;
        printf("enter three sides of triangle");
        scanf("%d %d %d", &side1 , &side2 , &side3);
        if ((side1 + side2> side3) && (side1 + side3 > side2) && (side2 + side3 >side1))
        printf("the triangle is valid");
        if((side1 == side2 && side2 == side3))     
        printf("the triangle is equilateral");
        else if (side1 == side2 || side2 == side3 || side1 == side3)
        printf("the triangle is isosceles");
        else if (side1*2 + side2*2 == side3*2)
        printf("the triangle is right angled");
        else if (side1 != side2 && side2 != side3 && side1 != side3)
        printf("the triangle is scalene");
        else
        printf("the triangle is not valid");
        return 0;

}