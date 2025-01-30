#include <stdio.h>
#include <string.h>
/*
Objetivo: gerar a senha provisória
Parâmetros:
   ra: registro do aluno 
   senha: local para inserir a senha 
Retorno:
   1 - se a senha foi gerada com sucesso
   0 - caso contrário 
*/
int geraSenha(char ra[101], char senha[19]){
    int pos; //posição de inserção do elemento da senha
    int j; //posição do caracter corrente no RA que está em analise
	if (strlen(ra) != 20 || ra[0] != 'R' || ra[1] != 'A')
		return 0;

	j = 2;  //Pular os zeros
	while (ra[j] == '0') 
		j++;	
	if (ra[j]=='\0')//Se após pular os zeros, encontramos o \0: RA apenas com zeros
		return 0;
	
	pos = 0;  //Tentar formar a senha provisória  		    
	while (ra[j]>='0' && ra[j]<='9'){
		senha[pos] = ra[j];
		pos++;
		j++;
	}
	senha[pos]='\0';	
	if (ra[j]!='\0')//Se após tentar formar a senha, não chegamos ao final do RA: encontramos algum elemento não numérico.
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