#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "mobs.h"

struct mobs{
		
	char s_nome_mob[25];
	int i_pv_mob;
	int i_atk_mob;
	int i_def_mob;
	int i_xp_mob;
	int i_moeda_mob;
		
};

void Inicializar_Mobs(Mobs *mob){
	
	// slime verde
	strcpy(mob[0].s_nome_mob, "Slime verde");
	mob[0].i_pv_mob = 10;
	mob[0].i_atk_mob = 2;
	mob[0].i_def_mob = 0;
	mob[0].i_xp_mob = 25;
	mob[0].i_moeda_mob = 10;

	// zumbi
	strcpy(mob[1].s_nome_mob, "zumbi");
	mob[1].i_pv_mob = 15;
	mob[1].i_atk_mob = 4;
	mob[1].i_def_mob = 1;
	mob[1].i_xp_mob = 40;
	mob[1].i_moeda_mob = 15;

	// esqueleto
	strcpy(mob[2].s_nome_mob, "esqueleto");
	mob[2].i_pv_mob = 15;
	mob[2].i_atk_mob = 7;
	mob[2].i_def_mob = 1;
	mob[2].i_xp_mob = 40;
	mob[2].i_moeda_mob = 20;
}

