#include <stdio.h>

// sum of 2d arrays 
int main()
{
int size,array1[10][20],array2[10][20],i,j,sum[10][20];
printf("enter the size of array:");
scanf("%d",&size);

printf("enter the values of array1:");
for(i=0; i<size; i++){
    for(j=0; j<size; j++){
        scanf("%d",&array1[i][j]);
    }
    
}
printf("enter the values of array2:");
for(i=0; i<size; i++){
    for(j=0; j<size; j++){
        scanf("%d",&array2[i][j]);
    }
}
//sum of the matrix
printf("sum of the matrix is:");
for(i=0; i<size; i++){
    for(j=0; j<size; j++){
        sum[i][j] = array1[i][j] + array2[i][j];
        
        printf(" %d\t ",sum[i][j]);
    }
    printf("\n");
}

    return 0;
}
