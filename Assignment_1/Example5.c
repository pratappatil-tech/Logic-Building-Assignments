//5. accept the number from user and print that number of * on screen.

#include<stdio.h>

void Accept(int iNo)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt >= iNo; iCnt++)
    {
        printf(" * ",iNo);
    }
}

int main()
{
    int iValue = 0;
   // iValue = 5;
   printf("enter the number:");
   scanf("%d",iValue);

    Accept(iValue);
    
    return 0;
}