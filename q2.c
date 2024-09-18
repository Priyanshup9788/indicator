
#include<stdio.h>
int main(){

     int i, j, size;

    printf("Enter a size :");
    scanf("%d", &size);

    int arr[size][size],*ptr[size][size],arr2[size][size];

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("enter number arr[%d][%d]:", i, j);
            scanf("%d", &arr[i][j]);
        }

        printf("\n");
    }

    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++){
            ptr[i][j]=&arr[i][j];
        }
    }

    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            arr2[i][j] = (*ptr[i][j])*(*ptr[i][j])*(*ptr[i][j]);
        }
    }

    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }




        
    
    return 0;
}