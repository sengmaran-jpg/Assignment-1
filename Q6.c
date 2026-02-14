#include <cs50.h>
#include <stdio.h>

int main(void)
{
  float x;
  float total=0;
  int count=0;

  for(int i=0;i<=7;i++)
  {
   x=get_float("Enter study hour: ");
   total= total+x;
   if(x<2)
   {
    count++;
   }
  }
 float average =total/7;

 printf("total hours=%.2f\n",total);
 printf("Average hours=%.2f\n",average);
 printf("days below 2 hours=%d\n",count);

}
