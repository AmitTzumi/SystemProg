#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "myBank.h"
//extern FILE *out_file; 
static double arr[2][50];
void O(double amount){
int j;
for(j=0;j<50;j++){
	if(arr[0][j]==0){
	arr[1][j]=amount;
	arr[0][j]=1;
	printf("New account number is: %d \n",j+901);
	//fprintf(out_file, "New account number is: %d \n",j+901);
	break;
	}		
}
if(j==50){
	printf("There is no option to open more than 50 accounts");
	//fprintf(out_file, "There is no option to open more than 50 accounts");
	}
}

void B(int account_number){
if(arr[0][account_number-901]!=1){
	printf("This account is closed\n");
	//fprintf(out_file, "This account is closed\n");
	}
	else{
		printf("The balance of account number %d is: %.2lf\n", account_number,arr[1][account_number-901]);
		//fprintf(out_file, "The balance of account number %d is: %.2lf\n", account_number,arr[1][account_number-901]);
		}
	}

void D(int account_number, double deposit){
if(arr[0][account_number-901]!=1){
	printf("The account is closed\n");
	//fprintf(out_file, "The account is closed\n");
	}
	else if(deposit<0){
		printf("Cannot deposit a negative amount\n");
		//fprintf(out_file, "Cannot deposit a negative amount\n");
		}
		else{
			arr[1][account_number-901]=arr[1][account_number-901]+deposit;
			printf("The new balance is: %.2lf\n", arr[1][account_number-901]);
			//fprintf(out_file, "The new balance is: %.2lf\n", arr[1][account_number-901]);
		}
	}

void W(int account_number, double withdrawal){
if(arr[0][account_number-901]!=1){
	printf("The account is closed\n");
	//fprintf(out_file, "The account is closed\n");
	}
	else if(arr[1][account_number-901]< withdrawal){
		printf("Cannot withdraw more than the balance\n");
		//fprintf(out_file, "Cannot withdraw more than the balance\n");
		}
		else{
			arr[1][account_number-901]=arr[1][account_number-901]-withdrawal;
			printf("The new balance is: %.2lf\n", arr[1][account_number-901]);
			//fprintf(out_file, "The new balance is: %.2lf\n", arr[1][account_number-901]);
		   	}
		}				

void C(int account_number){
if(arr[0][account_number-901]!=1){
	printf("The account is already closed\n");
	//fprintf(out_file, "The account is already closed\n");
	}
	else{
	arr[0][account_number-901]=0;
	printf("Close account number: %d\n",account_number);
	//fprintf(out_file, "Close account number: %d\n",account_number);
	}
}


void I(double interest_rate){
int j;
for(j=0;j<50;j++){
	if(arr[0][j]==1){
		arr[1][j]=(arr[1][j])*(1+(interest_rate/100));
		}
	}
}

void P(){
int j;
for(j=0;j<50;j++){
	if(arr[0][j]==1){
		printf("The balance of account number %d is: %.2lf\n",j+901,arr[1][j]);
		//fprintf(out_file, "The balance of account number %d is: %.2lf\n",j+901,arr[1][j]);
		}
	}
}

void E(){
int j;
for(j=0;j<50;j++){
	arr[0][j]=0;
	arr[1][j]=0;
	}
exit(0);	
}

	
	

	
