
#include <stdio.h>
void main()
{
    int ara[100], frt[100];
    int n, i, j, ctr;

    printf("Enter array size :\n");
    scanf("%d", &n);

    printf("Enter %d elements array :\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &ara[i]);
        frt[i] = -1;
    }
    for(i = 0; i < n; i++) {
        ctr = 1;
        for(j = i+1; j < n; j++) {
            if(ara[i] == ara[j])  {
                ctr++;
                frt[j] = 0;
            }
        }
        if(frt[i]!= 0) {
            frt[i] = ctr;
        }
    }
    printf("The frequency of all elements of array :\n");
    for(i = 0; i < n; i++) {
        if(frt[i]!= 0) {
            printf("%d       %d\n", ara[i], frt[i]);
        }
    }
}

