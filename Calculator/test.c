#include<stdio.h>
#include<string.h>
int add(int num1,int num2){
	int c=num1+num2
	printf("%d+%d=%d\n"num1,num,c);
}
int sub(int num1,int num2){
	int c=num1-num2
	printf("%d-%d=%d\n"num1,num2,c);
}
int mul(int num1,int num2){
	int c=num1*num2
	printf("%d*%d=%d\n"num1,num2,c);
}
int div(int num1,int num2){
	int c=num1/num2
	printf("%d/%d=%d\n",num1,num2,c);
}
int main(){
	int option,a,b;
	char gg[]="helloworld";
	printf("Giff me what u want to do with ur life %s \n",gg);	
	printf("1.Add\n2.Sub\n3.Mul\n4.Div\n");
	scanf("%d",&option);
	printf("Giff me 2 number :\n");
	scanf("%d %d",&a,&b);
	switch(option){
		case 1:add(a,b);
		case 2:sub(a,b);
		case 3:mul(a,b);
		case 4:div(a,b);
	}

	return 0;	`
}
