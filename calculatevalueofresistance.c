#include <stdio.h>
#include <math.h>

// THÝS PROGRAM CALCULATE VALUE OF RESÝSTANCE

int main(void){
	int first_band,second_band,third_band,tolarance,a;
	
	printf("	Hello, This is a calculating resistance program.\n");
	printf("	\tFirstly,we will see value of colors. There is four color band in resistance.\n	If you can't know these things,does not matter.\n");
	printf("	\tI will help you for caculating value of resistance, just enter color codes... \n");
	color_codes();
	printf("\nValue of resistance : %d ohm",calculate_resistance());
	while(1){
		puts("\n\nDo you want to calculate another value? yes=1 or no=0");
		scanf("%d",&a);
		if(a==1){
			color_codes();
			printf("\n\nValue of resistance : %d ohm",calculate_resistance());
		}
		else{
			break;
		}
	}
	
	return 0;
}



void color_codes(){    // FUNCTÝON PRÝNT VALUE OF COLOURS
	printf(" \t------  '0' for black  ------ \n ");
	printf(" \t------  '1' for brown  ------ \n");
	printf(" \t------  '2' for red    ------ \n");
	printf(" \t------  '3' for orange ------ \n ");
	printf(" \t------  '4' for yellow ------ \n");
	printf(" \t------  '5' for green  ------ \n");
	printf(" \t------  '6' for blue   ------ \n");
	printf(" \t------  '7' for purple ------ \n ");
	printf(" \t------  '8' for grey   ------ \n");
	printf(" \t------  '9' for white  ------ \n ");
	printf(" \t------  '11' for gold      ~~~~~~ tolarance \n ");
	printf(" \t------  '12' for silver    ~~~~~~ tolarance \n ");
	printf(" \t------  '13' for colorless ~~~~~~ tolarance \n ");
	
}

int calculate_resistance(){  // THE FUNCTION CALCULATES THE RESISTANCE VALUE BY TAKING THE VALUES OF THE COLORS
	int a,b,c,d,result;
	puts("Firstly, enter first color band....");
	scanf("%d",&a);
	while(!(a>=0 && a <= 9)){
		puts("Please enter valid value...");
		scanf("%d",&a);
	}
	puts("Please Enter second color band.... ");
	scanf("%d",&b);
	while(!(b>=0 && b <= 9)){
		puts("Please enter valid value...");
		scanf("%d",&b);
	}
	puts("Please Enter third color band.... ");
	scanf("%d",&c);
	while(!(c>=0 && c<= 9)){
		puts("Please enter valid value...");
		scanf("%d",&c);
	}
	puts("Please Enter fourth color band.... ");
	scanf("%d",&d);
	while(!(d>0 && d<= 12) || d==3 || d==4 || d==9 ){
		puts("Please enter valid value...");
		scanf("%d",&d);
	}
	result= (a*10+b) * pow(10,c);
	return result;
}


