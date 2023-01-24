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

	int x,i,j;
	float a, b;
	double LFResult;
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
	// printf("Enter a character: ");
	// fflush(stdin);fflush(stdout);
	// scanf("%c",&c);
	// printf("ASCII value of G = %d\n",c);
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
	//	printf("Enter value of a: ");
	//	fflush(stdin);fflush(stdout);
	//	scanf("%f",&a);
	//	printf("Enter value of b: ");
	//	fflush(stdin);fflush(stdout);
	//    scanf("%f",&b);
	//    a +=b;
	//    b = a-b;
	//    a = a-b;
	//    printf("After swapping, value of a = %.4f\n",a);
	//    printf("After swapping, value of b = %.4f\n",b);

	//checks for a number if it's odd or even
	//	printf("Enter an integer you want to check: ");
	//	fflush(stdin);fflush(stdout);
	//	scanf("%d",&x);
	//	((x%2) == 0)? printf("%d is even\n",x) : printf("%d is odd",x);


	//check for if a character is vowel
	//	    printf("Enter an alphabet :");
	//    fflush(stdin);fflush(stdout);
	//    scanf("%c",&c);
	//
	//    switch(c){
	//        case 'a':
	//        case 'o':
	//        case 'i':
	//        case 'e':
	//        {
	//            printf("%c is vowel\n",c);
	//        }
	//        break;
	//        default:
	//            printf("%c is consonant\n",c);
	//    }

	//checks for a character if it's alphabet or not
	//	printf("Enter an character you want to check: ");
	//	fflush(stdin);fflush(stdout);
	//	scanf("%c",&c);
	//	if( (c>=64 && c<=90) || (c>=97 && c<=122) ){ // between A-Z or between a-z
	//		printf("%c is a alphabet\n",c);
	//	}else{
	//		printf("%c is not an alphabet\n",c);
	//			}

	//calculate the sum of integer numbers
	//	printf("Enter an integer number: ");
	//	fflush(stdin);fflush(stdout);
	//
	//	scanf("%d",&x);
	//	for (i=1,a=0;i<=x;i++){
	//		a+=i;
	//	}
	//	printf("Sum = %d\n",(int)a);

	//calculate the factorial of integer number
	//	unsigned long long int LLUResult;
	//	printf("Enter an integer number: ");
	//	fflush(stdin);fflush(stdout);
	//	scanf("%d",&x);
	//	if(x>=0){
	//		switch (x){
	//		case 0:	//factorial of zero is always 1
	//			printf("Factorial = 1\n");
	//			break;
	//		default:
	//			if(x<=20){
	//
	//			for (i=1,LLUResult=1;i<=x;i++){
	//				LLUResult*=i;
	//			printf("Factorial = %llu\n",LLUResult);
	//			}
	//			}else{
	//
	//				printf("Math Error: Too large number to present\n");
	//			}
	//			break;
	//			}
	//
	//
	//	} else if (x<0){
	//		printf("There are no factorial for negative number \n");
	//	}

	//	//A Simple calculator
	//		printf("Enter operator + or - or * or divide: ");
	//		fflush(stdin);fflush(stdout);
	//		scanf("%c",&c);
	//		printf("enter two numbers: ");
	//		fflush(stdin);fflush(stdout);
	//		scanf("%f %f",&a,&b);
	//		switch (c){
	//			case '+':
	//			LFResult=a+b;
	//			break;
	//			case '-':
	//			LFResult=a - b;
	//			break;
	//			case '/':
	//			if(b=!0)
	//				LFResult=a/b;
	//			break;
	//			case '*':
	//			LFResult=a*b;
	//			break;
	//			default:
	//			printf("Not a valid operator\n");
	//			break;
	//		}
	//		if((c == '-') ||(c == '+') ||(c == '/') ||(c == '*') )
	//		printf("%.4f %c %.4f = %.5f\r\n",a,c,b,LFResult);


	//Quiz tricks
	//Fallen trick A
	x =15;
	//	If the first condition is true the it will go to excute the first loop else it will go to Case3
	//	equivalent to
	//	if(x<10){
	//		if(x<10){
	//			printf("Case1\n");
	//		} else {
	//			printf("Case1\n");
	//		}
	//
	//	}else{
	//		printf("Case3\n");
	//	}

	x<10?x<10?printf("Case1\n"):printf("Case2\n"):printf("Case3\n");

	return EXIT_SUCCESS;
}
