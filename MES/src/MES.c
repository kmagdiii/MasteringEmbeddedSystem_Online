/*
 ============================================================================
 Name        : MES.c
 Author      : Kirolos Magdy
 Version     :
 Copyright   : Your copyright notice
 Description : array and strings in C, Ansi-style
 ============================================================================
 */
// Strings and arrays lab

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

//EX1: Example of multidimensional array
	//float arr1[2][2];
	//float arr2[2][2];
	//float SumArr[2][2];
	//int i,j;
	//printf("Please enter elements of 1st matrix\n");
	//for(i=0;i<2;i++){
	//	for(j=0;j<2;j++){
	//		printf("Enter a%d%d:\r",i+1,j+1);fflush(stdout);fflush(stdin);
	//		scanf("%f",&arr1[i][j]);
	//	}
	//}
	//printf("Please enter elements of 2st matrix\n");
	//for(i=0;i<2;i++){
	//		for(j=0;j<2;j++){
	//			printf("Enter b%d%d:\r",i+1,j+1);fflush(stdout);fflush(stdin);
	//			scanf("%f",&arr2[i][j]);
	//			SumArr[i][j] = arr1[i][j]+arr2[i][j];
	//		}
	//	}
	//printf("Sum of the matrix\n");
	//for(i=0;i<2;i++){
	//			for(j=0;j<2;j++){
	//				printf("%0.2f\t",SumArr[i][j]);
	//			}
	//			printf("\n");
	//		}

//EX 2 : average of number of elements specified by the user
	//int i,NumberOfElement;
	//float average = 0;
	//printf("Please enter the number of the data :\t");fflush(stdin);fflush(stdout);
	//scanf("%d",&NumberOfElement);
	//float data[NumberOfElement];
	//for (i=0;i<NumberOfElement;i++){
	//	printf("%d. Enter number:",i+1);fflush(stdout);fflush(stdin);
	//	scanf("%f",&data[i]);
	//	average+=data[i];
	//}
	//printf("Average = %.2f\n",average);

//Ex 3 : Transpose of a user defined matrix
	//int R,C,iR,iC; 	//as row ,column ,iteration for rows and iteration for column
	//printf("Please enter rows and columns of the matrix:\t");fflush(stdin);fflush(stdout);
	//scanf("%d %d",&R,&C);
	//int matrix[R][C];
	//int Tmatrix[C][R];
	//printf("Please enter element of the matrix:\t\n");fflush(stdin);fflush(stdout);
    //
	//for(iR=0;iR<R;iR++){
	//	for(iC=0;iC<C;iC++){
	//		printf("Enter element a%d%d:",iR+1,iC+1);fflush(stdin);fflush(stdout);
	//		scanf("%d",&matrix[iR][iC]);
	//		Tmatrix[iC][iR] = matrix[iR][iC];
	//	}
	//}
	//printf("Entered matrix:\n");fflush(stdout);fflush(stdin);
	//for (iR=0;iR<R;iR++){
	//	for(iC=0;iC<C;iC++){
	//		printf("%d\t",matrix[iR][iC]);
	//	}
	//	printf("\n");
	//}
	//printf("Transposed matrix:\n");fflush(stdout);fflush(stdin);
	//	for (iC=0;iC<C;iC++){
	//		for(iR=0;iR<R;iR++){
	//			printf("%d\t",Tmatrix[iC][iR]);
	//		}
	//		printf("\n");
	//	}

//Ex 4: C program inserts element in an array
	//int arr[200],nElements ,i ,NewElementValue, NewElementLocation;
	//char choice = 'n';
	//printf("Please enter number of elements: ");fflush(stdout);fflush(stdin);
	//scanf("%d",&nElements);
	//for(i=0;i<nElements;i++){
	//	scanf("%d",&arr[i]);
	//}
	//printf("The element you entered: ");
	//for(i=0;i<nElements;i++){
	//		printf("%d ",arr[i]);
	//		if(i == nElements-1)
	//			printf("\n");
	//	}
	//do{
	//printf("Enter the new element value:");fflush(stdin);fflush(stdout);
	//scanf("%d",&NewElementValue);
	//printf("Enter the new element location:");fflush(stdin);fflush(stdout);
	//scanf("%d",&NewElementLocation);
	//nElements++;
	//for(i=nElements ; i >= NewElementLocation ; i--){
	//	arr[i]=arr[i-1];
	//}
	//arr[NewElementLocation-1]=NewElementValue;
	//for(i=0;i<nElements;i++){
	//			printf("%d ",arr[i]);
	//			if(i == nElements-1)
	//				printf("\n");
	//		}
	//printf("Do you want to insert another element?(y/n)");fflush(stdin);fflush(stdout);
	//scanf("%c",&choice);
	//}
	//while((choice == 'y' || choice == 'Y') && nElements < 199);

//Ex5 : c program to search for an element location in an array
	//int nElements ,i ,SearchElementV, SearchElementL;  //SearchElementValue, SearchElemntLocation
	//printf("Please enter number of elements: ");fflush(stdout);fflush(stdin);
	//scanf("%d",&nElements);
	//int arr[nElements];
	//for(i=0;i<nElements;i++){
	//	scanf("%d",&arr[i]);
	//}
	//printf("Enter the new element location:\n");fflush(stdin);fflush(stdout);
	//for(i=0;i<nElements;i++){
	//		printf("%d ",arr[i]);
	//		if(i == nElements-1)
	//			printf("\n");
	//	}
	//printf("Enter element value to be searched:");fflush(stdout);fflush(stdin);
	//scanf("%d",&SearchElementV);
	//for (i=0 ; i<nElements ; i++){
	//	if (arr[i] == SearchElementV){
	//		SearchElementL = i+1;
	//		break;
	//	}
	//}
	//if (i == nElements){
	//	printf("there are no element of this array with the value of %d\n",SearchElementV);
	//}else{
	//	printf("The found number at location %d\n",SearchElementL);
	//}

//Ex1 String : c program to found the frequency of characters in a string
	//char text[100], FrequentChar;
	//int FrequenceOfChar=0,i=0;
	//printf("Enter a string: ");fflush(stdout);fflush(stdin);
	//gets(text);
	//printf("Enter a character to find the frequency: ");fflush(stdout);fflush(stdin);
	//scanf("%c",&FrequentChar);
	//while(text[i]!='\0'){
	//	if(text[i] == FrequentChar){
	//		FrequenceOfChar++;
	//	}
	//	i++;
	//}
	//printf("Frequency of %c is %d",FrequentChar,FrequenceOfChar);

//Ex2 Strings : C program to find length of an array without strlen
	//char text[100];
	//int i=0;
	//printf("Enter a string: ");fflush(stdout);fflush(stdin);
	//gets(text);
	//while(text[i]!='\0'){
	//	i++;
	//}
	//printf("Length ofString %d",i);

//Ex3 Strings : C program to reverse string using only strlen() funtion
	char text[100];
	char RevText[100];
	int i=0,StringLenth;
	printf("Enter a string: ");fflush(stdout);fflush(stdin);
	gets(text);
	StringLenth = strlen(text);
	for (i=0 ; i<StringLenth ; i++){
		RevText[i]=text[StringLenth-i-1];
	}
	RevText[i]='\0';
	printf("Reverse string is: %s",RevText);
	return EXIT_SUCCESS;
}
