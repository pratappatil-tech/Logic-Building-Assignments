// 4. accept one number and check whether is it divisible by 5 or not.

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Check(int iNo)
{
    if((iNo % 5) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter the number:");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == TRUE)
    {
        printf("divisible by 5 \n");
    }
    else
    {
        printf("Not divisible by 5 \n");
    }
    return 0;
}
