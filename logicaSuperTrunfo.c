#include <stdio.h>
#include <stdlib.h>

//Criado por Kaik Rodrigues. 
//Observação: montei o codigo por outro compilador, me familiarizei melhor com ele!(Dev C++).


int main() {
			
				/*****Começo de entrada e saida de dados da primeira carta...*/
				
        char CodigoDaCarta[4]; // Codigo da carta.
        char nome[100];	// nome da cidade.
        unsigned int populacao; // população da cidade.
        unsigned int area; // area da cidade.
        unsigned long long int pib; // PIB da cidade.
        unsigned int PontosTuristicos; // Numero de pontos turisticos da cidade.	
				
					
				//inicio super trunfo (introdução). 
	    printf("Vamos começar o Super Trunfo!");
	    printf("Vamos começar dando as informações de cada carta,sendo duas cartas.\n\n");
	
	printf("Digite o código da carta 1: \n"); // pedir codigo da carta
	scanf("%s.", &CodigoDaCarta);
	printf("O código da carta foi: %s. \n\n", CodigoDaCarta); // confirmar codigo coletado. 
	
	printf("Digite o nome da cidade (sem dar espaçamentos): \n"); // pedir nome da carta.
	scanf("%s", &nome);
	printf("O nome digitado foi: %s. \n\n", nome);
	
	printf("Digite a população (sem abreviações e pontos):\n"); // pedir população da cidade.
	scanf("%u", &populacao);
	printf("A população foi: %u. \n\n", populacao); // confirmar codigo coletado.
	
	printf("Digite a area (Sem pontos):\n"); // pedir area da cidade.
	scanf("%u", &area);
	printf("A area é: %u Km². \n\n", area); // confirmar dado coletado.
	
	printf("Digite o PIB da cidade (sem pontos): \n"); // pedir PIB da cidade.
	scanf("%llu", &pib);
	printf("O PIB da cidade foi: %llu. \n\n", pib); // confirmar dado coletado.
	
	printf("Digite o número de pontos turisticos: \n"); // pedir numero de pontos turisticos da cidade.
	scanf("%u", &PontosTuristicos);
	printf("O número de pontos turisticos foi: %u. \n\n", PontosTuristicos); // confirmar dado coletado.
	
	
	    float densidade = (float)populacao /(float) area; // calcular densidade.
	    float PIBpercapita = (float)pib / (float)populacao; // Calcular PIB per capta.
	
	printf("A densidade populacional é: %.2f \n", densidade); // exibir densidade calculado.
	printf("PIB per capita é: %.2f \n\n\n", PIBpercapita); // exibir PIB per capta calculado.
	
	    double soma_propriedades = (float)populacao + (float)area + (float)pib; // somar as propriedades (população + area + PIB).
	printf("Super Poder, primeira carta: %.2f \n\n", soma_propriedades); // exibir a soma (Super Poder da carta).
	
		/*****fim de entrada e saida de dados da primeira carta...*/
		
        
		/*****Começo de entrada e saida de dados da Segunda carta...*/  
		//Repete as informações de cima, apenas colocando "2" nas variáveis
			
        char CodigoDaCarta2[4];
        char nome2[100];
       	unsigned int populacao2;
    	unsigned int area2;
        unsigned long long int pib2;
        unsigned int PontosTuristicos2;	
	
	    printf("Agora de as informações da segunda carta:\n\n"); //intrpdução.
	
	printf("Digite o código da carta 2: \n");
	scanf("%s.", &CodigoDaCarta2);
	printf("O código da carta foi: %s. \n\n", CodigoDaCarta2);
	
	printf("Digite o nome da cidade (sem dar espaçamentos): \n");
	scanf("%s", &nome2);
	printf("O nome digitado foi: %s. \n\n", nome2);
	
	printf("Digite a população (sem abreviações e pontos):\n");
	scanf("%u", &populacao2);
	printf("A população foi: %u. \n\n", populacao2);
	
	printf("Digite a area (Sem pontos):\n");
	scanf("%u", &area2);
	printf("A area foi: %u Km². \n\n", area2);
	
	printf("Digite o PIB da cidade (sem pontos): \n");
	scanf("%llu", &pib2);
	printf("O PIB da cidade foi: %llu. \n\n", pib2);
	
	printf("Digite o número de pontos turisticos: \n");
	scanf("%u", &PontosTuristicos2);
	printf("O número de pontos turisticos foi: %u. \n\n", PontosTuristicos2);
	
	
        float densidade2 = (float)populacao2 /(float) area2;
        float PIBpercapita2 = (float)pib2 / (float)populacao2;
	
	printf("A densidade populacional é: %.2f \n", densidade2);
	printf("PIB per capita é: %.2f \n", PIBpercapita2);
	
    	double soma_propriedades2 = (float)populacao2 + (float)area2 + (float)pib2;
		
	printf("Super poder, segunda carta: %.2f \n\n\n\n", soma_propriedades2);	
		
			/******Fim de entrada e saida de dados da Segunda carta...*/

				
				/****** Menu de comparação das cartas*/	
		
		int opcao;
		int tentar = 0;
		
		printf("Vamos fazer a comparação das cartas, usando 2 atributos!\n");
		printf("Escolha a baixo, quais atributos devemos comparar para deterinar o vencedor!\n");
			printf("opção 1: Comparação de população e area.\n");		
			printf("opção 2: Comparação de PIB e desidade populacional.\n");		
			printf("opção 3: Comparação de PIB per capita e Super poder.\n");
			printf("opção 4: Comparação de população e PIB.\n");
			printf("opção 5: Comparação de PIB per capita e PIB.\n");
		printf("Qual opção você deseja?\n");
		scanf("%d", &opcao);
		
				/*****fim menu comparação/
				
												
				/******** Quem vence? */
				
		int vencedor ;
		int perdedor ;
		int empate1 ;
		int empate2 ;
		int empate3 ;		
				
			switch(opcao){
				case 1: //opcao de numero 1
				
					printf("\nVocê escolheu : Comparação de população e area!\n\n");
					
					//inicio comparação dos atributos
					
							//testes para vencedor, perdedor e empates:
						vencedor = (populacao > populacao2 && area > area2);
						perdedor = (populacao < populacao2 && area < area2); 
						empate1 = (populacao == populacao2 && area == area2);
						empate2 = (populacao == populacao2 && area != area2);
						empate3 = (populacao != populacao2 && area == area2);	
						
					if(vencedor == 1){
						printf("A carta vencedora nos 2 atributos, foi: %s\n", CodigoDaCarta); // carta 1 vence
						
					}else if(perdedor == 1){
						printf("A carta vencedora nos 2 atributos, foi: %s\n", CodigoDaCarta2); // carta 2 vence
						
					}else if(empate1 == 1){ 
						printf("Houeve um empate nos 2 atributos, ambas cartas possuem o mesmo valor.\n"); // empate
						
					}else if(empate2 == 1 || empate3 == 1){
						printf("houve uma empate, pelo menos um dos atributos, tem o mesmo valor nas duas cartas.\n");//empate
						printf("A população da carta 1 foi: %u. \n", populacao);
						printf("A população da carta 2 foi: %u. \n", populacao2);
						printf("A area da carta 1 é: %u Km². \n", area);
						printf("A area da carta 2 é: %u Km². \n", area2);
					}
							//teste de possivel erro de digitação dos numeros:
						if(vencedor == 0){
							if(perdedor == 0){
								if(empate1 == 0){
									if(empate2 == 0){
										if(empate3 == 0){
											printf("\nNão foi possivel fazer a comparação, não tem vencedor, não tem perdedor, nem empate!\n\n");
											printf("\nVerifique os numeros e tente novamente!\n\n");
										}
									}
								}
							}
						}
						
					//fim comparação dos atributos
				
					
					break;// fim case 1
				
				case 2:  //opcao de numero 2  
					printf("\nVocê escolheu : Comparação de PIB e desidade populacional!\n\n");
					
					//inicio comparação dos atributos
					
							//testes para vencedor, perdedor e empates:
					vencedor = (pib > pib2 && densidade < densidade2 );
					perdedor = (pib < pib2 && densidade > densidade2); 
					empate1 = (pib == pib2 && densidade == densidade2);
					empate2 = (pib == pib2 && densidade != densidade2);
					empate3 = (pib != pib2 && densidade == densidade2);
					
					if(vencedor == 1){
						printf("A carta vencedora nos 2 atributos, foi: %s\n", CodigoDaCarta); // carta 1 vence
						
					}else if(perdedor == 1){
						printf("A carta vencedora nos 2 atributos, foi: %s\n", CodigoDaCarta2); // carta 2 vence
						
					}else if(empate1 == 1){ 
						printf("Houeve um empate nos 2 atributos, ambas cartas possuem o mesmo valor.\n");// empate
						
					}else if(empate2 == 1 || empate3 == 1){
						printf("houve uma empate, pelo menos um dos atributos, tem o mesmo valor nas duas cartas.\n"); // empate
						printf("A densidade da carta 1 foi: %u. \n", densidade);
						printf("A densidade da carta 2 foi: %u. \n", densidade2);
						printf("O PIB da carta 1 é: %llu. \n", pib);
						printf("O PIB da carta 2 é: %llu. \n", pib2);
					}
							//teste de possivel erro de digitação dos numeros:
						if(vencedor == 0){
							if(perdedor == 0){
								if(empate1 == 0){
									if(empate2 == 0){
										if(empate3 == 0){
											printf("\nNão foi possivel fazer a comparação, não tem vencedor, não tem perdedor, nem empate!\n\n");
											printf("\nVerifique os numeros e tente novamente!\n\n");
										}
									}
								}
							}
						}									
					//fim comparação dos atributos
					
					break; // fim case 2
				
				case 3:  //opcao de numero 3
					printf("\nVocê escolheu : Comparação de PIB per capita e Super poder.\n\n");
					
					//inicio comparação dos atributos
					
							//testes para vencedor, perdedor e empates:
						vencedor = (PIBpercapita > PIBpercapita2 && soma_propriedades > soma_propriedades2 );
						perdedor = (PIBpercapita < PIBpercapita2 && soma_propriedades < soma_propriedades2); 
						empate1 = (PIBpercapita == PIBpercapita2 && soma_propriedades == soma_propriedades2);
						empate2 = (PIBpercapita == PIBpercapita2 && soma_propriedades != soma_propriedades2);
						empate3 = (PIBpercapita != PIBpercapita2 && soma_propriedades == soma_propriedades2);	
					
					if(vencedor == 1){
						printf("A carta vencedora nos 2 atributos, foi: %s\n", CodigoDaCarta);
						
					}else if(perdedor == 1){
						printf("A carta vencedora nos 2 atributos, foi: %s\n", CodigoDaCarta2);
						
					}else if(empate1 == 1){ 
						printf("Houeve um empate nos 2 atributos, ambas cartas possuem o mesmo valor.\n");
						
					}else if(empate2 == 1 || empate3 == 1){
						printf("houve uma empate, pelo menos um dos atributos, tem o mesmo valor nas duas cartas.\n");
						printf("O super poder da carta 1 foi: %.2f. \n", soma_propriedades);
						printf("O super poder da carta 2 foi: %.2f. \n", soma_propriedades2);
						printf("O PIB per capita da carta 1 é: %.2f. \n", PIBpercapita);
						printf("O PIB per capita da carta 2 é: %.2f. \n", PIBpercapita2);
					}
							//teste de possivel erro de digitação dos numeros:
						if(vencedor == 0){
							if(perdedor == 0){
								if(empate1 == 0){
									if(empate2 == 0){
										if(empate3 == 0){
											printf("\nNão foi possivel fazer a comparação, não tem vencedor, não tem perdedor, nem empate!\n\n");
											printf("\nVerifique os numeros e tente novamente!\n\n");
										}
									}
								}
							}
						}									
					//fim comparação dos atributos
									
					break; // fimc case 3
				
				case 4:  //opcao de numero 4
					printf("\nVocê escolheu : Comparação de população e PIB.\n\n");
					
					//inicio comparação dos atributos
					
							//testes para vencedor, perdedor e empates:
						vencedor = (populacao > populacao2 && pib > pib2);
						perdedor = (populacao < populacao2 && pib < pib2); 
						empate1 = (populacao == populacao2 && pib == pib2);
						empate2 = (populacao == populacao2 && pib != pib2);
						empate3 = (populacao != populacao2 && pib == pib2);
						
						
					if(vencedor == 1){
						printf("A carta vencedora nos 2 atributos, foi: %s\n", CodigoDaCarta);
						
					}else if(perdedor == 1){
						printf("A carta vencedora nos 2 atributos, foi: %s\n", CodigoDaCarta2);
						
					}else if(empate1 == 1){ 
						printf("Houeve um empate nos 2 atributos, ambas cartas possuem o mesmo valor.\n");
						
					}else if(empate2 == 1 || empate3 == 1){
						printf("houve uma empate, pelo menos um dos atributos, tem o mesmo valor nas duas cartas.\n");
						printf("A população da carta 1 foi: %u . \n", populacao);
						printf("A população da carta 2 foi: %u . \n", populacao2);
						printf("O PIB da carta 1 é: %.2f . \n", pib);
						printf("O PIB da carta 2 é: %.2f . \n", pib2);
					}
							//teste de possivel erro de digitação dos numeros:
						if(vencedor == 0){
							if(perdedor == 0){
								if(empate1 == 0){
									if(empate2 == 0){
										if(empate3 == 0){
											printf("\nNão foi possivel fazer a comparação, não tem vencedor, não tem perdedor, nem empate!\n\n");
											printf("\nVerifique os numeros e tente novamente!\n\n");
										}
									}
								}
							}
						}									
					//fim comparação dos atributos
					
					break; // fim case 4
				
				case 5:  //opcao de numero 5
					printf("\nVocê escolheu : Comparação de PIB per capita e PIB.\n\n");
					
					//inicio comparação dos atributos
					
							//testes para vencedor, perdedor e empates:
						vencedor = (PIBpercapita > PIBpercapita2 && pib > pib2 ); 
						perdedor = (PIBpercapita < PIBpercapita2 && pib < pib2); 
						empate1 = (PIBpercapita == PIBpercapita2 && pib == pib2);
						empate2 = (PIBpercapita == PIBpercapita2 && pib != pib2);
						empate3 = (PIBpercapita != PIBpercapita2 && pib == pib2);	
					
					if(vencedor == 1){
						printf("A carta vencedora nos 2 atributos, foi: %s\n", CodigoDaCarta);
						
					}else if(perdedor == 1){
						printf("A carta vencedora nos 2 atributos, foi: %s\n", CodigoDaCarta2);
						
					}else if(empate1 == 1){ 
						printf("Houeve um empate nos 2 atributos, ambas cartas possuem o mesmo valor.\n");
						
					}else if(empate2 == 1 || empate3 == 1){
						printf("houve uma empate, pelo menos um dos atributos, tem o mesmo valor nas duas cartas.\n");
						printf("O PIB da carta 1 foi: %.2f . \n", pib);
						printf("O PIB da carta 2 foi: %.2f . \n", pib2);
						printf("O PIB per capita da carta 1 é: %.2f . \n", PIBpercapita);
						printf("O PIB per capita da carta 2 é: %.2f . \n", PIBpercapita2);
					}
							//teste de possivel erro de digitação dos numeros:
						if(vencedor == 0){
							if(perdedor == 0){
								if(empate1 == 0){
									if(empate2 == 0){
										if(empate3 == 0){
											printf("\nNão foi possivel fazer a comparação, não tem vencedor, não tem perdedor, nem empate!\n\n");
											printf("\nVerifique os numeros e tente novamente!\n\n");
										}
									}
								}
							}
						}									
					//fim comparação dos atributos
					printf("teste\n");
				break; // fim case 5
		
				default:
					printf("Opção invalida! Tente novamente.\n"); // Escreve caso a opção escolhida não exista.
			}
		
	 	/*****Fim quem vence*/
	
	system ("pause");
    return 0;
}