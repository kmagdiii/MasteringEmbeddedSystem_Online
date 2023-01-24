/*
 ============================================================================
 Name        : MES.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
// Strings and arrays lab

#include <stdio.h>
#include <stdlib.h>

int main(void) {
// initialization and declaration
	float arr[10];		//declaration on the array
	int i,j;
	arr[0]=11.2;
	arr[2] = 22.3;		//only element 0 and element 2 are known others are garbage value

	char ArrCh[10] = {'1','2'};		//element 0 and 1 are set wit '1' and '2' others are initialized with 0 '\0'
	for ( i=0 ; i<10 ; i++){
		printf ("ArrCh[%d] = %c \n",i,ArrCh[i]);
	}
	printf("%p \n",arr); // the name of the array is a pinter to the first element to the array
	//printf("%f \n ",arr);			//warning and wrong value as %p expected to be printed as pointer
	printf("%.2f \n",*arr);			//11.20 as the first element of the array
	printf("%.2f \n",arr[0]);		//11.20 as the first element of the array
	printf("%.2f \n",*(arr+2));		//22.30 as the third element of the array
	printf("%.2f \n",arr[2]);		//22.30 as the third element of the array


// arrays are advanced data types and static in size

	//printf("Please enter the array size :");
	//fflush(stdin);fflush(stdout);
	//scanf("%d",&i);
	//int ArrStatic[i];
	//for (int i=0 ; i<10 ; i++){
	//	printf ("ArrStatic[%d] = %c \n",i,ArrStatic[i]);
	//}

// LAB 1: store and print 10 students degrees
	//float StudentDegrees[10];
	//for (int i=0 ; i<10 ; i++){
	//		printf ("enter student %d degree :",i+1);
	//		fflush(stdin);fflush(stdout);
	//		scanf("%f",StudentDegrees+i);
	//	}
	//for (int i=0 ; i<10 ; i++){
	//			printf ("student %d degree is : %.2f \n",i+1,StudentDegrees[i]);
	//			fflush(stdin);fflush(stdout);
	//		}
// LAB 2: Calculate polynomial value of set of input 5X^2 + 3X + 2
	//float x[10]= {1,2,3,4,5,6,7,8,9,10};
	//float y;
	//for (i=0; i<10 ; i++){
	//	y=( 5*x[i]*x[i] )+(3*x[i])+2;
	//	printf("when x = %.2f y= %.2f \n",x[i],y);
	//}
// LAB 3: Define and initialize 2D array
// LAB 4: Scan 2d array eleent from user
	//int arr2D[4][3]={
	//		{11,12,13},
	//		{21,22,23},
	//		{31,32,33},
	//		{41,42,43}};
	//for (i=0 ; i<4 ; i++){
	//	for (j=0 ; j<3 ; j++ ){
	//		printf("%d \t\t",arr2D[i][j]);
	//	}
	//printf("\n");
	//}
	//printf("Please enter element R2C1 : ");
	//fflush(stdin);fflush(stdout);
	//scanf("%d",&arr2D[1][0]);
	//printf("Please enter element R3C2 : ");
	//fflush(stdin);fflush(stdout);
	//scanf("%d",&arr2D[2][1]);
	//for (i=0 ; i<4 ; i++){
	//		for (j=0 ; j<3 ; j++ ){
	//			printf("%d \t\t",arr2D[i][j]);
	//		}
	//	printf("\n");
	//	}
// LAB 5: Calculate the transpose of a matrix 3 x 3
	int Matrix[3][3];
	int transposeMatric[3][3];
	for (i=0 ; i<3 ; i++){
		for (j=0 ; j<3 ; j++){
			printf("Enter item (%d,%d) = ",i+1,j+1 );
			fflush(stdin);fflush(stdout);
			scanf("%d",&Matrix[i][j]);
			transposeMatric[j][i] = Matrix[i][j];
		}
	}
	printf("original Matrix : \n");
	for (i=0 ; i<3 ; i++){
			for (j=0 ; j<3 ; j++ ){
				printf("%d \t\t",Matrix[i][j]);
			}
			printf("\n");
	}
	printf("transpose Matrix : \n");
	for (i=0 ; i<3 ; i++){
			for (j=0 ; j<3 ; j++ ){
				printf("%d \t\t",transposeMatric[i][j]);
				}
			printf("\n");
	}
	return EXIT_SUCCESS;
}
