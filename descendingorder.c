
#include <stdio.h>

int main()
{
int size,values[10],i,j,temp =0;
printf(" enter the size of an array:");
scanf("%d",&size);
printf(" enter the values of array:");
for(i=0; i<size; i++){
    scanf("%d",&values[i]);
    
}
for(i=0; i<size; i++){
    for (j=i+1; j<size; j++){
        if(values[i]<values[j]){
            temp = values[i];
            values[i] =values[j];
            values[j] =temp;
            
        }
    }
}
printf(" all array  sorted elements are :");
for(i=0; i<size; i++){
    
        printf("%d \t",values[i]);
        
    }
    

    return 0;
}
