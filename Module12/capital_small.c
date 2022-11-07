#include<stdio.h>
   
int main()
{
   char name[1000];
   fgets(name, sizeof(name), stdin);
   puts(name);
   
   for(int i = 0; name[i] !='\0'; i++)
   {
      //code goes here

      if (name[i]>='a' && name[i]<='z')
      {
        name[i]-=32;
      }
      

   }
   puts(name);

   return 0;
}