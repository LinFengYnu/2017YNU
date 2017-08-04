#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    double start,end,cost;
    start=clock();
    int a[10000];
    int i =0;

    srand((unsigned) time(NULL));
    for(i=0;i<10000;i++){
        a[i]=rand();
        //printf("%d\t",a[i]);
    }


    int j, k,temp;
    for(j = 0; j < 9999; j++)
    {
        for(k = 0; j + k < 10000 - 1; k++)
        {
            if(a[k] > a[k + 1])
            {
                int temp = a[k];
                a[k] = a[k + 1];
                a[k + 1] = temp;
            }
        }
    }
    i=0;
    while (i<10000)
    {
        printf("%d\t",a[i]);
        i++;
    }

    end=clock();
    cost=end-start;
    printf("消耗的时间为%f毫秒\n",cost);
    return 0;
}
