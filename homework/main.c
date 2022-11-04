#include <stdio.h>
//int zzz(int x,int y,int z)
//{
//    int a[50],i,j=0,t;
//    for(i=0;i<50;i++)
//    {
//        a[i]=0;
//    }
//    for(i=0;i<50;)
//    {
//        a[i]=x%y;
//        x=x/y;
//        if(x==0)
//        {
//            t=i;
//            break;
//        }
//        i+=1;
//
//    }
//    for(i=t;i>=0;i--)
//    {
//        if(a[i]==z)
//        {
//            j+=1;
//        }
//    }
//    return j;
//}
//
//int main()
//{
//   int x,y,z;
//   scanf("%d %d %d",&x,&y,&z);
//    printf("%d\n",zzz(x,y,z));
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    char c = 'a';
//    while (i < 2){
//        i++;
//        switch (c) {
//        case 'a':
//            printf("%c ", c);
//            break;
//            break;
//        }
//    }
//    printf("after loop\n");
//}
//int main(void)
//{
//    double pi=0;
//    int i=1;
//    const double eps=1e-6;
//    while(1.0/i>eps)
//    {
//        pi+=1.0/i;
//        i+=2;
//        pi-=1.0/i;
//        i+=2;
//    }
//    pi*=4;
//    printf("%.5f\n",pi);
//    return 0;
//}
//#include<math.h>
//double triangle(int a,int b,int c)
//{
//    double s;
//    if((a+b)<c||(a+c)<b||(b+c)<a)
//    {
//     s=0.0;
//     return s;
//    }else{
//        double p=(a+b+c)/2.0;
//        p=p*(p-a)*(p-b)*(p-c);
//        p=pow(p,0.5);
//        return p;
//    }
//
//}
//int main(){
//	int a,b,c;
//	scanf("%d %d %d", &a, &b, &c);
//	double S = triangle(a,b,c);
//	printf("%.4lf",S);
//	return 0;
//}



