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

// ------------------------------- Section I Q.1 -------------------------------------------------------------------
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

//------------------------------------------------ Q.2 ------------------------------------------------------------

/*
int main(void){
	setvbuf(stdout,NULL,_IONBF,0);
	int a;
	printf("Enter a Number : ");
	scanf("%d",&a);
	a%2?printf("Number is ODD"):printf("Number is EVEN");
}
*/

// ------------------------------------------------- Q.3 ------------------------------------------------------------

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

// ----------------------------------------------- Q.4- ------------------------------------------------------------

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

// ----------------------------------------------- Q.5 ------------------------------------------------------------

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

// ------------------------------------------------- Q.6 -----------------------------------------------------------

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

// ------------------------------------------------------- Q.7 -----------------------------------------------------

/*
int main(void) {
	int yr;
	printf("Enter year : ");
	scanf("%d", &yr);
// Without using logical operators
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
// Using Logical operator
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
// Using Conditional operator
	if (yr % 4 ? 0 : yr % 100 ? 1 : (yr%400)==0)
		printf("\nYear %d is Leap year!", yr);
	else
		printf("\nYear %d is Not a Leap year!", yr);

}
*/

// ----------------------------------------------- Q.8 -------------------------------------------------------------

/*int main(void){
	int qty;
	printf("Enter Quantity : ");
	scanf("%d",&qty);
	qty>50?printf("\nPrice = %.2f",(qty*5)*.85):qty>30?printf("\nPrice = %.2f",(qty*5)*.90):printf("\nPrice = %d",(qty*5));
}*/

// ----------------------------------------------- Q.10 ---------------------------------------------------------------

/*
int main(void) {
	char c;
	printf("Enter a Character : ");
	scanf("%c", &c);
	printf("\n%d\n", c);
	if ((65 <= c && c <= 90) || (97 <= c && c <= 122)) {
		printf("\nALPHABET");
		if (65 <= c && c <= 90)
			printf("\nUPEERCASE");
		else if (97 <= c && c <= 122)
			printf("\nLOWERCASE");
	} else if (48 <= c && c <= 57)
		printf("\nDIGIT");
	else if (c == 32 || c == 9 || c == 13 || c == 10) {
		printf("SPACE");
	} else {
		printf("NOT LISTED ABOVE");
	}
}
*/

//------------------------------------------------Q.11 -------------------------------------------------------------

/*int main(void) {
	float x, y;
	printf("Enter Cartesian Co-ordinates : ");
	scanf("%f %f",&x,&y);
	if (x > 0 && y > 0) {
		printf("\n1st Quadrant");
	} else if (x < 0 && y > 0) {
		printf("\n2nd Quadrant");
	} else if (x < 0 && y < 0) {
		printf("\n3rd Quadrant");
	} else if (x > 0 & y < 0) {
		printf("\n4th Quadrant");
	} else if (x, y == 0) {
		printf("\nOrigin");
	} else if (x == 0 && y > 0) {
		printf("+ Y-Axis");
	} else if (x == 0 && y < 0) {
		printf("- Y-Axis");
	} else if (y == 0 && x > 0) {
		printf("+ X-Axis");
	} else if (y == 0 && x < 0) {
		printf("- X-Axis");
	}
}*/

//------------------------------------------- Secction II Q.2 --------------------------------------------------------------

/*
int main(void) {
	float a, b;
	int choice;
	printf("Select Operation by Entering the Numeber : \n");
	printf(
			"1. Addition(+) \n2. Substration(-) \n3. Multiplication(*) \n4. Division(/)\n Enter Choice : ");
	setvbuf(stdout, NULL, _IONBF, 0);
	scanf("%d", &choice);
	if (choice != 1 || choice != 2 || choice != 3 || choice != 4) {
		printf("Wrong Choice");
		return EXIT_SUCCESS;
	}
	printf("Enter two Numbers : ");
	scanf("%f %f", &a, &b);
	printf("\n");
	switch (choice) {
	case 1:
		printf("Addition : %f", a + b);
		break;
	case 2:
		printf("Substraction : %f", a - b);
		break;
	case 3:
		printf("Multiplication : %.2f", a * b);
		break;
	case 4:
		if (b == 0)
			printf("Error : Divisior should not be ZERO");
		else
			printf("Division : %f", a / b);
	}
}
*/

// ---------------------------------------------- Q.3 --------------------------------------------------

/*int main(void){
	setvbuf(stdout, NULL, _IONBF, 0);
	int emp_id,dept_no;
	char dsg_cd;
	void getdesignation(char);
	printf("Enter following information \n");
	printf("Designation Code : "); scanf("%c",&dsg_cd);
	printf("Employee ID : "); scanf("%d",&emp_id);
	printf("Department No : "); scanf("%d",&dept_no);
	switch (dept_no) {
	case 10 :
		printf("\nEmployee with employee id %d is working in \"Marketing\" department as ",emp_id);
		getdesignation(dsg_cd);
		break;
	case 20 :
			printf("\nEmployee with employee id %d is working in \"Management\" department as ",emp_id);
			getdesignation(dsg_cd);
			break;
	case 30 :
			printf("\nEmployee with employee id %d is working in \"Sales\" department as ",emp_id);
			getdesignation(dsg_cd);
			break;
	case 40 :
			printf("\nEmployee with employee id %d is working in \"Designing\" department as ",emp_id);
			getdesignation(dsg_cd);
	}
}
 void getdesignation(char c){
	 switch (c) {
	 case 'M' :
		 printf("\"Manager\"");
		 break;
	 case 'S' :
		 printf("\"Superwiser\"");
		 break;
	 case 's' :
	 	 printf("\"Security Officer\"");
	 	 break;
	 case 'C' :
		 printf("\"Clerk\"");
	 }
}*/

// ------------------------------------------------- Q.4 ------------------------------------------------------------------

// test
