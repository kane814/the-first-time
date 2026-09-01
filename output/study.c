#include <stdio.h>
char chline(char, int, int);
double min(double,double);
int main(void)
{
double x,y;
scanf("%lf %lf",&x,&y);
printf("%lf\n",min(x,y));
chline('*', 5, 3);//此处可用scanf交互
    return 0;
}
double min(double a,double b)
{
    if(a<b)
    return a;
    else
    return b;
}
char chline(char ch,int i,int j)
{   int k,l;
    for(k=0;k<j;k++ )
    {
      for(l=0;l<i;l++)
      {
        putchar(ch);
      }
      printf("\n");
    }
}