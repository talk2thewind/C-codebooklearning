#include <stdio.h>
#include <stdlib.h>

//ָ��ֻռһ�в��÷ֺ�
//v,i,j,k,l,s,a[99];
//main()
//{
//    for(scanf("%d",&s);*a-s;v=a[j*=v]-a[i],k=i<s,j+=(v=j<s&&(!k&&!!printf(2+"\n\n%c"-(!l<<!j),"#Q"[l^v?(l^j)&1:2])&&++1||a[i]<s&&v&&v-i+j&&v+i-j))&&!(l%=s),v||(i==j?a[i+=k]=0:++a[i])>=s*k&&++a[--i])
//        ;
//}
//2.1��ʾ˫����
//��ע�͵ļ��ַ���
/*Name:pun.c               */
/*Purpose:Prints a bad pun.*/
/*Author:K.N.King          */

//Next(���׷���ע�ͽ���λ��)
/*I like it.
I think therefore i be
*/

//Last�����ͣ�
/************
*           *
*************/

//More
/*
 *
 *
 */

//int main(void)
//{
//    float profit;
//    profit=6.18f;
//    printf("%f\n",profit);
//    printf("To C,or not to C:that is the question.\n");
//    return 0;
//}
/*Computes the dimensional weight of a 12"x10"x8 box*/
//int main(void)
//{
//    int height,length,width,volume,weight;
//    height=8;
//    length=12;
//    width=10;
//    volume=height*length*width;
//    weight=(volume+165)/166;
//    printf("Dimensions:%dx%dx%d\n",length,width,height);
//    printf("Volume(cubic inches):%d\n",volume);
//    printf("Dimensional weight(pounds):%d\n",weight);
//    return 0;
//}
/*int main(void)
{
//    float a=1.0;
//    printf("%f",a);
//float��ʱ��׼ȷ�Һ�ʱ��
//    float a=1.0f;float ��ֵ����ɼ�һ��f
//    printf("%f",a);
    //f��ʾ��ʽ�����룬��Ҫ����ʽformat string

    return 0;
}*/
//dweight2.c
/*Computes the dimensional weight of a box from input provided by the user*/
//#include <stdio.h>
//int main(void)
//{
//    int height,length,width,volume,weight;
//    printf("Enter height of box:");
//    scanf("%d",&height);
//    printf("Enter length of box:");
//    scanf("%d",&length);
//    printf("Enter width of box:");
//    scanf("%d",&width);
//    volume = height*length*width;
//    weight =(volume+165)/166;
//    printf("Volume (cubic inches):%d\n",volume);
//    printf("Dimensionoal weight(pounds):%d\n",weight);
//    return 0;
//}
//2.6�������������
//�궨��
//#define INCHES_PER_POUND 166
//Ҳ���Զ�����ʽ
//#define RECIPROCAL_OF_PI (1.0f/3.14159f)  ���������ʱ��Ҫ������������
/*int main (void)
{
    printf("%d %f",INCHES_PER_POUND,RECIPROCAL_OF_PI);
    return 0;
}*/
//�궨��ֻ�ô�д��ĸ
//����֮�¶�ת��
//celsius.c
/*Converts a aFahrenheit temperature to Celsius*/
//#include<stdio.h>
//#define FREEZING_PT 32.0f
//#define SCALE_FACTER (5.0f/9.0f)
//int main (void)
//{
//    float fahrenheit,celsius;
//    printf("Enter Fahrenheit temperture��");
//    scanf("%f",&fahrenheit);
//    celsius = (fahrenheit - FREEZING_PT)*SCALE_FACTER;
//    printf("Celsius equivalent:%.1f\n",celsius);
//
//    return 0;
//}
//2.7��ʶ��
//exit(0);��return 0;��main�����еȼ�
//�κ�ϰ��
//2.1
//int main(void)
//{
//    printf("hello, world\n");
//}
//2.2
//int main(void)
//{
//    printf("Parkinson's Law:\nWork expends so as to ");
//    printf("fill the time\n");
//    printf("available for its completion\n");
//    return 0;
//}
//�����1
//int main(void)
//{
//    printf("       *\n");
//    printf("      * \n");
//    printf("     *  \n");
//    printf("*   *   \n");
//    printf(" * *    \n");
//    printf("  *     \n");
//    return 0;
//}
//2-3
//#define TEMP (4.0f/3.0f)
//#define PI 3.14
//int main(void)
//{
//    //float r=10.0,v;
//    float r,v;
//    scanf("%f",&r);
//    v=PI*TEMP*r*r*r;
//    printf("%f",v);
//    exit(0);
//}
//4
//int main(void)
//{
//    float amout, tax;
//    printf("Enter an amout:");
//    scanf("%f",&amout);
//    tax=1.05*amout;
//    printf("With tax added:$%.2f",tax);
//    return 0;
//}
//5-6
//#include "math.h"
//long function(int x)
//{
//   long output;
//   output = 3* pow(x,5)+2*pow(x,4)-5*pow(x,3)-pow(x,2)+7*x-6;
//   return output;
//}
//int main(void)
//{
//    long x;
//    scanf("%ld",&x);
//    //x=function(x);
//    x=((((3*x+2)*x-5)*x-1)*x+7)*x-6;//horner ����
//    printf("%ld\n",x);
//    return 0;
//}
//7
//int divide(int a,int x)
//{
//    int z;
//    for(z=0;a>=x;)
//    {
//        a=a-x;
//        z+=1;
//    }
//    return z;
//}
//int main(void)
//{
//    int amount,bill20,bill10,bill5,bill1;
//    printf("Enter a dollar amount:");
//    scanf("%d",&amount);
//    bill20=divide(amount,20);
//    bill10=divide(amount-bill20*20,10);
//    bill5=divide(amount-bill20*20-bill10*10,5);
//    bill1=divide(amount-bill20*20-bill10*10-bill5*5,1);
//    printf("$20 bills:%d\n",bill20);
//    printf("$10 bills:%d\n",bill10);
//    printf("$5 bills:%d\n",bill5);
//    printf("$1 bills:%d\n",bill1);
//    return 0;
//}
//8
int main(void)
{
    double amount,rate,payment;
    printf("Enter amount of loan:");
    scanf("%lf",&amount);
    printf("Enter interest rate:");
    scanf("%lf",&rate);
    printf("Enter monthly payment:");
    scanf("%lf",&payment);
    double monthlyRate=(rate/100.00)/12.0;
    double firstRemaining=amount-payment+amount*monthlyRate;
    double secondRemaining=firstRemaining-payment+firstRemaining*monthlyRate;
    double thirdRemaining=secondRemaining-payment+secondRemaining*monthlyRate;
    printf("Balance remaining after first payment:$%.2lf\n",firstRemaining);
    printf("Balance remaining after second payment:$%.2lf\n",secondRemaining);
    printf("Balance remaining after third payment:$%.2lf\n",thirdRemaining);
    return 0;
}//double ������Ҫlf








