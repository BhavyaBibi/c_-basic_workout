
#include <stdio.h>
#include<string.h>

int main()
{
    char value[19];
    int length,i;
    int flag=0;
    
printf("enter the string:");
scanf("%s",value);

length = strlen(value);
for (i=0; i<length; i++){
    if(value[i] != value[length-i-1]){
        flag=1;
        break;
        
    }
}
if (flag){
    printf("%s is not a palindrome",value);
    
}
else{
    printf("%s is a palindrome",value);
}
    return 0;
}
