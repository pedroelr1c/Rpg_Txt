#include "atb_player.h"


struct atributoplayer{

	char s_nomeplayer[15];
	int i_pv;
	int i_atk;
	int i_item;
	int i_def;
	int i_nivel;
	int i_xp;
	int i_limitexp;
	int i_moedas;
		
};

void Inicializar_Atributos(Atributoplayer *player){
	
	player->i_pv = 20;
	player->i_atk = 5;
	player->i_item = 0;
	player->i_def = 1;
	player->i_nivel = 1;
	player->i_xp = 0;
	player->i_limitexp = 50;
	player->i_moedas = 50;

	

}

void inventario(Atributoplayer *player){
	
	char vazio[6] = "VAZIO";

	printf("Mochila\n");
	printf("(1) %s\n",vazio);
	printf("(2) %s\n",vazio);
	printf("(3) %s\n",vazio);
	printf("(4) %s\n",vazio);
	printf("(5) %s\n",vazio);
	printf("(6) %s\n",vazio);
	printf("[0] SAIR");

}
