#include <stdio.h>
#define TAM 52 
//quantidade máxima de letras e espaços mais 2(\0 e o \n do fgets)
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
		while(1){//REPETIR: (até formar mensagem oculta)
			
		   /*i. pular cada espaço antes da palavra ou do fim da linha
               (assim achar uma letra ou fim da linha)  */
		   while(linha[posL]==' ') 
		   	   posL++;
		   
		   /*ii. se achou letra: inserir essa letra na mensagem oculta 
		         depois das já inseridas*/   
           if (linha[posL] != '\n'){
			   mensagem[posM] = linha[posL];
			   posM++;
			   posL++;
		   }else //iii. caso contrário: SAIR, pois mensagem oculta formada
		   	   break; 
		       
		   /*iv. pular cada letra da "palavra" 
		        (assim achar um espaço ou fim de linha) */
		   while(linha[posL]>='a' && linha[posL]<='z') 
		   	   posL++;	
		
		   /*v.se achou fim de linha ('\n' do fgets):
		           SAIR, pois mensagem oculta formada*/ 	   
           if (linha[posL] == '\n')
		   	   break;			   	  	
		}
		
		//c) imprimir mensagem oculta
		mensagem[posM] = '\0';
		printf("%s\n", mensagem);		
	}
		
	return 0;
}