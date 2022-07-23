#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main()
 {
 	setlocale(LC_ALL, "Portuguese");
 	int num1, num2, resultado;
 	int op;
 	printf("Digite o primeiro número:\n");
 	scanf("%d", &num1);
 	printf("Digite o segundo número:\n");
 	scanf("%d", &num2);
 	printf("Escolha a operação: \n 1 - Soma \n 2 - Subtração \n 3 - Multiplicação \n 4 - Divisão\n");
 	scanf("%d", &op);
 	 	
 	switch(op){
 		case 1 : {
 			resultado = num1 + num2;
 			printf("A soma é: %d\n", resultado);
 			printf("\n");
 		break;
 	    }
 	    case 2 : {
 	    	resultado = num1 - num2;
 	    	printf("A subtração é: %d\n", resultado);
 	    	printf("\n");
 	    break;	
 	    }
 	    case 3 : {
 	    	resultado = num1 * num2;
 	    	printf("A multiplicação e: %d\n", resultado);
 	    	printf("\n");
 	    break;	
 	    }
 	    case 4 : {
 	    	resultado = num1 / num2;
 	    	printf("A divisão é: %d\n", resultado);
 	    	printf("\n");
 	    break;	
 	    }
 	    default: {
 	    	printf("Operação não identificada!\n");
 	    }
		
	}
	
	return 0;
}
