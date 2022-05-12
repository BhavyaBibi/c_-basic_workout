
#include <stdio.h>

int main()
{
int size,array1[10],array2[10],i;
printf("enter the array size:");
scanf("%d",&size);
printf("enter the first array1:");
for(i=0;i<size; i++){
    scanf("%d",&array1[i]);
}
printf("enter the second array 2 :");
for (i=0; i<size; i++){
    scanf("%d" ,&array2[i]);
    
}
// swapping two arrays

for(i=0; i<size; i++){
    array1[i] = array1[i]+array2[i];
    array2[i]=array1[i]-array2[i];
    array1[i]= array1[i]-array2[i];
}
printf ("after swapping first array:");
for(i=0; i<size; i++){
    printf("%d\t ",array1[i]);
    
}
printf("after swapping second array2: ");
for(i=0; i<size; i++){
    printf("%d\t",array2[i]);
    


    
}
    return 0;
}
