//3. Accept on number from user if number is less than 10 then print "hello" otherwise print "demo".

#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");   
    }
}

int main()
{
    int iValue = 0;
    printf("enter the number:");
    scanf("%d",&iValue);

    Display(iValue);
    return  0;
}