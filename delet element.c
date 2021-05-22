//delete integer ....#task....11
#include<stdio.h>

int main()
{


    int array[100], p, c, n;
    printf("Enter number of elements in array: \n");
    scanf("%d", &n);

    printf("Enter %d elements\n", n);
    for(c = 0; c < n; c++)
     {

       scanf("%d", &array[c]);
     }
    printf("Enter the location where you want to delete element from:  \n");
    scanf("%d", &p);

    if(p >= n+1)
        printf("Deletion not possible\n");
    else
    {

    for(c = p-1; c < n-1; c++)
       {

        array[c] = array[c+1];
       }
    printf("New array is: ");

    for(c = 0; c < n-1; c++)
     {

        printf("%d  ", array[c]);
     }
   //printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    }
    return 0;
}
