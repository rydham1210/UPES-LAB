# include<stdio.h>
int main()
{
    int x;
     if(x<15)
     {
    printf("starvation");
     }
    else if(15.1<x<17.5)
    {
    printf("anorexic");
    }
    else if(17.6<x<18.5)
    {
    printf("underweight");
    }
    else if(18.6<x<24.9)
    {
    printf("ideal");
    }
    else if(25<x<25.9)
    {
    printf("overweight");
    }
    else if(30<x<39.9)
    {
    printf("obese");
    }
    else if(x<40 )

    {
    printf("morbidity obese");
    }
    return 0;
}