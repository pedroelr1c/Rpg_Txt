#include "batalha.c"

#define TAMANHO_INVENTARIO 6

int main (void){

    srand(time(NULL));

    Atributoplayer player;
    int *quantidadeItens = 0;
    int escolha, tamanho = 3;
    Mobs *mobs = malloc(tamanho * sizeof(Mobs));
    Itens *item = malloc(TAMANHO_INVENTARIO * sizeof(Itens));
 
    printf("Informe seu nome\n");
    scanf(" %[^\n]",player.s_nomeplayer);

    // Atribuindo os atributos 
    Atribuir_Itens(item);
    Inicializar_Atributos(&player);
    Inicializar_Mobs(mobs);

    mapa();
    scanf("%d",&escolha);
    switch(escolha){
        case 1:
            printf("NADA AINDA!\n");
            break;
        case 2:
            printf("NADA AINDA!");
            break;
        case 3:
            Andar1(player, mobs, tamanho);
            break;
    }
    


}
