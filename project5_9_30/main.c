#include <stdio.h>
#include <stdlib.h>
//使用-1作为数据输入标志
/*int main()
{
   int m,counter=0;
   printf("Please input a set of integers:");
   while(counter >=0)
   {
       scanf("%d",&m);
       if(m==-1)
       {
           break;
       }else if (m%2==0)
       {
           counter=counter +1;
                  }
   }
   printf("\nThere are %d even numbers.\n",counter);
    return 0;
}*/
/*int main ()
{
    int m,counter=0;
    char ask;
    while (counter>=0)
    {
     printf("Input a number :");
     scanf("%d",&m);
     getchar();
     if(m%2==0)
     {
         counter =counter +1;
     }
     ask=getchar();
     if(ask=='n'||ask=='N')
     {
         break;
     }
    }
    printf("%d even numbers in total!",counter );
    return 0;
}*/
/*int main ()
{
    int i,j,k,counter=0;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
         for(k=1;k<=6;k++)
         {
             if(i+j+k==8)
             {
                 printf("%d %d %d\n",i,j,k);
                 counter=counter+1;
             }
         }
        }
    }
    printf("%d in total",counter);
    return 0;
}*///穷举求排列；
/*int main()
{
    int i,j,k,counter=0;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            if(i+j>=2)
            {
                k=8-i-j;
                printf("%d %d %d\n",i,j,k);
                counter=counter+1;
            }
        }
    }
    printf("%d in total",counter);
    return 0;
}*///简化穷举法
/*int main ()
{
    /*int arr[3],a[3];
    int X=arr[0];
    int Y=arr[1];
    int Z=arr[2];
    int A=a[0];
    int B=a[1];
    int C=a[2];
    for(int i=0;i<=2;i++)
    {
       for(int j=0;j<=2;j++)
       {
           arr[i]=a[j];
       }
    }*/
    /*int  a,b,c;
    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=3;j++)
        {
            for(int k=1;k<=3;k++)
            {
                if(i!=j&&i!=k&&j!=k)
                {
                    if(i!=1&&k!=1&&k!=3)
                    {
                        printf("A--->%c\n",i);
                        printf("B--->%c\n",j);
                        printf("C--->%c\n",k);
                    }
                }
            }
        }
    }
    return 0;
    float h=100,s=100;
    for(int i=1;i<=10;i++)
    {
        h=0.5*h;
        s=s+2*h;
    }
    printf("第十次弹起高度为:%.4f,总高度为：%.2f",h,s);

}*/
int main ()
{
    int i,total,t;
    for(total=6;total<=10000;total++)
    {
        t=total;
        for(i=1;i<=5;)
        {
            if((t-1)%5==0)
            {
                t=(t-1)*4/5;
                i++;
            }else break;

        }
        if(i==6) break;
    }
    printf("the total number of the fish is %d",total);
    return 0;
}















