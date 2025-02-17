/*program to merge two unsorted arrays*/
#include <stdio.h>
int main()
{
    int a[5]= {19, 10, 65, 36, 90};
    int b[5] = {12, 89, 78, 43, 23};
    int i;
    printf("Drishti Bansal\n");
    printf("Merge of unsorted array:");
    for(i=0; i < 5;i++)
    {
        printf("\t%d",a[i]);
    }
    for(i=0; i < 5; i++)
    {
        printf("\t%d",b[i]);
    }
    return 0;
}