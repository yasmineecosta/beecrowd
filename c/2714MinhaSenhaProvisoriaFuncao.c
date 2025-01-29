#include <stdio.h>
#include <string.h>
/*
Objetivo: gerar a senha provis�ria
Par�metros:
   ra: registro do aluno 
   senha: local para inserir a senha 
Retorno:
   1 - se a senha foi gerada com sucesso
   0 - caso contr�rio 
*/
int geraSenha(char ra[101], char senha[19]){
    int pos; //posi��o de inser��o do elemento da senha
    int j; //posi��o do caracter corrente no RA que est� em analise
	if (strlen(ra) != 20 || ra[0] != 'R' || ra[1] != 'A')
		return 0;

	j = 2;  //Pular os zeros
	while (ra[j] == '0') 
		j++;	
	if (ra[j]=='\0')//Se ap�s pular os zeros, encontramos o \0: RA apenas com zeros
		return 0;
	
	pos = 0;  //Tentar formar a senha provis�ria  		    
	while (ra[j]>='0' && ra[j]<='9'){
		senha[pos] = ra[j];
		pos++;
		j++;
	}
	senha[pos]='\0';	
	if (ra[j]!='\0')//Se ap�s tentar formar a senha, n�o chegamos ao final do RA: encontramos algum elemento n�o num�rico.
		return 0;
	
	return 1;
		
}
int main(){
    int n;
    char ra[101];
    int i;//controla os casos de testes
    char senha[19];

    scanf("%d", &n);
    for(i=0; i<n; i++){
		scanf("%s", ra);				
        if (geraSenha(ra,senha)!=0)
        	printf("%s\n", senha);
        else
			printf("INVALID DATA\n");
	}
    
	return 0;
}