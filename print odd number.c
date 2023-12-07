#include<stdio.h>
int main()
{
int n;
printf("n\n");
scanf("%d",&n);


 for(int i=0; i<=100; i=i+1)
   {
      for(int j=0; j<=2*n+1; j++)
      {
          printf("%d",j);
      }
        printf("\n");
   }

return 0;
}
