#include <stdio.h>
#include <stdlib.h>
void polowa(int n, double [], double [],double []);
void zebra(int n, double [], double [],double []);
int main()
{
    double tablica1[6]={5,4,3,2,1,8};
    double tablica2[6]={6,7,1,4,3,2};
    double tablica3[12];
    polowa(6,tablica1,tablica2,tablica3);
    zebra(6,tablica1,tablica2,tablica3);
    return 0;
}
void polowa(int n, double tab1[], double tab2[],double tab3[])
{
    int k;
    printf("tablica trzecia to teraz: ");
    for(k=0;k<2*n;k++)
    {
        while (k<n)
        {
            tab3[k]=tab1[k];
            printf("%lf ",tab3[k]);
            k++;
        }
        tab3[k]=tab2[k-n];
        printf("%lf ",tab3[k]);
    }
    printf("\n");
}
void zebra(int n, double tab1[], double tab2[],double tab3[])
{
    int k,d=0,c=0;
    printf("tablica trzecia to teraz: ");
    for(k=0;k<2*n;k++)
    {
        if (k%2==0)
        {
            tab3[k]=tab2[d];
            d++;
        }
        else
        {
                tab3[k]=tab1[c];
                c++;
        }
        printf("%lf ",tab3[k]);
    }
    printf("\n");
}
