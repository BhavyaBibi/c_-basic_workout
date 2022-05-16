
#include <stdio.h>

void getarray();

void displayarray();



int main(void) {



int limit,values[10];

	printf("Enter limit of array");

	scanf("%d",&limit);

// 	int values[limit];



getarray(limit,values);



displayarray(limit,values);







	return 0;

}

void getarray(int limit,int values[]){

	int i;

	printf("Enter values of array");

	for(i=0;i<limit;i++){

		scanf("%d",&values[i]);

	}



}



void displayarray(int limit,int values[]){

	int i;

	printf("Entered values are :");

	for(i=0;i<limit;i++){

	printf("%d\t",values[i]);

	}

}
