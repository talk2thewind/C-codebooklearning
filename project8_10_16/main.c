#include <stdio.h>
#include <stdlib.h>
/*#define f(a,b) a*b
int main()
{
    int x,y;
    printf("Input two numbers:\n");
    scanf("%d%d",&x,&y);
    printf("f(%d,%d)=%d\n",x+y,x-y,f(x+y,x-y));
    return 0;
}*/
#include "Header802.h"
#ifdef HIGH_PRECISION
#define PI 3.1415926
#define PRINT_FORMAT "%0.6f"
#else
#define PI 3.14
#define PRINT_FORMAT "%0.2f"
#endif // HIGH_PRECISION
int main ()
{
    float r,area;
    printf("Input r:\n");
    scanf("%f",&r);
    area=PI*r*r;
    printf("The area is:");
    printf(PRINT_FORMAT,area);
    return 0;
}
