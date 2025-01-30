#include <stdio.h>
#define TAM 52 
//quantidade m�xima de letras e espa�os mais 2(\0 e \n do fgets)
int main(){
	int n;
	int i; // controlar os casos de testes
	char linha[TAM];
	char mensagem[TAM]; //vai usar muito menos, mas deixei assim
	int posL; //marca posicao corrente dentro da linha
    int posM; //marca posicao para inserir letra na mensagem oculta 
	
	//1. Obter quantidade de casos de testes (n)
	scanf("%d", &n);
	
	scanf("%*c");
	
	//2. Para cada caso de teste:
	for (i=0; i<n; i++){
		//a) ler linha
		fgets(linha, TAM, stdin);		
		
		//b) processar linha para obter mensagem oculta
		posL = 0;
		posM = 0;
		// Se a linha come�a por letra, inserir essa letra na mensagem oculta  
		if (linha[posL] >='a' && linha[posL]<='z'){
			mensagem[posM] = linha[posL];
			posL++;
			posM++;
		}
		
		// Para cada elemento restante da linha(linha termina com o \n do fgets)	
		while (linha[posL] != '\n'){
			/*se o elemento n�o � espa�o, mas o anterior � espa�o 
			(temos a letra inicial de uma palavra):*/
			if (linha[posL] != ' ' && linha[posL-1] == ' '){				
			//acrescentar esse elemento � mensagem oculta, depois dos inseridos
			    mensagem[posM] = linha[posL]; 
			    posM++;	
			}	
			posL++;		
		}
		
		//c) imprimir mensagem oculta
		mensagem[posM] = '\0';
		printf("%s\n", mensagem);		
	}
		
	return 0;
}