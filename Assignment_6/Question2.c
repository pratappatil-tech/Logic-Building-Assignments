/*

Accept single digit from user and print it into word.

Input: 9
Output: Nine

Input: -3
Output: three

Input: 12
Output: Invalid Number

*/

#include <stdio.h>

void Display(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    if((iNo < 10) && (iNo >=0))
    {
        switch(iNo)
        {
          case 0:
              printf("zero\n");
              break;
          case 1:
              printf("One\n");
              break;
          case 2:
              printf("Two\n");
              break;
          case 3:
              printf("Three\n");
              break;
          case 4:
              printf("Four\n");
              break;
          case 5:
              printf("Five\n");
              break;
          case 6:
              printf("Six\n");
              break;
          case 7:
              printf("Seven\n");
              break;
          case 8:
              printf("Eight\n");
              break;
          case 9:
              printf("Nine\n");
              break;      
        }
    }
    else{
        printf("Invalid input");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);
    Display(iValue);

    return 0;
}