#include <stdio.h>
#include <stdlib.h>
/*void swap(int *p1,int *p2)
{
    int temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
}
int main()
{
    int a,b,c,*p1,*p2,*p3;
    p1=&a;
    p2=&b;
    p3=&c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        swap(p1,p2);
    }
    if(a>c)
    {
        swap(p1,p3);
    }
    if(b>c)
    {
        swap(p2,p3);
    }
    printf("%d %d %d\n",*p1,*p2,*p3);
    return 0;
}*/
/*int main()
{
    int x,y;
    int *px,*py;
    int t;
    scanf("%d%d",&x,&y);
    px=&x;
    py=&y;
    if(*px<*py)
    {
        t=*px;
        *px=*py;
        *py=t;
    }
    printf("x=%d,y=%d",*px,*py);
    return 0;
}*/
//int main()
//{
//    //int nums[10],*p;
//    //p=nums;
//    //p=&nums[0];
//    int a[11]={10,15,20,25,30,35,40,45,50,55};
//    int i,j,n,*p;
//    printf("Input the data plz:");
//    scanf("%d",&n);
//    p=a;
//    for(i=0;i<10;i++)
//    {
//        if(*(p+i)>n)
//        {
//            j=i;
//            break;
//        }
//    }
//    for(i=11;i>j;i--)
//    {
//        int t;
//        t=*(p+i);
//        *(p+i)=*(p+i-1);
//        *(p+i-1)=t;
//    }
//    *(p+j)=n;
//    printf("\nThe new array is:\n");
//    for(i=0;i<11;i++)
//    {
//        printf("%d ",*(p+i));
//    }
//    return 0;
//}
//int main ()
//{
//    char word[]="fuck";
//    printf("%s",word);
//    char *sentence="faq";
//    printf("%s\n",sentence);
//    printf("%c\n",sentence[0]);
//    for(int i=0;i<3;i++)
//    {
//        printf("%c\n",*sentence++);
//    }
//    char sentence[]="faq";
//    char word[100];
//    char *ch=word;
//    int i;
//    for(i=0;sentence[i]!=' ';i++)
//    {
//        *(ch+i)=sentence[i];
//    }
//    printf("ch=%s,word=%s",ch,word)
//    int i=10;
//    int *pi;
//    int **ppi;
//    pi=&i;
//    ppi=&pi;
//    printf("i=%d",**ppi);
//    printf("Adress of i:%d",*ppi);
//    int nums[5];
//    int *p[5];
//    int **pp;
//    for(int i=0;i<5;i++)
//    {
//        p[i]=&nums[i];
//    }
//    return 0;
//#include <stdio.h>
//#include <math.h>
//#define MAX 20  //��������������Ը���
//
////��������������
//int DET(int arr1[MAX][MAX], int n);
//int Minor(int arr1[MAX][MAX], int i, int n);
//
//
//int DET(int arr1[MAX][MAX], int n)
//{
//	int i, M, sum = 0;//i�ǵ�һ�е���ָ�꣬M������ʽ��ֵ��sum������ʽ�ļ���ֵ
//	if (n == 1)//һ������ʽֱ�ӵó����
//		return arr1[0][0];
//	else if (n > 1)
//	{
//		for (i = 0; i < n; i++)//����һ��չ��
//		{
//			M = Minor(arr1, i, n);
//			sum += pow(-1, i + 2) * arr1[0][i] * M;
//		}
//	}
//	return sum;
//}
//
//
//int Minor(int arr1[MAX][MAX],int i,int n)
//{
//	int  j, k,result;
//	int arr2[MAX][MAX];
//
//	//����Ϊ��������ʽ�Ĺ��̡�����C���Ե����ԣ�������̻�Ƚϸ��ӣ���Ҫ�۲�����ʽ��ԭ����ʽ�Ĺ�ϵ��
//		for (j = 0; j < n - 1; j++)
//		{
//			for (k = 0; k < n - 1; k++)
//			{
//				if (k < i)
//					arr2[j][k] = arr1[j + 1][k];
//				else if (k >= i)
//					arr2[j][k] = arr1[j + 1][k + 1];
//			}
//		}
//
//	return DET(arr2, n - 1);//�����������ʽ��һ���µ�����ʽ������DET�������м��㡣
//}
//
//
//int main()
//{
//	int arr1[MAX][MAX];
//	int a,b,n;
//	printf("����������ʽ������");
//	scanf3("%d", &n);
//	printf("����������ʽ��\n");
//	for (a = 0; a < n; a++) {
//		for (b = 0; b < n; b++) {
//			scanf("%d", &arr1[a][b]);
//		}
//	}
//
//	printf("%d", DET(arr1, n));
//}
/*int *match(int *p,int n,int m);
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10},b,i;
    int *(*f)();
    int *pt;
    scanf("%d",&b);
    f=&match;
    *f(*pt,10,b);
    if(pt!=NULL)
    {
        *pt=0;
    }
    for(i=0;i<10;i++)
    {
        printf("%3d",a[i]);
    }
    return 0;
}
int *match(int *p,int n,int m)
{
    int i;
    for(i=0;i<n;i++,p++)
    {
        if(i==n)
        {
           return NULL;
        }else{
        return p;
        }
    }
}*/
int main ()
{
    char *p1,*p2,a[10],b[10];
//    for(int i=0;i<10;i++)
//    {
//        a[i]='\0';
//        b[i]='\0';
//    }
    printf("%s",a);
    printf("Input character plz:\n");
    //gets(a);
    scanf("%s",a);
    printf("Input character plz:\n");
    //gets(b);
    scanf("%s",b);
    for(p1=a;(*p1)!='\0';p1++)
    {

    }
    for(p2=b;(*p2)!='\0'||(*p1)!='\0';p2++,p1++)
    {
        *p1=*p2;
    }
    *p1='\0';
    printf("%s\n",a);
    printf("%s\n",b);
    return 0;
}























