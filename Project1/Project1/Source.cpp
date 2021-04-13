#include<stdio.h>

void main(){
	/*
	
	1) 문제 
	1
	12
	123
	1234
	123
	12
	1
	*/

	/*
	* 
	* for 문을 활용하여 문제 해결법
	* 
	for (int i= 1; i < 5; i++) {
		for (int j = 1; j <= i; j++) {
			printf("%d",j);
		}
		printf("\n");
	}
	for (int i = 3; i >= 1; i--) {
		for (int k = 1; k <= i; k++) {
			printf("%d", k);
		}
		printf("\n");
	}
	*/

	/*
	* 
	* 정답!
	
	int i = 1;
	while (i < 5) {
		int j = 1;
		while (j <= i) {
			printf("%d", j);
			j++;
		}
		i++;
		printf("\n");
	}
	
	i = 3;
	while (i >= 1) {
		int k = 1;
		while(k <= i){
			printf("%d", k);
			k++;
		}
		i--;
		printf("\n");
	}
	*/




	/*
	========================================== =
		2) 문제

		2
		4 6
		8 10 12
		14 16 18 20
		22
		24 26
		28 30 32
		34 36 38 40
	*/


	/*
	* 
	* 정답!
	* 
	* 
	int index = 1;
	while (index < 5) {
		int i = 1; 
		while (i <= index) {
			printf("%d", i);
			i++;
		}
		printf("\n");
		
		index++;
	}
	index = 3;
	while (index >= 1) {
		int i = 1;
		while (i <= index) {
			printf("%d", i);
			i++;
		}
		printf("\n");
		index--;
	}
	*/

	/*
	
	int variable = 2;
	int number = 1;
	int count = 0;

	while (count < 2) {
		while (number <= 4) {
			int index = 1;
			while(index <= number){
				printf("%d ", variable);
				variable += 2;
				index++;
			}
			printf("\n");
			number++;
		}
		count++;
		number = 1;
	}

	*/



	fgetc(stdin);
}