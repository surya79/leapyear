#include <cs50.h>
#include <stdio.h>

int main()
{
    int leap;  // if need to use opreation use a variable

    printf("Enter a year: ");
    scanf("%d",& leap);

     if(leap == 0)
     printf("must enter a value that is not zero");
     else
{
    if(leap%4 == 0)
    {
        if( leap%100 == 0)
        {
            if ( leap%400 == 0)
                printf("%d is a leap year.", leap);
            else
                printf("%d is not a leap year.", leap);
        }
        else
            printf("%d is a leap year.", leap );
    }
    else
        printf("%d is not a leap year.", leap);

    return 0;
 }

}