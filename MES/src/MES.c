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
// initialization and declaration
	//float arr[10];		//declaration on the array
	int i,j;
	//arr[0]=11.2;
 	//arr[2] = 22.3;		//only element 0 and element 2 are known others are garbage value
    //
	//char ArrCh[10] = {'1','2'};		//element 0 and 1 are set wit '1' and '2' others are initialized with 0 '\0'
 	//for ( i=0 ; i<10 ; i++){
	//	printf ("ArrCh[%d] = %c \n",i,ArrCh[i]);
	//}
	//printf("%p \n",arr); // the name of the array is a pinter to the first element to the array
	////printf("%f \n ",arr);			//warning and wrong value as %p expected to be printed as pointer
	//printf("%.2f \n",*arr);			//11.20 as the first element of the array
	//printf("%.2f \n",arr[0]);		//11.20 as the first element of the array
	//printf("%.2f \n",*(arr+2));		//22.30 as the third element of the array
	//printf("%.2f \n",arr[2 ]);		//22.30 as the third element of the array


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
	//int Matrix[3][3];
	//int transposeMatric[3][3];
	//for (i=0 ; i<3 ; i++){
	//	for (j=0 ; j<3 ; j++){
	//		printf("Enter item (%d,%d) = ",i+1,j+1 );
	//		fflush(stdin);fflush(stdout);
	//		scanf("%d",&Matrix[i][j]);
	//		transposeMatric[j][i] = Matrix[i][j];
	//	}
	//}
	//printf("original Matrix : \n");
	//for (i=0 ; i<3 ; i++){
	//		for (j=0 ; j<3 ; j++ ){
	//			printf("%d \t\t",Matrix[i][j]);
	//		}
	//		printf("\n");
	//}
	//printf("transpose Matrix : \n");
	//for (i=0 ; i<3 ; i++){
	//		for (j=0 ; j<3 ; j++ ){
	//			printf("%d \t\t",transposeMatric[i][j]);
	//			}
	//		printf("\n");
	//}

//initialization and declaration of string
	//char text[] = "Hello";
	//printf("size of \"Hello\" string is %d \n",sizeof(text));		//6 because there are 5 character and null terminator '\0' 0b00000000
	//char text2 [] = {"Welcome"};									//declaration and initialization could be written like this
	//char text3 [50] ;												// this is declaration only
	//char text4 [10] = "hi";										//initialization all not mention bytes by '\0'
 	//char text5[20] = {'a','b','c'};									//all initialization would set not mentioned bytes be '\0'
	//char text6 [20];
	//strcpy(text6,"New text");										//text6[] = {'a','b','c'}; statement is not valid

//Printing string
	//char text8[] ={'h','i','\0','e','a','c','h','\0','w','o','r','d','\0'};		//hi\0each\0word
	//printf("%s\n",text8);											//would print till next null terminator "hi"
	//printf("%s\n",&text8[3]);
	//printf("%s\n",&text8[8]);
    //
//Reading input string from the user
	//char Name[100];
	//printf("Please enter your first name :"); fflush(stdin);fflush(stdout);
	//scanf("%s",Name);												// would only scan until the first white space
	//printf("Your first name is : %s \n",Name);
	//printf("Please enter your full name :"); fflush(stdin);fflush(stdout);
	//gets(Name);											// would scan until the first new line
	//printf("Your full name is : %s \n",Name);

// Array of strings
	//char Names[10][50] = {"Ahmed Hesham", "Kirolos Magdy", "Abdul aziz"};
	//for(i=0;i<3;i++){
	//	printf("%s \n",Names[i]);
	//}

//Scan array of strings from the user way
	//char Names[4][50];
	//for (i=0;i<4;i++){
	//	printf("Please enter the %d name :",i+1);fflush(stdin);fflush(stdout);
	//	gets(Names[i]);
	//}
	//for(i=0;i<4;i++){
	//	printf("%s \n",Names[i]);
	//}

//copy text without strcpy function
	//char text1[30];
	//char text2[30] = {"This is the text"};
	//i=0;
	//while ( (text2[i] != '\0') && i< (sizeof(text1)-1) ){
	//	text1[i] = text2[i];
	//	i++;
	//}
	//text1[i] = 0;			//adding null terminator manually
	//printf("%s \n",text1);

//adding string to string
	//char text1[20]="Alla";
	//char text2[20]="Mohamed";
	//strcat (text1," ");
	//strcat (text1,text2);
	//printf("%s\n",text1);fflush(stdin);fflush(stdout);

// string upper case and lower case
	//char Text1 [20] = "abcd"
	//strupr(Text1);
	//printf("%s\n",Text1);
	//strlwr(Text1);
	//printf("%s\n",Text1);


// Finding the string lenth
	//char text [100]="Kirolos Magdy Rashid";
	//printf("The size of the string is %d\r\n",strlen(text));		//returns the number of chars till the null terminator
	//printf("The size off the array is %d\r\n",sizeof(text));		// returns the size of the array in memory

//	Comparing two strings with  stricmp
	//char name[100];
	//char namelist [4][100]={"Alaa","Mahmoud","kirolos","Osama"};
	//printf("Please enter your first name:\r");fflush(stdin);fflush(stdout);
	//gets(name);
    //
	//for (i=0;i<4;i++){
	//	if (stricmp(name,namelist[i]) == 0){
	//		printf("congratulation you name is on the list\n");
	//			break;
	//	}
	//}
	//if (stricmp(name,namelist[i-1]) != 0){
	//	printf("Sorry your name is not listed\n");
	//}

// Comparing two strings with strcmp case sensitive
	//char Password[100];
	//char Passwordlist [4][100]={"Alaa22","Mahmoud55","kirolos44","Osama33"};
	//printf("Please enter your first name:\r");fflush(stdin);fflush(stdout);
	//gets(Password);
    //
	//for (i=0;i<4;i++){
	//	if (strcmp(Password,Passwordlist[i]) == 0){
	//		printf("congratulation you password is valid\n");
	//			break;
	//	}
	//}
	//if (strcmp(Password,Passwordlist[i-1]) != 0){
	//	printf("Sorry your password is not valid\n");
	//}

// converting string to integer with stoi
	//char text1[10]="256";
	//char text2[10]="33V";
	//i=atoi(text1);
	//j=atoi(text2);
	//printf("%d\n",i);
	//printf("%d\n",j);

// converting to real number using atof
	char text1[10]="11.23";
	char text2[20]="11.555";				//deosn't convert scientific notation like "449e-10"
	char text3[10]="55.8mA";
	float f1,f2,f3= {0,0,0};
	f1 = atof(text1);
	f2 = atof(text2);
	f3 = atof(text3);
	printf("%.2f\n",f1);
	printf("%.4f\n",f2);
	printf("%.2f\n",f3);

	return EXIT_SUCCESS;
}
