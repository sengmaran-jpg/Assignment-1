#include <cs50.h>
#include <stdio.h>

int main(void)
{
 float x;
 float total=0;
 while(1)
 {
   x=get_float("Enter prices: ");
   if(x==0)
   {
      break;
   }

   total+=x;
 }
  printf("total bill: %.2f\n",total);
  if(total>2000)
  {
    printf("15 percent Discount");
  }
  else
  {
    printf("5 percent Discount\n");
  }
return 0;
}
