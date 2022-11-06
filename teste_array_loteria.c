#include <stdio.h>

int main()
{
	int arrayLoteria[] = {256,256,256,256,256,256,256,256,256,256};
	int b =0;
	int valor;

	printf("**** Bem-vindo a Loteria ETEC ****\n\n");
	printf("_____Entre com numeros de 0 a 50_____\n\n\n\n");

	for(; b <= 9;){

		printf("Entre com o valor\n\n");
		scanf("%i",&valor);

		if(valor < 0 || valor > 50){

			printf("Numero invalido, tem que estar entre 0 e 50!!\n\n");
		} else{
			for(int a = 0; a <= 9; a++){
				if(valor == arrayLoteria[a]){
					arrayLoteria[a] = valor;
					printf("ATENÇÃO!! número repetido\n\n");
					a = 9;
				}else if(valor != arrayLoteria[a] && a == 9){
					arrayLoteria[b] = valor;
					b++;
					break;
				}
			}
			/*if(b == 10){
			for(int c = 0; c <= 9 ; c++){
			printf("VALORE DO ARRAY %i \n", arrayLoteria[c]);
			} */ 
		}

	}
}



