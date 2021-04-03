#include<stdio.h>
#include<stdlib.h>

//Function Prototypes
float toYen(float);
float toEuro(float);

//main function
int main(void){

	float i = 1000;
	while (i <= 100000){
		printf("%s", "Dollar\t\tYen\t\tEuro\n");
		printf("%f\t%f\t%f\n", i, toYen(i), toEuro(i));
		i += 1000;
	}

	puts("");
	system("pause");
	return 0;
}

//Function Definition of toYen
float toYen(float dollars){
	return dollars*105;
}

//Function Defintion of toEuro
float toEuro(float dollars){
	return dollars*0.83;
}

