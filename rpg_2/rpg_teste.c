#include <stdio.h>
#include <stdlib.h>
#include <locale>
#include <time.h>
//#include "atb_player.h"
//#include "slime_verde.h"


typedef struct{
	

	int i_pv=20;
	int i_atk=5;
	int i_def=4;
	int i_nivel=1;
	int i_xp=0;
	int i_limitexp=100;
		

		
	}atb_player;



	typedef struct{
		
		char c_nome[12]="slime verde";
		int i_pv_slm=20;
		int i_atk_slm=1;
		int i_def_slm=1;
		int i_xp_slm=50;
		
	}slime_verde;


		
char n_player[200];


void bat_slimeverde();

void menu();

	char opc;
	
void exit();

void esc_per();
	

void batalha();
int main(slime_verde *slm,atb_player *per) {	
	
		
	
	srand(time(NULL));
	
	menu();
	system("cls");

	return 0;	
}

void esc_per(){
	int limite;
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
	scanf(" %[^\n]", &n_player);
	//limite=strlen()	
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

	int inimigo=rand()%2;
	
	if(inimigo==1){
		printf("VOCE ENCONTROU UM INIMIGO\n");
		bat_slimeverde();
	}else{
		printf("NENHUM INIMIGO ENCONTRADO NA REGIAO!\n\n");
		system("pause");
		system("cls");
	}
	
	batalha();
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

void bat_slimeverde(){
	
	int bat_opc;
	slime_verde slm;
	atb_player per;
	
	
	do{
		printf("%s\n", n_player);
		printf("atk: %d\nvida: %d\nnivel: %d",per.i_atk,per.i_pv,per.i_nivel);
		
		printf("\n\ninimigo\n%s\natk = %d\nvida = %d\n",slm.c_nome,slm.i_atk_slm,slm.i_pv_slm);
		
		//system("pause");
			
			printf("\n\n(1)ATACAR\t(2)PASSAR TURNO\n>>> ");
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
						printf("inimigo morto\n+%d XP\n\n",slm.i_xp_slm);
						
						per.i_limitexp=per.i_limitexp-slm.i_xp_slm;
						if(per.i_limitexp<=0);
						per.i_nivel=per.i_nivel+1;
						printf("UP NIVEL %d\n",per.i_nivel);
						
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
	batalha();
}