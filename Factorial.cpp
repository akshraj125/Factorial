//Factorial

#include<stdio.h>
#include<conio.h>


int factorial(int);

int main(){
	int num_Ele;
	do{
		printf("ingresa el numero de elementos: ");
		scanf("%i",&num_Ele);
	}while(num_Ele<=0);
	printf("La suma de los elementos es: %i ",factorial(num_Ele));
	return 0;
}

int factorial(int n){
	if(n==1){
		return 1;
	}else{
		return n * factorial(n-1);
	}
}
