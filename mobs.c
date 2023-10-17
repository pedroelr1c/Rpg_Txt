#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mobs.h"

struct mobs{
		
	char s_nome_slime[25];
	int i_pv_slm;
	int i_atk_slm;
	int i_def_slm;
		
};

void slime(Mobs *mob){
	s_nome_slime[25] = "Slime";
	i_pv_slm = 5;
	i_atk_slm = 1;
	i_def_slm = 1;

}