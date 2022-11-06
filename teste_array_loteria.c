#include <stdio.h>

int main()
{
	int arrayLoteria[] = {256,256,256,256,256,256,256,256,256,256};
	int b =0;
	int valor;
	int valorJogado;
	int pontuacao = 0;
	int erros = 0;
	int numerosAcertados[5];




	printf("**** Bem-vindo a Loteria ETEC ****\n\n");
	printf("_____Entre com numeros de 1 a 50_____\n\n\n\n");

	for(; b <= 9;){

		printf("Entre com o valor\n\n");
		scanf("%i",&valor);

		if(valor < 1 || valor > 50){

			printf("Numero invalido, tem que estar entre 1 e 50!!\n\n");
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
	if (b == 10)
	{
		system("clear");

		printf("JOGADOR, É SUA VEZ DE JOGAR!!\n\n");

		for (int i = 0; i <= 5; i++)
		{
			printf("Entre com seu numero\n");
			scanf("%i", &valorJogado);

			for (int v = 0; v <= 9; v++)
			{
				if (valorJogado == arrayLoteria[v])
				{
					printf("Numero Correto!!\n");
					pontuacao++;
					break;
				}
				else if(v == 9)
				{
					numerosAcertados[i] = valorJogado;
					printf("Numero errado!!\n");
					erros++;
				}
				
				
			}

			if (i == 5)
			{
				printf("Sua pontuação é: %i\n", pontuacao);
				printf("Os numeros corretos é\n");
				for (int r = 0; r <= 9 ; r++)
				{
					printf("%i-", arrayLoteria[r]);
				}
				printf("\n\n");
				printf("Seus numeros jogados são:\n");
				for (int t = 0; t <= 5 ; t++)
				{
					printf("%i", numerosAcertados[t]);
				}
				
			}
		}
		
		
		

		
	}
	
	
}



