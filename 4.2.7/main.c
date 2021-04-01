#include <stdio.h>
#include <stdlib.h>
void suma(int, int[], int[], int[]);
void wieksze(int, int[], int[],int[]);
void przepisywanko(int, int[], int[],int[]);
void main()
{
    int tablica1[6]={5,4,3,2,1,8};
    int tablica2[6]={6,7,1,4,3,2};
    int tablica3[6]={8,54,2,54,7,8};

//    suma(4,tablica1,tablica2,tablica3);
//    wieksze(4,tablica1,tablica2,tablica3);
    przepisywanko(4,tablica1,tablica2,tablica3);
    return 0;
}
void suma(int n, int tab1[], int tab2[],int tab3[])
{
    int k;
    printf("tablica trzecia to teraz: ");
    for(k=0;k<n;k++)
    {
        tab3[k]=tab1[k]+tab2[k];
        printf("%d ", tab3[k]);
    }
    printf("\n");
}
void wieksze(int n, int tab1[], int tab2[],int tab3[])
{
    int k;
    printf("tablica trzecia to teraz: ");
    for(k=0;k<n;k++)
    {
        if (tab2[k]>tab1[k])
        {
        tab3[k]=tab2[k];
        }
        else (tab3[k]=tab1[k]);
        printf("%d ", tab3[k]);
    }
    printf("\n");
}
void przepisywanko(int n, int tab1[], int tab2[],int tab3[])
{
    int k,temp1[n],temp2[n],temp3[n];
    for(k=0;k<n;k++)
    {
        temp1[k]=tab1[k];
        temp2[k]=tab2[k];
        temp3[k]=tab3[k];
    }
    for(k=0;k<n;k++)
    {
        tab1[k]=temp3[k];
        tab2[k]=temp1[k];
        tab3[k]=temp2[k];
        printf("1:%d 2:%d 3:%d\n",tab1[k],tab2[k],tab3[k]);
    }
    printf("\n");
}
