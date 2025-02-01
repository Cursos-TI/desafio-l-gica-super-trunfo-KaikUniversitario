#include <stdio.h>
#include <stdlib.h>

//Criado por Kaik Rodrigues.
//Observação: montei o codigo por outro compilador, me familiarizei melhor com ele!(Dev C++).


int main() {
				
				/*****Começo de entrada e saida de dados da primeira carta...*/
				
        char CodigoDaCarta[4]; // Codigo da carta.
        char nome[100];	// nome da cidade.
        int populacao; // população da cidade.
        int area; // area da cidade.
        long long int pib; // PIB da cidade.
        int PontosTuristicos; // Numero de pontos turisticos da cidade.	
				
					
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
	scanf("%d", &populacao);
	printf("A população foi: %d. \n\n", populacao); // confirmar codigo coletado.
	
	printf("Digite a area (Sem pontos):\n"); // pedir area da cidade.
	scanf("%d", &area);
	printf("A area é: %u Km². \n\n", area); // confirmar dado coletado.
	
	printf("Digite o PIB da cidade (sem pontos): \n"); // pedir PIB da cidade.
	scanf("%lld", &pib);
	printf("O PIB da cidade foi: %lld. \n\n", pib); // confirmar dado coletado.
	
	printf("Digite o número de pontos turisticos: \n"); // pedir numero de pontos turisticos da cidade.
	scanf("%d", &PontosTuristicos);
	printf("O número de pontos turisticos foi: %d. \n\n", PontosTuristicos); // confirmar dado coletado.
	
	
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
        int populacao2;
        int area2;
        long long int pib2;
        int PontosTuristicos2;	
	
	    printf("Agora de as informações da segunda carta:\n\n"); //intrpdução.
	
	printf("Digite o código da carta 2: \n");
	scanf("%s.", &CodigoDaCarta2);
	printf("O código da carta foi: %s. \n\n", CodigoDaCarta2);
	
	printf("Digite o nome da cidade (sem dar espaçamentos): \n");
	scanf("%s", &nome2);
	printf("O nome digitado foi: %s. \n\n", nome2);
	
	printf("Digite a população (sem abreviações e pontos):\n");
	scanf("%d", &populacao2);
	printf("A população foi: %d. \n\n", populacao2);
	
	printf("Digite a area (Sem pontos):\n");
	scanf("%d", &area2);
	printf("A area foi: %u Km². \n\n", area2);
	
	printf("Digite o PIB da cidade (sem pontos): \n");
	scanf("%lld", &pib2);
	printf("O PIB da cidade foi: %lld. \n\n", pib2);
	
	printf("Digite o número de pontos turisticos: \n");
	scanf("%d", &PontosTuristicos2);
	printf("O número de pontos turisticos foi: %d. \n\n", PontosTuristicos2);
	
	
        float densidade2 = (float)populacao2 /(float) area2;
        float PIBpercapita2 = (float)pib2 / (float)populacao2;
	
	printf("A densidade populacional é: %.2f \n", densidade2);
	printf("PIB per capita é: %.2f \n", PIBpercapita2);
	
    	double soma_propriedades2 = (float)populacao2 + (float)area2 + (float)pib2;
		
	printf("Super poder, segunda carta: %.2f \n\n\n\n", soma_propriedades2);	
		
			/******Fim de entrada e saida de dados da Segunda carta...*/

				
				/****** Area de comparação das cartas*/	

		printf("Vamos fazer a comparação das cartas!\n");
		
	printf("a carta 1 tem: %d de popupulação, ja a carta 2 tem: %d de população.\n\n", populacao, populacao2); // comparação de população.
	printf("a carta 1 tem: %d km² de area, ja a carta 2 tem: %d km² de area.\n\n", area, area2); // comparação de area.
	printf("a carta 1 tem: %lld de PIB, ja a carta 2 tem: %lld de PIB.\n\n", pib, pib2); // comparação de PIB.
	printf("a carta 1 tem: %.2f de densidade, ja a carta 2 tem: %.2f de densidade.\n\n\n", densidade, densidade2); // comparação de densidade.
	
				/*****fim comparação/
				
												
				/******** Quem vence? */
		
		printf("Agora,vamos ver qual carta é vencedora, apartir da sua propriedade de Densidade:\n\n");
		
			if(densidade < densidade2){		//Verifica a condição, se densidade é menor que densidade2.
				printf("Carta 1 é a vecedora!\n\n");	//sendo verdadeira, imprime está menssagem.
			}else{
				printf("Carta 2 é a vencedora!\n\n"); // se não,esta.
			}
			
			if(densidade == densidade2){  // verifica se deu empate.
				printf("Houve um empate!\n\n");
			}
			
				/*****Fim quem vence*/
	
	system ("pause");
    return 0;
}