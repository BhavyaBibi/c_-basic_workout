
#include <stdio.h>
#include<stdlib.h>

//function without argument with return value
int sum(); //declaration
int main(void){
 int res;
 res=sum(); //function call
    printf("enter the two number sum is :%d",res);
    return 0;
    
}

int sum(){
    int num1,num2,result;
    printf(" enter the two numbers:");
    scanf("%d%d",&num1,&num2);
    result =num1+num2;
    return result;

}