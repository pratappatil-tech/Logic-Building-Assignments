/*

wirte a program which accept a number from user and display its multiplication of factors.
/*

#include <stdio.h>

int MultFact(int iNo)
{
    int iCnt = 0;
    int iMult = 1;
    for(iCnt = 1; iCnt < iNo; iCnt++ )
    {
        if((iNo % iCnt)== 0 )
        {
         iMult = iCnt * iMult;
        }
    }
    return iMult;
}

int main()
{
    int iVal = 0;
    int iRet = 0;
    printf("Enter number : ");
    scanf("%d", &iVal);

    iRet = MultFact(iVal);

    printf("multiplication of factors is %d\n", iRet);


    return 0;
}
