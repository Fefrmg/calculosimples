#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main()
 {
 	setlocale(LC_ALL, "Portuguese");
 	int num1, num2, resultado;
 	int op;
 	printf("Digite o primeiro n�mero:\n");
 	scanf("%d", &num1);
 	printf("Digite o segundo n�mero:\n");
 	scanf("%d", &num2);
 	printf("Escolha a opera��o: \n 1 - Soma \n 2 - Subtra��o \n 3 - Multiplica��o \n 4 - Divis�o\n");
 	scanf("%d", &op);
 	 	
 	switch(op){
 		case 1 : {
 			resultado = num1 + num2;
 			printf("A soma �: %d\n", resultado);
 			printf("\n");
 		break;
 	    }
 	    case 2 : {
 	    	resultado = num1 - num2;
 	    	printf("A subtra��o �: %d\n", resultado);
 	    	printf("\n");
 	    break;	
 	    }
 	    case 3 : {
 	    	resultado = num1 * num2;
 	    	printf("A multiplica��o e: %d\n", resultado);
 	    	printf("\n");
 	    break;	
 	    }
 	    case 4 : {
 	    	resultado = num1 / num2;
 	    	printf("A divis�o �: %d\n", resultado);
 	    	printf("\n");
 	    break;	
 	    }
 	    default: {
 	    	printf("Opera��o n�o identificada!\n");
 	    }
		
	}
	
	return 0;
}
