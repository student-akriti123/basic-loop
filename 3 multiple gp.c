#include<stdio.h>
int main()
{
  int n;
  printf("Enter the value n\n");
   scanf("%d",&n);

   int a =3;
   for(int i=0;i<=n;i++)
   {
     printf("%d\n",a);
        a=a*4;
  }

return 0;
}
