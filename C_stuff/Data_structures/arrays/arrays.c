#include <stdio.h>


void ProgramRun(){
	int array[5] = {1,2,3,4,5};

	for (int index = 0; index < 5; index++){
		printf("this is the array element: %d \n", array[index]);
	}
}

void Average(){
	int array[10] = {99, 83, 93, 79, 89, 76, 91, 84, 92, 95};

	printf("Theses are the array elements");
	for(int i = 0; i < 10; i++){
		printf("%d \n", array[i]);
	}

	float avg=0;
	int hold=0;

	for(int i=0; i<10; i++){
		hold += array[i];
	}

	avg = hold/10;
	printf("here is the avg value: %f \n", avg);
}


void MultiDimItems(){
	int mArr[3][3] = {{0,1,0}, {1,1,1}, {0,1,0}};
	for(int i = 0; i < 3; i++){
		for(int j=0;j<3;j++){
			printf("mArr[%d][%d]: %d \n", i, j, mArr[i][j]);
		}
	}
}


int main(){
	MultiDimItems();
	printf("press any key to continue\n");
	getchar();
}