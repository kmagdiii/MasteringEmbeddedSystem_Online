/*
 ============================================================================
 Name        : MES.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i,j;
	float a, b;
	char c;

	// lecture slides assignment
//	for(i=0,j=0; i<10 ; i++){
//		for( j=i ;j < 10 ; j++)
//		{
//			printf("%d\t",j);
//		}
//		printf("\n");
//	}


	//#####Home_work-1###############
	//
	//
	//EX1:
	//
	//Write C Program to Print a Sentence
	//
	//i should see the Console as following:
	//##########Console-output###
	//C Programming
	//###########################
	//
	//########################################################################
	//

//	printf("C Programming\n");
	//EX2:
	//
	//Write C Program to Print a Integer Entered by a User
	//i should see the Console as following:
	//##########Console-output###
	//Enter a integer: 25
	//You entered: 25
	//###########################
	//
	//########################################################################
	//
	//
//	printf("Enter a integer: ");
//	fflush(stdin);fflush(stdout);
//	scanf("%d",&i);
//	printf("You entered: %d\n",i);

	//EX3:
	//
	//Write C Program to Add Two Integers
	//
	//i should see the Console as following:
	//##########Console-output###
	//Enter two integers: 12
	//11
	//Sum: 23
	//###########################
	//
	//########################################################################
	//
	//
//	printf("Enter two integers: ");
//	fflush(stdin);fflush(stdout);
//	scanf("%d %d",&i,&j);
//	printf("Sum: %d\n",i+j);

	//EX4:
	//
	//Write C Program to Multiply two Floating Point Numbers
	//i should see the Console as following:
	//##########Console-output###
	//
	//###########################
	//Enter two numbers: 2.4
	//1.1
	//Product: 2.640000
	//########################################################################
	//
	//
	//
//	printf("Enter two numbers: ");
//	fflush(stdin);fflush(stdout);
//	scanf("%f %f",&a,&b);
//	printf("Product: %.6f\n",a*b);

	//EX5:
	//
	//Write C Program to Find ASCII Value of a Character
	//
	//#########Console_output######
	//Enter a character: G
	//ASCII value of G = 71
	//#############################
	//
	//
		printf("Enter a character: ");
		fflush(stdin);fflush(stdout);
		scanf("%c",&c);
		printf("ASCII value of G = %d\n",c);
	//########################################################################
	//
	//EX6:
	//
	//Write Source Code to Swap Two Numbers
	//
	//#########Console_output######
	//Enter value of a: 1.20
	//Enter value of b: 2.45
	//
	//After swapping, value of a = 2.45
	//After swapping, value of b = 1.2
	//#############################
	//########################################################################
	//
	//EX7:
	//it is an interview trick
	//
	//Write Source Code to Swap Two Numbers without temp variable.



	return EXIT_SUCCESS;
}
