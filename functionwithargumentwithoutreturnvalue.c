#include <stdio.h>
#include<stdlib.h>

//function with argument without return value

    void sum(int,int); //declaration

int main()
{
    int a,b;
    printf("enter the 2 numbers:");
    scanf("%d%d",&a,&b);
    
    sum(a,b);//function call
    return 0;
}

// function definition
void sum(int num1,int num2){
    int result;
    
    result = num1 + num2 ;
    printf(" enter the two number sum is :%d",result);
}
