#include <stdio.h>
#include<stdlib.h>

    void sum(); //declaration

int main()
{
    sum();//function call
    return 0;
}

// function definition
void sum(){
    int num1,num2,sum;
    printf(" enter the two numbers:");
    scanf("%d%d",&num1,&num2);
    sum = num1 + num2 ;
    printf(" enter the two number sum is :%d",sum);
}
