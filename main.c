#include "batalha.c"

int main (void){

    srand(time(NULL));

    Atributoplayer player;
    int i, tamanho = 3;
    Mobs *mobs = malloc(tamanho * sizeof(Mobs));

 
    printf("Informe seu nome\n");
    scanf(" %[^\n]",player.s_nomeplayer);

    Inicializar_Atributos(&player);
    Inicializar_Mobs(mobs);

    Andar1(player, mobs, tamanho);


}
