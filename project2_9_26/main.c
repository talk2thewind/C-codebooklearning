#include <stdio.h>
#include <stdlib.h>

/*int main()
{
   char c1,c2,c3;
   FILE* fp;
   fp=fopen("F:/character.txt","wt+");
   scanf("%c%c%c",&c1,&c2,&c3);
   fprintf(fp,"%c %c %c",c1,c2,c3);
   fprintf(fp,"%d %d %d",c1,c2,c3);
   fclose(fp);
    return 0;
}*/
/*int main ()
{
    float hua;
    sacnf("%f",&hua);
    float temp=(hua-32)*5;
    float she=temp/9;
    printf("%.2f",she);
    return 0;
}*/
int main()
{
    float celsius,fahr,temp;
    printf("input:fahr=");
    scanf("%f",&fahr);
    temp=5.0/9;
    celsius=temp*(fahr-32);
    printf("celsius is %4.2f \n",celsius);

    return 0;
}





























