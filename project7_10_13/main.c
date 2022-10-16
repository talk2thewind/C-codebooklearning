#include <stdio.h>
#include <stdlib.h>
//欧几里得算法 = 辗转相除法
/*int gcd(int a,int b)
{
    int t,r;
    if(a<b)
    {
        t=b;
        b=a;
        a=t;
    }
    r=a%b;
    while(r!=0)
    {
        a=b;
        b=r;
        r=a%b;
    }
    return b;

}
int main()
{
    int x,y,fac;
    printf("Please input two numbers:");
    scanf("%d %d",&x,&y);
    fac=gcd(x,y);
    printf("the great common divitor is %d",fac);
    return 0;
}*/
//程序嵌套使用
/*long reverse (long int n)
{
  long int t=0,flag;

  for(;n!=0;)
  {
    flag=n%10;
    n=n/10;
    t=t*10+flag;
  }
  return t;
}
int palindrome(long int n)
{
    if(reverse(n)!=n)
    {
        return 0;
    }else
    return 1;
}
int main()
{
    long n,m;
    int count=0;
    printf("Please input a positive integer:");
    scanf("%ld",&n);
    printf("Palindrome Numbers are generated as follows:\n");
    while(!palindrome((m=reverse(n))+n))
    {
        if(n>0&&m+n<n)
        {
            printf("over flow error!\n");
            break;
        }else
        {
            printf("[%d]:%ld+%ld=%ld\n",++count,n,m,m+n);
            n=m+n;
        }
    }
    printf("[%d]:%ld+%ld=%ld\n",++count,n,m,m+n);
    return 0;
}*/
/*int main ()
{
    int value,afterNumber=0;
    value=0;
    scanf("%d",&value);
    printf("反转后的数字：\n");
    while(value!=0)
    {
        afterNumber =value%10;
        printf("%d",afterNumber);
        value=value/10;
    }
    return 0;
}*/
//数字反转！
/*int main ()
{
    int value ,flag,result;
    while(1)
    {
        result=0;
        printf("please input a number:");
        scanf("%d",&value);
        while(value!=0)
        {
            flag=value%10;
            value/=10;
            result=result*10+flag;
        }
        printf("the output is %d\n",result);
    }
    return 0;
}*/
/*long Fibo(int a);//??


int main()
{
    int n,i;
    long x;
    printf("Input n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        x=Fibo(i);
        printf("Fibo(%d)=%d\n",i,x);

    }

}
long Fibo(int n)
{
    long f;
    if(n==1||n==2)
    {
        f=1;
    }else
    {
        f=Fibo(n-1)+Fibo(n-2);
    }
    return f;
}*/
/*#include"time.h"
void sort(int a[],int n)
{
    int i,j,k,t;
    for(i=0;i<n-1;i++)
    {
        k=i;
        for(j=i+1;j<n;j++)
        {
          if(a[j]>a[k])
          {
              k=j;
          }
        }
        if(i!=k)
          {
              int temp;
              temp=a[k];
              a[k]=a[i];
              a[i]=temp;
          }
    }

}
int main()
{
    int i,a[10];
    srand((unsigned)time(0));
    printf("randomly generate 10 numbers:\n");
    for(i=0;i<10;i++)
    {
        a[i]=(int)rand()%100;
        printf("%3d ",a[i]);
    }
    printf("\n");
    sort(a,10);
    printf("sorted numbers are as follow:\n");
    for(i=0;i<10;i++)
    {
        printf("%3d ",a[i]);
    }
    return 0;
}*/
int main ()
{
    void fun();
    int i;
    for(i=1;i<=5;i++)
    {
        fun();
    }
    return 0;
}
void fun()
{
    int a=0;
    static count;
    count++;
    a++;
    printf("a=%3d,count=%3d\n",a,count);
}
















