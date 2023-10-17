#include "atb_player.c"

int main (void){

    Atributoplayer player;
 
    printf("Informe seu nome\n");
    scanf(" %[^\n]",player.s_nomeplayer);

    Inicializar_Atributos(&player);

    printf("Nome: %s\n",player.s_nomeplayer);
    printf("------------------\n");
    printf("Hp: %d\n",player.i_pv);
    printf("Atk: %d\n",player.i_atk);
    printf("Def: %d\n",player.i_def);
    printf("Nivel: %d\n",player.i_nivel);
    printf("\n\n");
    
}
