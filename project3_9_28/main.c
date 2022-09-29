#include <stdio.h>
#include <stdlib.h>
#include<math.h>
/*int main()
{
    int x1=-1;
    short x2= 32768;
    long x3=65536;
    unsigned int x4=97;
    float x5=12.3456789;
    double x6=12.345678912345;
    char x7='A';
    printf("x1=%d\n",x1);
    printf("x2=%d\n",x2);
    printf("x3=%ld\n",x3);
    printf("x4=%u\n",x4);
    printf("x5=%f\n",x5);
    printf("x6=%le\n",x6);
    printf("x7=%c\n",x7);
    return 0;
}*/
/*int main ()
{

    int time ,hour,minute;
    printf("请输入时间值：");
    scanf("%d",&time);
    hour=time/60;
    minute=time%60;
    printf("%02d小时%d分钟",hour,minute);//%02d为左边补0来着
    return 0;
}*/
/*int main ()
{
    int i=5;
    int k;
    k=++i;
    k=i++;
    k=--i;
    k=i--;
    printf("k is %d\n",k);
   return 0;
}*/
/*int main ()
{
    short a=10,b=20;
    printf("%d\n",~a);//取反码再取补码；~n=-n-1;
    printf("%d\n",a<<2);
    printf("%d\n",a>>2);
    printf("%d\n",a&b);
    printf("%d\n",a^b);//异或
    printf("%d\n",a|b);
    return 0;
}*/
int main ()
{
    float a,b,c,p,disc,q,x1,x2,temp1,temp2;
    printf("input a,b,c:");
    scanf("%f %f %f",&a,&b,&c);
    temp1=b*b-4*a*c;
    temp2=sqrt(temp1);
    /*LL:if(temp2>=0)
    {

    }else {
    printf("error!please input again:");
    scanf("%f %f %f",&a,&b,&c);
    goto LL;
    }*///循环+goto

    LL:do{
    printf("error!please input again:");
    scanf("%f %f %f",&a,&b,&c);
    }while(temp2<0);
    goto LL;
    p=-b/2*a;
    disc=b*b-4*a*c;
    q=sqrt(disc)/2*a;
    x1=p+q;
    x2=p-q;
    printf("%.2f %.2f",x1,x2);
    return 0;
}







































































