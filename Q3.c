#include <cs50.h>
#include <stdio.h>

int main(void)
{
 int x=get_int("Enter age: ");
 if(x>=25)
 {
   int status=get_int("Weekday: ");
   if (status==1)
   {
     printf("ticket 140");
   }
   else
   {
     printf("ticket 160");
   }

 }
 else if(x>=10 && x<25)
 {
   int status=get_int("Weekday: ");
   if (status==1)
   {
     printf("ticket 100");
   }
   else
   {
     printf("ticket 120");
   }
 }
 else
 {
     printf("ticket 60");
 }
 return 0;
}
