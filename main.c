#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "myBank.h"
//FILE *out_file;
int main(){
char c;
int reading;
double amount;
int account_number;
//out_file  = fopen("amit.txt", "w"); // write only 
//int i,j;
//extern double arr[2][50];
//for(i=0;i<2;i++){
//	for(j=0;j<50;j++){
//		arr[i][j]=0;
//		}
//}
while(1){		
printf("\nPlease choose a transaction type:\n O-Open Account\n B-Balance Inquiry\n D-Deposit\n W-Withdrawal\n C-Close Account\n I-Interest\n P-Print\n E-Exit\n");
//fprintf(out_file,"\nPlease choose a transaction type:\n O-Open Account\n B-Balance Inquiry\n D-Deposit\n W-Withdrawal\n C-Close Account\n I-Interest\n P-Print\n E-Exit\n");
scanf("%c",&c);
if(c!='O'&&c!='B'&&c!='D'&&c!='W'&&c!='C'&&c!='I'&&c!='P'&&c!='E'){
	printf("Invalid transaction type\n");
	//fprintf(out_file, "Invalid transaction type\n");
	}
else if(c=='O'){
	printf("Please enter amount for deposit: ");
	//fprintf(out_file, "Please enter amount for deposit: ");
	reading = scanf("%lf",&amount);
	if(reading==0){
		printf("Failed to read the amount\n");
		//fprintf(out_file, "Failed to read the amount\n");
		continue;
		}
	if(amount<0){
		printf("Invalid amount\n");
		//fprintf(out_file, "Invalid amount\n");
		continue;
		}			
	O(amount);
	}
else if(c=='B'){
	printf("Please enter account number: ");
	//fprintf(out_file, "Please enter account number: ");
	reading = scanf("%d",&account_number);
	if(reading==0){
		printf("Failed to read the account number\n");
		//fprintf(out_file, "Failed to read the account number\n");
		continue;
		}
	if(account_number<901||account_number>950){
		printf("Invalid account number\n");
		//fprintf(out_file, "Invalid account number\n");
		continue;
		}
	else{
	B(account_number);
	}
}
else if(c=='D'){
	printf("Please enter account number: ");
	//fprintf(out_file, "Please enter account number: ");
	reading = scanf("%d",&account_number);
	if(reading==0){
		printf("Failed to read the account number\n");
		//fprintf(out_file, "Failed to read the account number\n");
		continue;
		}
	if(account_number<901||account_number>950){
		printf("Invalid account number\n");
		//fprintf(out_file, "Invalid account number\n");
		continue;
		}
	printf("Please enter the amount to deposit: ");
	//fprintf(out_file, "Please enter amount for deposit: ");
	reading = scanf("%lf",&amount);
	if(reading==0){
		printf("Failed to read the amount\n");
		//fprintf(out_file, "Failed to read the amount\n");
		continue;
		}
	if(amount<0){
		printf("Invalid amount\n");
		//fprintf(out_file, "Invalid amount\n");
		continue;
		}
	D(account_number,amount);
}
else if(c=='W'){
	printf("Please enter account number: ");
	//fprintf(out_file, "Please enter account number: ");
	reading = scanf("%d",&account_number);
	if(reading==0){
		printf("Failed to read the account number\n");
		//fprintf(out_file, "Failed to read the account number\n");
		continue;
		}
	if(account_number<901||account_number>950){
		printf("Invalid account number\n");
		//fprintf(out_file, "Invalid account number\n");
		continue;
		}
	printf("Please enter the amount to withdraw: ");
	//fprintf(out_file, "Please enter the amount to withdraw: ");
	reading = scanf("%lf",&amount);
	if(reading==0){
		printf("Failed to read the amount\n");
		//fprintf(out_file, "Failed to read the amount\n");
		continue;
		}
	if(amount<0){
		printf("Invalid amount\n");
		//fprintf(out_file, "Invalid amount\n");
		continue;
		}
		else{
	W(account_number,amount);	
		}
}
else if(c=='C'){
	printf("Please enter account number: ");
	//fprintf(out_file, "Please enter account number: ");
	reading = scanf("%d",&account_number);
	if(reading==0){
		printf("Failed to read the account number\n");
		//fprintf(out_file, "Failed to read the account number\n");
		continue;
		}
	if(account_number<901||account_number>950){
		printf("Invalid account number\n");
		//fprintf(out_file, "nvalid account number\n");
		continue;
		}
		else{
	C(account_number);
		}
}
else if(c=='I'){
	printf("Please enter interest rate: ");
	//fprintf(out_file, "Please enter interest rate: ");
	reading = scanf("%lf",&amount);
	if(reading==0){
		printf("Failed to read the interest rate\n");
		//fprintf(out_file, "Failed to read the interest rate\n");
		continue;
		}
	if(amount<0){
		printf("Invalid interest rate");
		//fprintf(out_file, "Invalid interest rate");
		continue;
		}
		else{	
	I(amount);
		}
}
else if(c=='P'){
	P();
	}
else if(c=='E'){
	E();
	}
while(getchar()!='\n');	
}
//fclose(out_file);	
}				
	
	
	
	
	
	
		


