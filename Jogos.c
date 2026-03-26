#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    //C é chato e não deixa eu colocar em baixo dos cases então vai ficar aqui 
	int jogar;
    int resposta;
    int j1, j2;
    
    menu:
    jogar = 0;
    printf("|==============================|\n");
    printf("| BEM VINDO A SELECAO DE JOGOS |\n");
    printf("|==============================|\n\n");
    printf("1: Pergunta e Resposta\n");
    printf("2: Cobra na Caixa\n");
    printf("3: Gousmas War\n");
    printf("4: Sair\n");
    printf("Digite o numero do jogo: ");
    scanf("%d", &jogar);
    while (getchar() != '\n');
    
    switch(jogar)
	{
	//Peguntas e Resposta	
	case 1:
		
        jogo1:
        //Pergunta 1
        printf("\n|======================|\n");
        printf("| Pergunta e respostas |\n");
        printf("|======================|\n");
		printf("\nPergunta 1: Quais dos jogos a seguir joguei mais de 3 vezes e nao consegui zerar?\n");
        printf("1) DOOM 64\n2) Yakuza 2\n3) Borderlands 2\n4) Persona 3 FES\n");
        resposta1:
        printf("Resposta: ");
        resposta = 0;
		scanf("%d", &resposta);
		while (getchar() != '\n');
		
        
        if(resposta==4){
            printf("CORRETO\n\n");
        }
        else if(resposta == 1 || resposta == 2 || resposta == 3){
            printf("INCORRETO, a alternativa correta era Persona 3 FES\n\n");
        }else{
			printf("INVALIDO\n");
			goto resposta1;
		}
        
        //Pergunta 2
        printf("Pergunta 2: Qual minha serie animada favorita?\n");
        printf("1) Avatar\n2) Ben 10\n3) Coragem o cao covarde\n4) Hora de aventura\n");
        resposta2:
        printf("Resposta: ");
        resposta = 0;
		scanf("%d", &resposta);
		while (getchar() != '\n');
		
        
        if(resposta==1){
            printf("CORRETO\n\n");
        }
        else if (resposta == 2 || resposta == 3 || resposta == 4){
            printf("INCORRETO, a alternativa correta era Avatar\n\n");
        }else{
			printf("INVALIDO\n");
			goto resposta2;
		}
        
        //Pergunta 3
        printf("Pergunta 3: Qual meu filme favorito? \n");
        printf("1) Oldboy\n2) O Show de Truman \n3) Bastardo e Inglorios\n4) O Enigma de Outro Mundo\n");
        resposta3:
        printf("Resposta: ");
        resposta = 0;
		scanf("%d", &resposta);
		while (getchar() != '\n');
        
        if(resposta==2){
            printf("CORRETO\n\n");
        }
        else if(resposta == 1 || resposta == 3 || resposta == 4){
            printf("INCORRETO, a alternativa correta era O Show de Truman\n\n");
        }else{
			printf("INVALIDO\n");
			goto resposta3;
		}
        
        //Pergunta 4
        printf("Pergunta 4: Qual dos jogos a seguir eu NAO gosto? \n");
        printf("1) Death Stranding\n2) The Legend of Zelda Ocarina of Time\n3) Cyberpunk 2077\n4) Dead Cells\n");
        resposta4:
        printf("Resposta: ");
        resposta = 0; 
		scanf("%d", &resposta);
		while (getchar() != '\n');
        
        if(resposta==3){
            printf("CORRETO\n\n");
        }
        else if(resposta == 1 || resposta == 2 || resposta == 4){
            printf("INCORRETO, A alternativa correta era Cyberpunk 2077\n\n");
        }else{
			printf("INVALIDO\n");
			goto resposta4;
		}
        
        //Pergunta 5
        printf("Pergunta 5: Qual meu jogo favorito? \n");
        printf("1) Fallout New Vegas\n2) Dark Souls\n3) Devil May Cry 3\n4) Metroid Prime\n");
        resposta5:
        printf("Resposta: ");
        resposta = 0;
		scanf("%d", &resposta);
		while (getchar() != '\n');
        
        if(resposta==3){
            printf("CORRETO\n\n");
        }
        else if(resposta == 1 || resposta == 2 || resposta == 4){
            printf("INCORRETO, a alternativa correta era Devil May Cry 3\n\n");
        }else{
			printf("IVALIDO\n");
			goto resposta5;
		}
        
        int sn;
        jogarnovamente:
        printf("Tentar novamente? 1 para SIM, 2 para NAO: ");
        sn = 0;
        scanf("%d", &sn);
        
        while (getchar() != '\n');
        if(sn==2){
        	system("cls");
            goto menu;
        }
        else if(sn==1){
        	system("cls");
        	resposta = 0; //Obrigado Benjamin
            goto jogo1;
        }
        else{
			printf("IVALIDO!\n");
			goto jogarnovamente;			
		}
		
	//Cobra na caixa	  
    case 2:
    	printf("\n|================|\n");
    	printf("| Cobra na Caixa |\n");
    	printf("|================|\n");
		printf("\nDigite os numeros dos nomes que desejam usar:\n");
		
		//Os nomes
		char nomes[7][20] = {"Cammy", "Nero", "Edgeworth", "Link" ,"Samus", "Aerith" ,"Solid Snake"};
		
    	printf("1) Cammy \n2) Nero \n3) Edgeworth \n4) Link \n5) Samus \n6) Aerith \n7) Solid Snake ");
    	
		//Escolher o nome dos jogadores
		nome1:
		printf("\nJogador 1: ");
		j1 = 0;
    	scanf("%d", &j1);
    	while (getchar() != '\n');
    	
    	if(j1 < 1 || j1 > 7){
			printf("\nINVALIDO\n");
			goto nome1;
		}
    	
  		
    	nome2:
		printf("Jogador 2: ");
		j2 = 0;
    	scanf("%d", &j2);
    	while (getchar() != '\n');
    	
    
		if(j2 < 1 || j2 >7){
			printf("\nINVALIDO\n\n");
			goto nome2;
		}
		
	
		//Randomizar novamente
		jogo2:
		srand(time(NULL));
		int cobra, botao, escolha;
		int aberto[5] = {0, 0, 0, 0, 0};
		botao = rand()%5 + 1;
		do{
			cobra = rand()%5 + 1;
		}while(cobra == botao);
		
		while(1){
			caixinhas:
			//jogador 1
			printf("%s escolha uma caixa (1 - 5): ", nomes[j1 - 1]);
			escolha = 0;
			scanf("%d", &escolha);
			while (getchar() != '\n');
			
			if(escolha > 5 || escolha < 1){
				printf("\nINVALIDO\n");
				goto caixinhas;
			}
			while(aberto[escolha - 1] == 1){
				printf("Caixa ja aberta: ");
				escolha = 0;
				scanf("%d", &escolha);
				while (getchar() != '\n');
			}
			
			if(escolha == botao){
				printf("%s FUGIU!\n", nomes[j1 - 1]);
						jogardnv1:
    					printf("\nTentar novamente? 1 para SIM, 2 para NAO: ");
    					sn = 0;
   	   	   	   	   	    scanf("%d", &sn);
   	   	   	   	   	    while (getchar() != '\n');

    					if(sn == 1){
        				   	system("cls");
        					goto jogo2;
    					}else if(sn == 2) {
        					system("cls");
        					goto menu;
  						}else if (sn > 2 || sn < 1){
        					printf("\nINVALIDO\n");
        					goto jogardnv1;
    					}
				
			}else if(escolha == cobra){
				printf("%s foi atacado(a) por uma cobra...\n", nomes[j1 - 1]);
						jogardnv2:
    					printf("\nTentar novamente? 1 para SIM, 2 para NAO: ");
    					sn = 0;
   	   	   	   	   	    scanf("%d", &sn);
   	   	   	   	   	    while (getchar() != '\n');

    					if(sn == 1){
        				   	system("cls");
        					goto jogo2;
    					}else if(sn == 2) {
        					system("cls");
        					goto menu;
  						}else if (sn > 2 || sn < 1){
        					printf("\nINVALIDO\n");
        					goto jogardnv2;
    					}
					
			}else{
				printf("Caixa vazia...\n");
				aberto[escolha - 1] = 1;
				//Jogador 2
				printf("%s escolha uma caixa (1 - 5): ", nomes[j2 - 1]);
				escolha = 0;
				scanf("%d", &escolha);
				while (getchar() != '\n');
				while(aberto[escolha - 1] == 1){
					escolha = 0;
					printf("Caixa ja aberta: ");
					scanf("%d", &escolha);
					while (getchar() != '\n');
				}
				if(escolha == botao){
					printf("%s FUGIU!\n", nomes[j2 - 1]);
						jogardnv3:
    					printf("\nTentar novamente? 1 para SIM, 2 para NAO: ");
    					sn = 0;
   	   	   	   	   	    scanf("%d", &sn);
   	   	   	   	   	    while (getchar() != '\n');

    					if(sn == 1){
        				   	system("cls");
        					goto jogo2;
    					}else if(sn == 2) {
        					system("cls");
        					goto menu;
  						}else if (sn > 2 || sn < 1){
        					printf("\nINVALIDO\n");
        					goto jogardnv3;
    					}
					
				}else if(escolha == cobra){
					printf("%s foi atacado(a) por uma cobra...\n", nomes[j2 - 1]);
						jogardnv4:
    					printf("\nTentar novamente? 1 para SIM, 2 para NAO: ");
    					sn = 0;
   	   	   	   	   	    scanf("%d", &sn);
   	   	   	   	   	    while (getchar() != '\n');

    					if(sn == 1){
        				   	system("cls");
        					goto jogo2;
    					}else if(sn == 2) {
        					system("cls");
        					goto menu;
  						}else if (sn > 2 || sn < 1){
        					printf("\nINVALIDO\n");
        					goto jogardnv4;
    					}
				}else{
					printf("Caixa vazia...\n");
					aberto[escolha - 1] = 1;
				}
				
			}
		}
	case 3:
	
		printf("\nJogo nao foi feito :(\n\n");
		
		goto menu;
		
		
		
		
	//Sair :)
	case 4:
		return 0;
		
	default:
		printf("\nINVALIDO\n\n");
		goto menu;			
	}

    return 0;
}
