#include<stdio.h>
   
int main()
{
   int counter = 0, i=0;
   char sen[1000];
   fgets(sen, sizeof(sen), stdin);

    for(i = 0; sen[i] !='\0'; i++)
    {
       
       if (sen[i]=='a'||sen[i]=='e'||sen[i]=='i' ||sen[i]=='o' ||sen[i]=='u'||sen[i]=='A'||sen[i]=='E' ||sen[i]=='I' ||sen[i]=='O'||sen[i]=='U')
       {
        counter++;
       }
    }
    printf("%d", counter);

   return 0;
}