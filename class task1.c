
#include <stdio.h>
#include <conio.h>
void main()
{
    int list[20], n, i, e;

    printf("Enter seize of the list : \n");
    scanf("%d", &n);

    printf("Enter any %d integer value : ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &list[i]);
    }
    printf("Enter the element to be search : \n");
    scanf("%d", &e);

    for(i = 0; i < n; i++) {
        if(e == list[i]) {
            printf("Element is found %d at integer ", i);
            break;
        }
    }
    if(i == n) {
        printf("Given element is not found in the list!!!!");
    }
    getch();
}

