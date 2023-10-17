#include "atb_player.c"

int main (void){

    Atributoplayer player;
    Mobs mob[3];

    printf("Informe seu nome\n");
    scanf("%[^\n]",player.s_nomeplayer);

    Inicializar_Atributos(&player);

    printf("nome: %s\n",player.s_nomeplayer);
    printf("------------------\n");
    printf("hp: %d\n",player.i_pv);
    printf("atk: %d\n",player.i_atk);
    printf("def: %d\n",player.i_def);
    printf("nivel: %d\n",player.i_nivel);
    
    printf("Inimigo: %s\n",mob[1].s_nome_slime);
    printf("atk: %d\n",mob[1].i_atk_slm);
    

}
