#include<stdio.h>
   
int main()
{
   char code[100];
   fgets(code, sizeof(code), stdin);

   for(int i = 0; i != '\0'; i++)
   {
      //code goes here
      fgets(code, sizeof(code), stdin);

   }
   
   return 0;
}