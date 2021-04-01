#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void funkcja(int, int [], int []);
void odwrotnie(int, int [], int []);
int main()
{
    int tablica1[6]={4,5,67,54,3,2,6};
    int tablica2[6];
//    zamien(4,tablica1,tablica2);
    odwrotnie(6,tablica1,tablica2);
    return 0;
}

void zamien(int n, int tab1[], int tab2[])
{
    int k;
    printf("tablica druga to teraz: ");
    for(k=0;k<n;k++)
    {
        tab2[k]=tab1[k];
        printf("%d ", tab2[k]);
    }
    printf("\n");
}
void odwrotnie(int n, int tab1[], int tab2[])
{
    int k;
    printf("tablica druga to teraz: ");
    for(k=0;k<n;k++)
    {
        tab2[k]=tab1[n-k-1];
        printf("%d ", tab2[k]);
    }
}
