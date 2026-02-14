#include <cs50.h>
#include <stdio.h>

int main(void)
{
 int x;
 int y=5555;
 x=get_int("Enter your pin number: ");
 for (int i=1;i<3;i++)
 {
    if(x!=y)
    {
     x=get_int("Enter your pin number again: ");
    }
 }
printf("Account locked");
return 0;

}
