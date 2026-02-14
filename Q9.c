#include <cs50.h>
#include <stdio.h>

int main(void)
{
 int x=get_int("Enter number: ");
 int digit;
 int sum=0;
 int count=0;

 while(x!=0)
 {
    digit=x%10;
    sum=sum +digit;
    if(digit%2!=0)
    {
        count++;
    }
    x=x/10;
 }
printf("Sum of digit=%d\n",sum);
printf("Odd number =%d\n",count);
 return 0;
}
