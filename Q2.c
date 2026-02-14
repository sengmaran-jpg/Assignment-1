#include <cs50.h>
#include <stdio.h>

int main(void){

 int x=get_int("Enter attended classes: ");
 int y=get_int("Enter total classes: ");
 float percentage= (x*100)/y;

 if(percentage>=75)
 {
    printf("Allowed to sit in exam");
 }
 else
 {
    printf(" Not Allowed");
 }
return 0;
}
