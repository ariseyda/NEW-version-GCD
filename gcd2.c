#include<stdio.h>

//Write gcd2 function that returns the greatest common divisor of two integers. 
//Test the function in a program.

int gcd(int a,int b){
	
	int i=0,n,j;
	int max=a;
	int min=b;
	if(b>max){
		max=b;
		min=a;
	}
	
	int *p=malloc(30*sizeof(int));
	for(n=2;n<=max;n++){
		if(a%n==0 && b%n==0){
			p[i]=n;
			i++;
		}
	}
	p=realloc(p,(i)*sizeof(int));
	int big=p[0];
	for(j=1;j<i;j++){
		if(p[j]>big){
			big=p[j];
		}
	}
	printf("GCD:%d\n",big);
	
}
int main(){
	
	int k,l;
	printf("Enter two integers:");
	scanf("%d%d",&k,&l);
	
	gcd(k,l);
	
	return 0;
}
