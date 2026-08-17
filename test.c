#include <stdio.h>
#include <stdbool.h>
int main(void)
{
/*  int a = 10;
    int b = 20;
    int h = a + b;
    printf("%d + %d = %d\n", a, b, h);
    printf("%d\n",2%2);
*/    
    int n;
    double sum=0.0;
    scanf("%d", &n);
    while(n>0)
    {   if(n%2==0)    //sign=-sign 借此改变正负号也行
        {
            sum+=-1.0/n;
            n--;
        }
        else if(n%2!=0)
        {
            sum+=1.0/n;
        n--;
        }
    }
    printf("Sum = %f\n", sum);

/*    int n;
    scanf("%d", &n);
    int m=n;
    int x=1;                                     愚蠢
    while(n/x>0)
    {
        x*=10;
        printf("%d\n",m-(n/x)*10);
    }    
*/
/*  int n;
    scanf("%d", &n);
    int x=1;
    while(n/x>=10)
    {
        x*=10;
    }
    while(x>=1)
    {
        printf("%d ", n/x);//这里可以加个空格耶
        n=n%x;
        x/=10;
    }
*/
/*  char c=127;
    char d=10000;
    printf("%d %d\n", c, d);
    printf("%d\n",sizeof(int));
*/    
/*  float a,b,c;
    a=1.123f;
    b=1.345f;
    c=a+b;
    if(c==2.468f)
    {
        printf("equal\n");
    }
    else
    {
        printf("not equal\n");
    }
    printf("%.8f\n", c);
*/    
/*  char d;
    int e;
    scanf("%d %c", &e, &d);
    printf("%c %d %d\n", d,d,e);
*/
/*  float d=1.03f;    
    double e=1.03;
    printf("%lf\n", d);
    printf("%.8f\n", d);
    printf("%.20lf\n", e);//精度真高
    
    bool f=-1; //奇怪
    printf("%d\n", f);
    int age=40;
    bool g=age>20&&age<30;
    printf("%d\n", g);
    printf("%d\n", !f);//奇怪 好像全是一
    float h=1.5;
    printf("%.2f",h);
*/    
    int x=5,y=2;
    int z;
//  z=(y*x)++; 出错了，y*x是一个表达式，不能作为左值 
    z=y*x++; //x先参与运算再自增
    printf("%d\n", z);
    int a=5;
//    int a=6; error: redefinition of 'a' with a different type: 'int' vs 'int'
    {
        a=6;
        printf("%d\n", a);
    } 

    return 0;
}