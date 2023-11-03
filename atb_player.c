#include "atb_player.h"


struct atributoplayer{

	char s_nomeplayer[15];
	int i_limite_pv;
	int i_pv;
	int i_atk;
	int i_item;
	int i_def;
	int i_nivel;
	int i_xp;
	int i_limitexp;
	int i_moedas;
		
};

struct itens{

	char s_nome_item[20];
	int i_poder;
	int i_vender;
	int i_comprar;
	int i_indice; // 1 armas, 2 armaduras, 3 poção.

};

void Inicializar_Atributos(Atributoplayer *player){
	
	player->i_limite_pv = 20;
	player->i_pv = 40;
	player->i_atk = 5;
	player->i_item = 0;
	player->i_def = 1;
	player->i_nivel = 1;
	player->i_xp = 0;
	player->i_limitexp = 50;
	player->i_moedas = 50;

	

}

void Atribuir_Itens(Itens *itens){

	//Espada velha
	strcpy(itens[0].s_nome_item, "Espada velha");
	itens[0].i_poder = 4;
	itens[0].i_vender = 2;
	itens[0].i_comprar = 5;
	itens[0].i_indice = 1;

	//Armadura de cobre
	strcpy(itens[1].s_nome_item, "Armadura de cobre");
	itens[1].i_poder = 2;
	itens[1].i_vender = 4;
	itens[1].i_comprar = 10;
	itens[1].i_indice = 2;

	//Poção de vida I
	strcpy(itens[2].s_nome_item, "Poção de vida I");
	itens[2].i_poder = 10;
	itens[2].i_vender = 10;
	itens[2].i_comprar = 40;
	itens[2].i_indice = 3;

}

void Inventario(Itens *itens, int quantidadeItens){

	int i;

	if(quantidadeItens > 0){
		
		for(i=0;i<quantidadeItens;i++){
			printf("[%d] %s", i+1, itens[i].s_nome_item);
		}
		
	}else{
		printf("Inventario vazio!\n");
	}


}

