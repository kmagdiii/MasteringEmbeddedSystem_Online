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
	//Creating hello project to get started with the main branch
	printf("Hello  ");

	//Examples For implicit and Explicet Conversion
	//imlicit 
	int x = 0;
	int i,j = 0;
	float a = 0;
	char c = 0b0000000 ;
	int n = 4;
	float result;

	x = 33/55;
	a = 33/55;
	printf("x= %d\t a= %.4f\n",x,a); // x= 0	 a= 0.0000

	x = 33.0/55;
	a = 33.0/55;
	printf("x= %d\t a= %.4f\n",x,a); // x= 0	 a= 0.6000

	//explicit
	a = 13.1515;
	x = (int)a;
	printf("x= %d\t a= %.4f\n",x,a); // x= 13	 a= 13.1515

	//bit wise operations 
	//setting a specific bit
	c |= (1<<n); //setting the (n+1)th bit
	printf("c = 0X%x\n",c);

	//clearing a specific bit 
	c=0xff;
	n=3;
	c &= ~(1<<n);  //clearing the (n+1)th bit 
	printf("c = 0X%x\n",c);

	//Toggoling a specific bit
	c=0xff;
	n=3;
	c ^= (1<<n);
	printf("c=0X%x\t",c); //toggle the (n+1)th bit 
	c ^= (1<<n);
	printf("c=0X%x\n",c);

	//prefix and postfix
	//post example
	x=1;
	if (x++==1){        // the if condition is true the addition is done after the compareson
		printf("x = %d (Postfix values)\n",x);

	}
	//prefix example
	x=1;
	if (++x==2){        // the if condition is true the addition is done before the compareson
		printf("x = %d (prefix values)\n",x);

	}
	x=1;
	x++;
	++x; //no diffrence between postfix and prefix if done sepertly  
	//postfix example 
	a=10;
	x=1;
	result = a+x++;
	printf("a=%.3f\tx=%d\t\t(a+x++)=%.3f (Postfix)\n",a,x,result);  
	a=10;
	x=1;
	result = a+++x;
	printf("a=%.3f\tx=%d\t\t(a+++x)=%.3f (Postfix)\n",a,x,result);
	//prefix example
	a=10;
	x=1;
	result = ++a+x;
	printf("a=%.3f\tx=%d\t\t(++a+x)=%.3f (Prefix)\n",a,x,result);

	//conditions
	//false condtion is zero only +ve and -ve are true 
	//examples
	if (-5)         //true
		printf("-5 is true condition\n");
	if(0)           //false
		printf("Wont print as zero is false conditon\n");

	//more examples for condtions 
	x=5;
	if (x == 5)
		printf("condition equal: x == 5--> %d\n",x == 5);
	x=-5;
	if (x < 0)
		printf("condition less than : x < 0--> %d\n",x < 0);
	x=11;
	a =22;
	//complex conditions
	if (x > 5 && a > 5)
		printf("condition greater than: x  > 5 && a > 5--> %d\n",x > 5 && a > 5);
	x=-5;
	a= 22;
	if (x <= -5 && a > 11 )
		printf("condition less than and greater than : x <= -5 && a > 11--> %d\n",x <= -5 && a > 11);
	x=-5;
	a= 22;
	if (x <= -5 && a++ > 11 )
		printf("condition less than and greater than : x <= -5 && a > 11--> %d\n",x <= -5 && a > 11);



	//some examples for scanf
	//scan one value
	/*
	printf("Please enter integer value :\n");
	scanf("%d",&x);
	printf("The value you enter is :%d",x);
	 */
	//scan more than one value with white spaces between them
	/*
    printf("Please enter an integer, a real value and a character :\n");
    scanf("%d %f %c",&x,&a,&c);
	printf("Integer:%d\tFloat:%.4f\tCharacter:%c\n",x,a,c);
	 */
	// inline condition
	x=20;
	x>15? printf("x>15\n") : printf("x<15\n");
	//useless condition
	x=1;
	if ( 1 ||++x == 1) // one or-ed with any value is 1 so the condition is useless
	{
		printf("this condition alwayes true and useless\n");
		printf("The value of x: %d",x);
	}
	//switch case examples
	//switch case is usually faster then if else as it uses jump table
	x=2;
	switch(x)
	{
	case 1:     //case condition must be constant
	{
		printf("This is case 1\n");
	}
	break;
	case 2:
	{
		printf("This is case 2\n");
	}
	break;
	default:
		break;

	}
	//another switch case example
	c = 'w';
	switch(c)
	{
	case 'a':
	case 'A':
	{
		printf("This is case a or case A\n");
	}
	break;
	case 'b':
	case 'B':
	{
		printf("This is case b or case B\n");
	}
	break;
	default:
		printf("The default case could be one line without scope or multiple lines within scope \n");
		break;

	}

	//examples for for loop
	/*
		for (intialization ; condition ; action ; action ; ..){

		}
	 */
	for (i=0;i<10;i++){
		printf("Hello %d\n",i);
	}
	//for loop with two actions and two intializations
	for (i=0,x=10;i<10;i++,x--){
		printf("Hello %d\t%d\n",i,x);
	}
	for (i=10 ; i>0 ; i--){ //substacting 1 is faster than than adding one
		printf("Hello %d\n",i);
	}

	//example for goto
	c='s';
	if(c == 's')
		goto skipp;
	printf("This is a skipped command if c = s\n");
	skipp:
	printf("This is printed after the skipped range\n");

	//example for while & break & continue
	//while loop
	x=18;
	printf("while loop example\n");
	while (x <= 20){
		printf("x = %d\n",x++);
	}
	//break forces out of the loop if the condition true
	x=18;
	printf("Break from while loop example\n");
	while (x <= 20){
		if(x == 20)
			break;
		printf("x = %d\n",x++);
	}
	//do while loop example
	//excutes the scope at leaste one
	x=0;
	do{
		printf("Do while loop example \n");
		break;
	}while(1);
	//continue keyword example
	x=0;
	while (x<5){
		x++;
		if(x==5)
			continue;
		printf("%d - this will print 1 -> 4 only\n",x);
	}

	//nested for loop example
	//  1	2	3
	//	1	2	3
	//	1	2	3


	for (i=0,j=0; i<3 ; i++){
		for(j=0 ; j<3 ; j++){
			printf("%d\t",j+1);
		}
		printf("\n");
	}


	return EXIT_SUCCESS;
}
