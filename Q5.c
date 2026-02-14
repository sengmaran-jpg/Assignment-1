#include <cs50.h>
#include <stdio.h>
#include <string.h>


int main(void)
{
  string usertype[]={"admin","teacher","student"};
  string password[] = {"1234","2222","3333"};
  string type=get_string("Enter user type: ");
  for(int i=0;i<3;i++)
    {
     if (strcmp(usertype[i],type)==0)
     {
        string pass=get_string("Enter password: ");
        if(strcmp(password[i],pass)==0)
        {
         printf("Welcome to %s Panel",usertype[i]);
        }
        else
        {
        printf("Not Valid");
        }
        return 0;
    }
   }
}

