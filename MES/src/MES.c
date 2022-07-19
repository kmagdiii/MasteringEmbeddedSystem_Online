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
	return EXIT_SUCCESS;
	//Examples For implicit and Explicet Conversion
	//imlicit 
	int x = 0;
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

}
