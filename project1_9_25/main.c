#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
/*int main()
{
    short a;
    int b;
    long c;
    float d;
    double e;
    char c1,c2;
    a=0X7fff;
    b=65;
    c=0X7fffffff;
    d=1.23456789;
    e=2.1234567890123456789;
    c1='a';
    c2='b';
    scanf("%hd%d%f",&a,&b,&d);
    c1=getchar();
    c2=getchar();
    printf("short:%d\nint:%d\nlong:%d\nfloat:%d\ndouble:%d\nchar:%d\n\n",sizeof(a),sizeof(b),sizeof(c),sizeof(d),sizeof(e),sizeof(c1));
    printf("a=%hd,%hd\n",a,a+1);
    printf("b=%d,%c\n",b,b);
    printf("c=%ld,%d\n",c,c);
    printf("d=%12.8f,%f\n",d,d);
    printf("e=%f,%12.10f\n",e,e);
    printf("c1=%d,%c\n",c1,c1);
    printf("c2=%d,%c\n",c2,c2);


    return 0;
}*/
/*int main ()
{
    int ch=0;
    while((ch=getchar())!=EOF)
           {

               putchar(ch);
           }
    return 0;
}*/
int main ()
{
    char passwork[20]={0};
    // ‰»Î√‹¬Î
    printf("Input password:");
    scanf("%s",passwork);
    int temp=0;
    while((temp=getchar())!='\n')
    {
        ;
    }
    printf("Comfirm passwork(Y/N)");
    int ch=0;
    ch=getchar();
    if(ch=='Y')
    {
        printf("success\n");
    }else
    {
        printf("defeat\n");
    }
    return 0;
}
