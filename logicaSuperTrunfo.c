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
		
		int opcao;
		
		printf("Vamos fazer a comparação das cartas!\n");
		printf("Escolha qual atributo devemos comparar para deterinar o vencedor!\n");

			printf("opção 1: Comparação de população.\n");		
			printf("opção 2: Comparação de area.\n");		
			printf("opção 3: Comparação de PIB.\n");
			printf("opção 4: Comparação de densidade populacional. (menor valor vence.)\n");
			printf("opção 5: Comparação de PIB per capta.\n");	
			printf("opção 6: Comparação de super poder.\n");
			
		printf("Qual opção você deseja?\n");
		scanf("%d", &opcao);
		
				/*****fim comparação/
				
												
				/******** Quem vence? */
				
			switch(opcao){
				case 1: //opcao de numero 1
					printf("Comparação de população!\n");		
				
					if(populacao > populacao2){	// teste de comparação, verdadeiro para carta 1 vencedora; falso, carta 2 vence.
						printf("### Carta 1 vence.\n");
						printf("Com o valor de população: %d. \n\n", populacao);
					}else{
						printf("### Carta 2 vence. \n");
						printf("Com o valor de população: %d. \n\n", populacao2);
					}
				break;
				
				case 2:  //opcao de numero 2  
					printf("Comparação de area!\n");		
				
					if(area > area2){  // teste de comparação, verdadeiro para carta 1 vencedora; falso, carta 2 vence.
						printf("### Carta 1 vence.\n");
						printf("Com o valor de area: %d. \n\n", area);
					}else{
						printf("### Carta 2 vence. \n");
						printf("Com o valor de area: %d. \n\n", area2);
					}
				break;
				
				case 3:  //opcao de numero 3
					printf("Comparação de PIB!\n");		
				
					if(pib > pib2){  // teste de comparação, verdadeiro para carta 1 vencedora; falso, carta 2 vence.
						printf("### Carta 1 vence.\n");
						printf("Com o valor de PIB: %lld. \n\n", pib);
					}else{
						printf("### Carta 2 vence. \n");
						printf("Com o valor de PIB: %lld. \n\n", pib2);
					}
				break;
				
				case 4:  //opcao de numero 4
					printf("Comparação de densidade populacional!\n");		
				
					if(densidade < densidade2){  // teste de comparação, verdadeiro para carta 1 vencedora; falso, carta 2 vence.
						printf("### Carta 1 vence.\n");
						printf("Com o valor de densidade: %.2f. \n\n", densidade);
					}else{
						printf("### Carta 2 vence. \n");
						printf("Com o valor de densidade: %.2f. \n\n", densidade2);
					}
				break;
				
				case 5:  //opcao de numero 5
					printf("Comparação de PIB per capta!\n");		
				
					if(PIBpercapita > PIBpercapita2){  // teste de comparação, verdadeiro para carta 1 vencedora; falso, carta 2 vence.
						printf("### Carta 1 vence.\n");
						printf("Com o valor de PIB per capta: %.2f. \n\n", PIBpercapita);
					}else{
						printf("### Carta 2 vence. \n");
						printf("Com o valor de PIB per capta: %.2f. \n\n", PIBpercapita2);
					}
				break;
				
				case 6:  //opcao de numero 6
					printf("Comparação de Super poder!\n");		
				
					if(soma_propriedades > soma_propriedades2){ // teste de comparação, verdadeiro para carta 1 vencedora; falso, carta 2 vence.
						printf("### Carta 1 vence.\n");
						printf("Com o valor de super poder: %d. \n", soma_propriedades);
					}else{
						printf("### Carta 2 vence. \n");
						printf("Com o valor de super poder: %d. \n\n", soma_propriedades2);
					}
				break;
				
				default:
					printf("Opção invalida! Tente novamente.\n"); // Escreve caso a opção escolhida não exista.
			}
				
			
				/*****Fim quem vence*/
	
	system ("pause");
    return 0;
}