#include <stdio.h>
#include<stdlib.h>

//function with argument with return value

int sum(int,int); //declaration

int main()
{
    int a,b,res;
    printf("enter the 2 numbers:");
    scanf("%d%d",&a,&b);
    
    res = sum(a,b);//function call
     printf(" enter the two number sum is :%d",res);

  return 0;
}

// function definition
int sum(int num1,int num2){
    int result;
    
    result = num1 + num2 ;
    return result;
}
