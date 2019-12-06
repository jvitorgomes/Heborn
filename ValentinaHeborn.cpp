#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <stdlib.h>
#define linha 2
#define coluna 5

int main(){
	setlocale(LC_ALL, "portuguese");
		float custo, proquan, provenda, reserva, reservada = 0, vendida = 0, venop, veno, promopro, parcepro = 1, meslu;
		int compra, produto;
		char disponi = 'D', tab[linha][coluna];
		char ana = 0, valentina = 0, laura = 0, eduarda = 0, melissa = 0;
		printf("Informe o preço de custo do produto: \n");
		scanf("%i", &custo);
		printf("Informe a quantidade do produto disponivel: \n");
		scanf("%i", &proquan);
		printf("Informe o preço de venda: \n");
		scanf("%i", &provenda);
		printf("Informe o preço de reserva: \n");
		scanf("%i", &reserva);
		system("cls");
		
float vaservada = 0, vavendida = 0, anaservada = 0, anavendida = 0, lauraservada = 0, lauravendida = 0,  eduservada = 0, eduvendida = 0, meservada = 0, mevendida = 0;	
printf("+----------+---+---++\n");
printf("|Produto   | R | V |\n");
printf("+----------+---+---++\n");
printf("|Valentina | %f | %f |\n", &vaservada, &vavendida);
printf("+----------+---+---++\n");
printf("|Ana       | %f | %f |\n", &anaservada, &anavendida);
printf("+----------+---+---++\n");
printf("|Laura     | %f | %f |\n", &lauraservada, &lauravendida);
printf("+----------+---+---++\n");
printf("|Eduarda   | %f | %f |\n", &eduservada, &eduvendida);
printf("+----------+---+---++\n");
printf("|Melissa   | %f | %f |\n", &meservada, &mevendida);
printf("+----------+---+---++\n");
      		


          while(venop == 2){
          	printf("Encerrar a venda\n\n -> (1)sim\n -> (2)nao\n escolha: ");
			scanf("%i", &venop);
			if(venop != 2){
				break;
				system("cls");
			}
			system("cls");
          	printf("Escolha sua opcao de venda: \n\n -> comun(1) %i!\n -> reserva(2) %i! \n -> parcelado(3) %i! \n -> promoção(4) %i! \n escolha: ", provenda, reserva, parcepro, promopro);
          	scanf("%i", &compra);
          	system("cls");
          	switch(compra){
/*
	| 	Comun	|
*/
          		case 1:
printf("+----------+---+---++\n");
printf("|Produto   | R | V |\n");
printf("+----------+---+---++\n");
printf("|Valentina | %f | %f |\n", &vaservada, &vavendida);
printf("+----------+---+---++\n");
printf("|Ana       | %f | %f |\n", &anaservada, &anavendida);
printf("+----------+---+---++\n");
printf("|Laura     | %f | %f |\n", &lauraservada, &lauravendida);
printf("+----------+---+---++\n");
printf("|Eduarda   | %f | %f |\n", &eduservada, &eduvendida);
printf("+----------+---+---++\n");
printf("|Melissa   | %f | %f |\n", &meservada, &mevendida);
printf("+----------+---+---++\n");
      		
      		printf("Escolha o produto desejado:\n -> Valentina(1)\n -> Ana(2)\n -> Laura(3)\n -> Eduarda(4)\n -> Melissa(5)\n -> Cacelar(6)\n\n\Escolha:");
      		scanf("%i", produto);
          	switch(produto){
          		case 1:
          		int mini = 0;
          		printf("Confirmar venda?\n\tSim(1)\n\tNao(2)\n\n");
          		scanf("%i", &mini);
          		if(mini = 1){
          			vavendida ++;	
				  }
					system("cls");
					mini = 0;
				break;
          		case 2:
          		printf("Confirmar venda?\n\tSim(1)\n\tNao(2)\n\n");
          		scanf("%i", &mini);
          		if(mini = 1){
          			anavendida ++;	
				  }
					system("cls");
					mini = 0;
				break;
          		case 3:
          		printf("Confirmar venda?\n\tSim(1)\n\tNao(2)\n\n");
          		scanf("%i", &mini);
          		if(mini = 1){
          			lauravendida ++;	
				  }
					system("cls");
					mini = 0;
				break;
          		case 4:
          		printf("Confirmar venda?\n\tSim(1)\n\tNao(2)\n\n");
          		scanf("%i", &mini);
          		if(mini = 1){
          			eduvendida ++;	
				  }
					system("cls");
					mini = 0;
				break;
          		case 5:
          		printf("Confirmar venda?\n\tSim(1)\n\tNao(2)\n\n");
          		scanf("%i", &mini);
          		if(mini = 1){
          			mevendida ++;	
				  }
					system("cls");
					mini = 0;
				break;
				case 6:
					printf("Venda cancelada!");
					system("cls");
					break;
					
			  }
          	
printf("+----------+---+---++\n");
printf("|Produto   | R | V |\n");
printf("+----------+---+---++\n");
printf("|Valentina | %f | %f |\n", &vaservada, &vavendida);
printf("+----------+---+---++\n");
printf("|Ana       | %f | %f |\n", &anaservada, &anavendida);
printf("+----------+---+---++\n");
printf("|Laura     | %f | %f |\n", &lauraservada, &lauravendida);
printf("+----------+---+---++\n");
printf("|Eduarda   | %f | %f |\n", &eduservada, &eduvendida);
printf("+----------+---+---++\n");
printf("|Melissa   | %f | %f |\n", &meservada, &mevendida);
printf("+----------+---+---++\n");
      		
          	printf("encerrar a compra\n\n (1)sim:");
			scanf("%i", &veno);
			if(venop == 1){
				break;
			}
          	break;
            	case 2:
/*
	| 	Reserva	|
*/
            		for (i = 0; i <= 19; i++){
          for (j = 0; j <= 24; j++){
          	printf("|%c|", disponi);
          	if(j == 24){
          		printf("\n");
			  }	
          }
      }
          	printf("Informe o assento desejado em linha: ");
          	scanf("%i", &i);
          	printf("Informe o assento desejado em coluna: ");
          	scanf("%i", &j);
          	printf("encerrar a compra\n\n (1)sim:");
			scanf("%i", &veno);
			reservada ++;
			if(venop == 1){
				break;
			}
          	break;
		    	case 3:
/*
	| 	Parcelado	|
*/
		    		for (i = 0; i <= 19; i++){
          for (j = 0; j <= 24; j++){
          	printf("|%c|", disponi);
          	if(j == 24){
          		printf("\n");
			  }	
          }
      }
		  	printf("Informe o assento desejado em linha: ");
          	scanf("%i", &i);
          	printf("Informe o assento desejado em coluna: ");
          	scanf("%i", &j);
          	printf("encerrar a compra\n\n (1)sim:");
			scanf("%i", &veno);
			if(venop == 1){
				break;
			}
				case 4:
/*
	| 	Promocial	|
*/
            printf("Informe a porcentagem do desconto:");
            scanf("%f", &promopro);
            printf("encerrar a compra\n\n (1)sim:");
			scanf("%i", &veno);
			if(venop == 1){
				break;
			}
			veno = 0;
          	break;
				default:{
					printf("Opcao de compra invalida!");
		  	printf("encerrar a compra\n\n (1)sim:");
			scanf("%i", &veno);
			if(venop == 1){
				break;
			}
			break;
				}
			}
		}
}
