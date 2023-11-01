#include "atb_player.c"

int main (void){

    Atributoplayer player;
    int i, tamanho = 3;
    Mobs *mobs = malloc(tamanho * sizeof(Mobs));

 
    printf("Informe seu nome\n");
    scanf(" %[^\n]",player.s_nomeplayer);

    Inicializar_Atributos(&player);
    Inicializar_Mobs(mobs);

    printf("Nome: %s\n",player.s_nomeplayer);
    printf("------------------\n");
    printf("Hp: %d\n",player.i_pv);
    printf("Atk: %d\n",player.i_atk);
    printf("Def: %d\n",player.i_def);
    printf("Nivel: %d\n",player.i_nivel);
    printf("Monstros encontrados pelas rendondezas!\n\n");

    for(i=0;i<tamanho;i++){
        printf("Inimigo: %s\n",mobs[i].s_nome_mob);
        printf("Hp: %d\n",mobs[i].i_pv_mob);
        printf("Atk: %d\n\n",mobs[i].i_atk_mob);
        
    }

}
