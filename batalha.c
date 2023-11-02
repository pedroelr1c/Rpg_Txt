#include "mobs.c"
#include "atb_player.c"
#include "batalha.h"

void combate(Atributoplayer player, Mobs *mob){
    int i;
    printf("Nome: %s\n",player.s_nomeplayer);
    printf("------------------\n");
    printf("Hp: %d\n",player.i_pv);
    printf("Atk: %d\n",player.i_atk);
    printf("Def: %d\n",player.i_def);
    printf("Nivel: %d\n",player.i_nivel);
    printf("Monstros encontrados pelas rendondezas!\n");

    for(i=0;i<3;i++){
        printf("Inimigo: %s\n",mob[i].s_nome_mob);
        printf("Hp: %d\n",mob[i].i_pv_mob);
        printf("Atk: %d\n\n",mob[i].i_atk_mob);
        
    }

}