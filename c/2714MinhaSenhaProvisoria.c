#include <stdio.h>
#include <string.h>

int main(){
    int n;
    char ra[101];
    int i;//controla os casos de testes
    char senha[19];
    int pos; //posição de inserção do elemento da senha
    int j; //posição do caracter corrente no RA
    scanf("%d", &n);
    for(i=0; i<n; i++){//Para cada RA
		scanf("%s", ra); 
				         
		if (strlen(ra) != 20 || ra[0] != 'R' || ra[1] != 'A')
			printf("INVALID DATA\n");
		else{
			j = 2; 
			while (ra[j] == '0')
				j++;
			if (ra[j]=='\0') 
				printf("INVALID DATA\n");
			else{			
				pos = 0;  		    
				while (ra[j]>='0' && ra[j]<='9'){
					senha[pos] = ra[j];
					pos++;
					j++;
				}
				senha[pos]='\0';
				if (ra[j]!='\0' )
					printf("INVALID DATA\n");
				else
				    printf("%s\n", senha);
			}
		}
	}
    
	return 0;
}