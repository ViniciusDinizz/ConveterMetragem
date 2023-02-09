#include <stdio.h>

int main (){
	float metross = 0;
	
do {
	
	printf("\nDigite a metragem ou 0 pra sair: ");
	scanf("%f", &metross);
	system ("Cls || Clear");
if (metross != 0){

	printf("\n%.2f metros tem %.2f decimetros.", metross, metross * 10);
	printf("\n%.2f metros tem %.2f centimetros.", metross, metross * 100);
	printf("\n%.2f metros tem %.2f milimetros.", metross, metross * 1000);
	
}	
}while (metross != 0);

return 0;

}
