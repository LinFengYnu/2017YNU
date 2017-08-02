
#include <stdlib.h>
#include <time.h>
void sort(int a[],int n)
{
    int i,j,k,tmp;
    for (i = 0; i<n; i++) {
        k=1;
        for (j=0; j<n-i-1; j++) {
            if (a[j]>a[j+1]) {
            	k=0;
               tmp=a[j];
               a[j]=a[j+1];
               a[j+1]=tmp;
            }
        }
        if (k) break;
    }
}
int main(void)
{
int a[10000],i;
        srand(time(NULL));
        for (i = 0; i < 10000; i++) {
            a[i]=rand()%1000000;
            printf("%d ",a[i]);
        }
        putchar('\n');
        sort(a,10000);
        for (i = 0; i < 10000; i++) printf("%d ",a[i]);
        putchar('\n');
return 0;
}
