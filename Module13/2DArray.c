#include<stdio.h>
   
int main()
{
    int a[1000][1000];

    int i,j;
    scanf("%d %d",&i,&j);
        for(int m = 0; m <=i-1 ; m++)
        {
          for (int n = 0; n <= j-1; n++)
          {
            scanf("%d", &a[m][n]);
          }
        }
        for(int m = 0; m <=i-1 ; m++)
        {
          for (int n = 0; n <= j-1; n++)
          {
               printf("%d ",a[m][n]);
          }
          printf("\n");
        }


     
   
   
   return 0;
}