#include<stdio.h>

int count = 1;

quicksort(char a[], int l, int r)
{
    int q;
    if(l<r)
    {
        printf("\n\nIteration %d:\t%s", count, a);
        count++;
        
        q = partision(a, l, r);
        quicksort(a, l, q-1);
        quicksort(a, q+1, r);
    }
}

int partision(char a[], int l, int r)
{
    int i = l, j = r, s1, s2;
    
    char pivot = a[l];
    
    while(i<j)
    {
        while(i<=r && a[i]<=pivot)
            i++;

        while(j>=l && a[j]>pivot)
            j--;

        if(i<j)
        {
            s1 = a[i];
            a[i] = a[j];
            a[j] = s1;
        }
    }

    s2 = a[j];
    a[j] = a[l];
    a[l] = s2;

    return j;
}

main()
{
    int n = 10, i;
    char a[10] = "RONYAHAMAD";

    printf("\n\nName Array:  ");
    printf("%s", a);

    quicksort(a, 0, n-1);

    printf("\n\nFinal Sorted Array:  ");
    printf("%s", a);

}