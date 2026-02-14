#include <cs50.h>
#include <stdio.h>

int main(void)
{
  int x=get_int("Enter unit: ");
  float bill=0;

  if(x<=100)
  {
    bill=x*5;

  }
  else if(x<=200)
  {
    bill=(100*5)+(x-100)*6;
  }
  else
  {
    bill=(100*5)+(100*6 )+(x-200)*8;
  }

  if ( bill >1000)
 {
    bill = bill + (bill * 0.10);
 }
  printf("Total bill = %.2f taka\n", bill);

  return 0;
}
