#include <stdio.h>
#include <stdlib.h>
#include <locale>
#include "atb_player.c"
#include "slime_verde.c"



		
char n_player[200];


void menu();

	char opc;
	
void exit();

void esc_per();
	

void batalha();
int main() {

	menu();
	system("cls");

	return 0;	
}

void esc_per(){
	system("cls");
	printf("============================================================\n||\t\t\t\t\t\t\t  ||");
	//printf("||\t\t\t\t\t\t\t  ||\n||\t\t\t\t\t\t\t  ||");
	//printf("\n||\t\t\t\t\t\t\t  ||\n||\t\t\t\t\t\t\t  ||");
	printf("\n||\t\t\t\t\t\t\t  ||");
	printf("\n||\t   DIGITE SEU NOME BRAVO AVENTUREIRO\t\t  ||");
	printf("\n||\t\t\t\t\t\t\t  ||");
	printf("\n||\t\t\t\t\t\t\t  ||\n||\t\t\t\t\t\t\t  ||");
//	printf("\n||\t\t\t\t\t\t\t  ||\n||\t\t\t\t\t\t\t  ||");
	printf("\n============================================================\n>>> ");
	
//	printf("DIGITE SEU NOME BRAVO AVENTUREIRO\n>>> ");
	scanf(" %s", &n_player);	
	system("cls");
	printf("BEM VINDO %s\n", n_player);
	system("pause");
	system("cls");
	printf("VOCE ESTA INDO PARA UMA DANGEON AO NORTE DA CIDADE\n\n\n\n\n\n\n\n");
	system("pause");
	system("cls");
	batalha();
	
}

void batalha(){
	int bat_opc;
	slime_verde slm;
	atb_player per;
	
	printf("VOCE ENCONTROU UM SLIME VERDE\n");
	do{
		printf("%s\n", n_player);
		printf("atk: %d\nvida: %d",per.i_atk,per.i_pv);
		
		printf("\n\ninimigo\n%s\natk = %d\nvida = %d\n",slm.c_nome,slm.i_atk_slm,slm.i_pv_slm);
		
		//system("pause");
			
			printf("\n\n(1)ATACAR\t(2)PASSAR TURNO\t\t(3)MOCHILA\n>>> ");
			scanf("%d",&bat_opc);
			switch(bat_opc){
				case 1:
					system("cls");
					slm.i_pv_slm -= per.i_atk;
					per.i_pv -= slm.i_atk_slm;
					if(per.i_pv<=0){
						printf("voce morreu\n");
						system("pause");
						system("cls");
					}
					if(slm.i_pv_slm<=0){
						printf("inimigo morto\n");
						system("pause");
					}
					break;
				case 2:
					printf("voce espera o avanco do inimigo\n");
					system("pause");
					system("cls");
					per.i_pv -= slm.i_atk_slm;
					if(per.i_pv<=0){
						printf("voce morreu\n");
						system("pause");
						system("cls");
					}
			}
				
		}while(slm.i_pv_slm>0);
	}
void exit(){
	
	
	printf("============================================================\n");
	printf("||\t\t\t\t\t\t\t  ||\n||\t\t\t\t\t\t\t  ||");
	printf("\n||\t\t\t\t\t\t\t  ||\n||\t\t\t\t\t\t\t  ||");
	printf("\n||\t\tDESEJA RELEMENTE SAIR?\t\t\t  ||");
	printf("\n||\t\t\t\t\t\t\t  ||\n||\t\t\t\t\t\t\t  ||");
	printf("\n||\t\t\t(N) NAO\t\t\t\t  ||");
	printf("\n||\t\t\t\t\t\t\t  ||\n||\t\t\t\t\t\t\t  ||");
	printf("\n||\t\t\t(S) SIM\t\t\t\t  || ");
	printf("\n||\t\t\t\t\t\t\t  ||\n||\t\t\t\t\t\t\t  ||");
	printf("\n||\t\t\t\t\t\t\t  ||\n||\t\t\t\t\t\t\t  ||");
	printf("\n============================================================\n>>> ");
	scanf("%c",&opc);
	if(opc=='n' || opc=='N'){
		system("cls");
		menu();
	}if(opc=='s' || opc=='S'){
		system("cls");
		batalha();
	}else{
		exit();
	}
	
	
}

void menu(){
	

	printf("\n");
	printf("============================================================\n");
	printf("||\t\t\t\t\t\t\t  ||\n||\t\t\t\t\t\t\t  ||");
	printf("\n||\t\t\t\t\t\t\t  ||\n||\t\t\t\t\t\t\t  ||");
	printf("\n||\t\t\t(J) JOGAR\t\t\t  ||");
	printf("\n||\t\t\t\t\t\t\t  ||\n||\t\t\t\t\t\t\t  ||");
	printf("\n||\t\t\t(N) NOVO JOGO\t\t\t  ||");
	printf("\n||\t\t\t\t\t\t\t  ||\n||\t\t\t\t\t\t\t  ||");
	printf("\n||\t\t\t(S) SAIR\t\t\t  || ");
	printf("\n||\t\t\t\t\t\t\t  ||\n||\t\t\t\t\t\t\t  ||");
	printf("\n||\t\t\t\t\t\t\t  ||\n||\t\t\t\t\t\t\t  ||");
	printf("\n============================================================\n>>> ");
	scanf(" %c",&opc);
	
	if(opc=='j' || opc=='J'){
		esc_per();
	}if(opc=='n' || opc=='N'){
		printf("NADA AINDA");
	}if(opc=='s' || opc=='S'){
		do{
			opc=getchar();
		}while(opc!='\n');
		system("cls");
		
		exit();
		
	}
}
