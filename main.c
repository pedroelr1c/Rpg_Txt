#include "atb_player.c"

int main (void){

    Atributoplayer *player;
    Mobs *mob[3];


    Inicializar_Atributos(player);

    printf("hp: %d\n",player->i_pv);
    printf("atk: %d\n",player->i_atk);
    printf("def: %d\n",player->i_def);
    printf("nivel: %d\n",player->i_nivel);
    
}
