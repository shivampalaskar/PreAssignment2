/*
 ============================================================================
 Name        : PreAssingnment2.c
 Author      : Shivam Palaskar
 Version     :
 Copyright   : Open Source
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

/*int main(void) {
	int a,b;
	printf("Enter two numbers : ");
	scanf("%d %d",&a,&b);
	if(b!=0){
		printf("\n Division of two number is : %.2f",(float)a/b);
	}else {
		printf("\nError : Divisor should not be 0");
	}
	return EXIT_SUCCESS;
}*/

/*
int main(void){
	setvbuf(stdout,NULL,_IONBF,0);
	int a;
	printf("Enter a Number : ");
	scanf("%d",&a);
	a%2?printf("Number is ODD"):printf("Number is EVEN");
}
*/

/*
int main(void){
	setvbuf(stdout,NULL,_IONBF,0);
	int a;
	printf("Enter a Number : ");
	scanf("%d",&a);
	if(a==0){
		printf("Number is 0");
	}else {
		a>0?printf("Number is Positive"):printf("Number is Negative");
	}
}
*/

/*
int main(void){
	setvbuf(stdout,NULL,_IONBF,0);
	int a,b;
	printf("Enter two Number : ");
	scanf("%d %d",&a,&b);
	if(a>b){
		printf("Max No. is : %d",a);
	}else{
		printf("Max No. is : %d\n",b);
	}
	a>b?printf("Max No. is : %d",a):printf("Max No. is : %d",b);
}
*/

/*int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	int a, b, c;
	printf("Enter three Number : ");
	scanf("%d %d %d", &a, &b, &c);
	if (a > b) {
		if (a > c) {
			printf("Max No. is : %d", a);
		} else {
			printf("Max No. is : %d", c);
		}
	} else {
		if (b > c) {
			printf("Max No. is : %d", b);
		} else {
			printf("Max No. is : %d", c);
		}
	}
	printf("\n");
	int i, j;
	a > b ? (i = a > c) : (j = b > c);
	if (i == 1) {
		printf("Max No. is : %d", a);
	} else {
		if (j == 1)
			printf("Max No. is : %d", b);
		else
			printf("Max No. is : %d", c);
	}
}*/

/*int main(void){
	int a,b,len=0,check=1; // check is default 1 because 1 is palindrome number
	printf("Enter a number : ");
	scanf("%d",&a);
	b=a;
	while(b%10!=0 || b!=0){
		len++;
		b/=10;
	}
	printf("\nlen=%d\n",len); //right
	int array[len],i=len-1;
	b=a;
	while(b%10!=0 || b!=0){
		array[i]=b%10;
		b/=10;
		i--;
	}
	for(int i=0;i<len;i++){
		printf("%d",array[i]);
	}
	for(i=0;i<len/2;i++){ // when number is 1 then len=1 hence len/2=0 and condition fails so that we put check=1 by default
		if(array[i]==array[(len-1)-i])
			check=1;
		else
			check=0;
	}
	if(check==1)
		printf("\nEntered number is Palindrome");
	else
		printf("\nEntered number is Not a Palindrome");
}*/

/*
int main(void) {
	int yr;
	printf("Enter year : ");
	scanf("%d", &yr);
 Without using logical operators
	if (yr % 4 == 0) {
		if (yr % 100 == 0) {
			if (yr % 400 == 0)
				printf("\nYear %d is Leap year!", yr);
			else
				printf("\nYear %d is Not a Leap year!", yr);
		} else
			printf("\nYear %d is Leap year!", yr);
	} else
		printf("\nYear %d is Not a Leap year!", yr);
 Using Logical operator
	if (yr % 100 == 0) {
		if (yr % 100 == 0 && yr % 400 == 0) {
			printf("\nYear %d is Leap year!", yr);
		} else
			printf("\nYear %d is Not a Leap year!", yr);
	} else {
		if (yr % 4 == 0)
			printf("\nYear %d is Leap year!", yr);
		else
			printf("\nYear %d is Not a Leap year!", yr);
	}
Using Conditional operator
	if (yr % 4 ? 0 : yr % 100 ? 1 : (yr%400)==0)
		printf("\nYear %d is Leap year!", yr);
	else
		printf("\nYear %d is Not a Leap year!", yr);

}
*/

int main(void){
	int qty;
	printf("Enter Quantity : ");
	scanf("%d",&qty);
	qty>50?printf("\nPrice = %.2f",(qty*5)*.85):qty>30?printf("\nPrice = %.2f",(qty*5)*.90):printf("\nPrice = %d",(qty*5));
}

