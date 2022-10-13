#include <stdio.h>
#include <stdlib.h>
 #include"time.h"
//#define N 3
/*int main()
{
    int a[N],i,max,min,sum=0;
    float ave;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        sum=sum+a[i];
    }if(i==6)break;
    ave=sum/10.0;
    max=a[0];
    min=a[0];
    for(i=0;i<10;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("the average of these number is %.2f\nmax is %d\nmin is %d\n",ave,max,min);
    return 0;
}*/
//生成随机数与二维矩阵
/*#include "time.h"
int main ()
{
    srand(time(NULL));
    int i, j,a[N][N],s=0,s1=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            int random_number=rand()%100+1;
           a[i][j]=random_number;
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%6d",a[i][j]);
            if(i==j)
            {
                s=s+a[i][j];
            }
            if(i+j==2)
            {
                s1=s1+a[i][j];
            }
        }
        printf("\n");
    }
    printf("\nsum=%d",s);
    printf("\nsum1=%d",s1);
    return 0;
}*/
//rand 与srand函数
/*int main ()
{
    int i,j;
    srand(getpid(NULL));
    for(i=0;i<10;i++)
    {

        //j=1+(int)(10.0*rand()/(RAND_MAX+1.0));
        j=1+(int)rand()%10;
        printf("%d\n",j);
    }
    r*/

    /*int main()
    {
        char b;
         srand((int)time(NULL));
        do
        {

            b=_getch();
            int a=rand();
            printf("%d\n",a);
}while(b!='a');
        return 0;
    }*/
    //在有序数列中插入数据
    /*int main()
{
    int a[11]={-10,-9,-8,-7,-6,-5,-4,-3,-2,-1};
    int i,j,m;
    scanf("%d",&m);
    for(i=0;i<10;i++)//找到插入点
    {
       if(m<=a[i]||i==10)
       {
           break;
       }
    }
    for(j=10;j>i;)
    {
        a[j]=a[j-1];
        j--;
    }
    a[j]=m;
    printf("the new array is \n");
    for(i=0;i<=10;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}*/
/*int main()
{
    int arr[10][10],i,j;
    for( i=0;i<10;i++)
    {
        for( j=0;j<i;j++)
          {
              if(i==0)
              {
                  arr[i][j]=1;
              }
              if(i==j)
              {
                  arr[i][j]=1;
              }
              if(i>=1&&j>=1)
              {
                  arr[i][j]=arr[i-1][j]+arr[i-1][j-1];
              }
          }

    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("%8d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/
/*int main ()
{
    int arr[10][10];
    int i,j;
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            arr[i][j]=0;
        }
    }
    for(i=0;i<10;i++)
    {
        arr[i][0]=1;
        arr[i][i]=1;

    }
    for(i=1;i<10;i++)
    {
        for(j=1;j<=i;j++)
        {
               arr[i][j]=arr[i-1][j]+arr[i-1][j-1];
        }
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%8d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/
/*int main ()
{
    int a[100][100];
    int i,j,n;
    scanf("%d",&n);
    for(i=0;i<100;i++)
    {
        for(j=0;j<100;j++)
        a[i][j]=0;
    }
    for(i=0;i<100;i++)
    {
        a[i][0]=1;
    }
    for(i=1;i<100;i++)
    {
        for(j=1;j<=i;j++)
        {
            a[i][j]=a[i-1][j]+a[i-1][j-1];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%8d",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}*/
//数组初始化
/*int main()
{
    int a[10];
    for(int i=0;i<10;i++)
    {
        printf("%d   ",a[i]);
    }
    return 0;
}*/
int main ()
{
    char c[80],a[40],b[40];
    int i=0,j=0,k=0;
    printf("请输入字符串有序s1：");
    gets(a);
    printf("请输入字符串有序s2：");
    gets(b);
    for(;a[i]!='\0'&&b[j]!='\0';)
    {
        if(a[i]>=b[j])
        {
           c[k]=b[j];
            j++;
        }else
        {
           c[k]=a[i];
           i++;
        }
        k++;
        }

    while(a[i]!='\0')
    {
        c[k++]=a[i++];
    }
    while(b[j]!='\0')
    {
        c[k++]=a[j++];
    }
    c[k]='\0';
    printf("合并后的有序字符串：");
    puts(c);
    puts(a);
    puts(b);

    return 0 ;
}//a[]与b[]均为有序数组



















