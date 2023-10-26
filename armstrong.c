#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int numDigits(int input);

int main(int argc , char* argv[]){

int n, count , number, remainder, sum=0, temp;

number=atoi(argv[1]);
temp = number;
n=numDigits(number);



for(number; count <15; ++number ){
	temp = number;
	remainder=number%10;
	count=n;
	while(temp != 0){
	
	remainder*=number%10;
	
	int arms =1;
	for(int i=0; i<n; ++i){
	arms*= remainder;
	}

	temp/=10;

	}

	sum+=remainder;
	temp = temp/10;

}

	if (sum == temp)
	printf("%d is Armstrong number.%d\n", temp);
	else
	printf("%d is not  Armstrong number.%d\n", temp);
	

return 0;
}

int numDigits(int input){
	int count=0;
	while (input>0){
		input=input/10;
		++count;
	}

	return count;
}
