
#include <stdio.h>
#include<stdlib.h>

//function without argument with return value
z§
int sum(); //declaration

int main()
{
    int res;
    
    res = sum();//function call
     printf(" enter the two number sum is :%d",res);

  return 0;
}

// function definition
int sum(){
    int num1,num2,result;
    printf("enter the 2 numbers:");
    scanf("%d%d",&num1,&num2);
    
    result =num1+num2;
    
    
   
    return result;
}
