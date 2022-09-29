#include <stdio.h>
#include <stdlib.h>
//判断奇偶数
/*int main()
{
    int num, r;
    printf("num=");
    scanf("%d",&num);
    r=num%2;
    if(r==0)
    {
        printf("%d is an even number",num);
    }else if (r==1)
{
    printf("%d is an odd number\n",num);
}
    return 0;
}*/
//大小写转化
/*int main ()
{
    char c;
    printf("c=");
    scanf("%c",&c);
    //int i=c;
    if(c>=65&&c<=90)
    {
        printf("%c",c+32);
    }else if(c>=97&&c<=112)
    {

        printf("%c",c-32);
    }
    return 0;
}*/
/*int main ()
{
    char arr[100];
    int i=0;
    printf("请输入您需要转化的大小写字母：");
    while(scanf("%c",&arr[i])!=EOF)
    {
        if(arr[i]>='a'&&arr[i]<='z')
        {
            printf("%c",arr[i]-32);
        }else if(arr[i]>='A'&&arr[i]<='Z')
        {
            printf("%c",arr[i]+32);
        }
        i++;
            }
    return 0;
}*/
//判断三角形形状
/*int main ()
{   int arr[3];
    printf("input a b c:");
    scanf("%f %f %f",&arr[0],&arr[1],&arr[2]);
   for(int j=0;j<=1;j++)
    {for(int i=0;i<=2;i++)
    {
        float temp;
        if(arr[i]<arr[i+1])
        {
           temp=arr[i];
           arr[i]= arr[i+1];
           arr[i+1]=temp;
        }
    }}
    if(arr[1]+arr[2]>arr[0])
    {
        if(arr[1]==arr[2]==arr[0])
        {
            printf("Equilateral triangle!\n");
        }else if(arr[1]==arr[2]||arr[0]==arr[1])
        {
            printf("Isoseceles triangle!\n");
        }else if(arr[0]*arr[0]==arr[1]*arr[1]+arr[2]*arr[2])
        {
            printf("Right triangle!\n");
        }
        }
        printf("It doesnt make a triangle!\n");
    return 0;
}*/
/*int main ()
{
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    if(a+b>c||a+c>b||b+c>a)
    {

    }
    return 0;
}*/
//四则运算4.4
int main ()
{
    float value1,value2,result;
    char op;
    LL:printf("input value1、op、value2:");
    scanf("%f %c %f",&value1,&op,&value2);
    switch(op)
    {
        case '+':
        result=value1+value2;
        break;
        case '-':
        result=value1-value2;
        break;
        case '*':
        result=value1*value2;
        break;
        case '/':
        result=value1/value2;
        break;
        default:
            printf("error!please write again!\n");
            goto LL;
            break;
    }
    printf("%.2f%c%.2f=%.2f",value1,op,value2,result);
    return 0;
}

































