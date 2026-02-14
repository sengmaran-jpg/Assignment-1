#include <cs50.h>
#include <stdio.h>

int main(void)
{
  int x=10;
  int y;
  int count=0;

  for(int i=1;i<=x;i++)
  {
     y=get_int(" booking: ");
     if(y==1)
     {
        count++;
     }
  }
  int sub= x-count;
 if(count==x)
 {
    printf("Booking closed");
 }
 else
 {
    printf(" %d is still available",sub);
 }

return 0;
}
