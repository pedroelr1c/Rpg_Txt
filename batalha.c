#include "mobs.c"
#include "atb_player.c"
#include "batalha.h"

void mapa(){
    printf("Nada ainda!");
    exit(1);
}

void Andar1(Atributoplayer player, Mobs *mob, int tamanho){
    int i,escolha,luta;
    int RNG; //random number generetor
    do{
            printf("Nome: %s\n",player.s_nomeplayer);
            printf("------------------\n");
            printf("Hp: %d\n",player.i_pv);
            printf("Atk: %d\n",player.i_atk);
            printf("Def: %d\n",player.i_def);
            printf("Nivel: %d\n",player.i_nivel);
            printf("\nMonstros encontrados pelas rendondezas!\n");

            

            for(i=0;i<3;i++){
                printf("%s\n",mob[i].s_nome_mob);
                printf("------------------\n");
                printf("Hp: %d\n", mob[i].i_pv_mob);
                printf("Atk: %d\n",mob[i].i_atk_mob);
                printf("Def: %d\n\n",mob[i].i_def_mob);
            }

            printf("(1) Batalhar\n(2) Voltar\n");
            scanf("%d",&escolha);

    }while(escolha != 2 && escolha != 1);
    
    // Fazendo a escolha do mob aleatoria.
    RNG = rand() % 2;
    
    switch (escolha){
        case 1:        
    
            do{
                // Mob
                printf("Inimigo: %s\n",mob[RNG].s_nome_mob);
                printf("Hp: %d\n", mob[RNG].i_pv_mob);
                printf("Atk: %d\n",mob[RNG].i_atk_mob);
                printf("Def: %d\n\n",mob[RNG].i_def_mob);
                // Player
                printf("Nome: %s\n",player.s_nomeplayer);
                printf("------------------\n");
                printf("Hp: %d\n",player.i_pv);
                printf("Atk: %d\n",player.i_atk);
                printf("Def: %d\n",player.i_def);
                printf("Nivel: %d\n",player.i_nivel);

                printf("[1] ATACAR [2] FUGIR\n");
                scanf("%d",&luta);
                getchar();
                if(luta==1){

                    // player vai receber o ataque do mob.
                    player.i_pv -= mob[RNG].i_atk_mob;
                    if(player.i_pv<=0){
                        printf("Você morreu!\n");
                        exit(1);
                    }

                    // Mob vai receber o ataque do player.
                    mob[RNG].i_pv_mob -= player.i_atk; 
                    if(mob[RNG].i_pv_mob<=0){
                        printf("Mostro derrotado!\n+%d\n",mob[RNG].i_xp_mob);
                        
                        printf("[1] CONTINAR [2] VOLTAR\n");
                        scanf("%d",&luta);
                        getchar();

                        // Verifica se o mob está morto para dar o xp ao player.
                        player.i_xp += mob[RNG].i_xp_mob;
                        

                        Inicializar_Mobs(mob); // Atribuindo atributos novamente aos mobs.
                        RNG = rand() % 2; // Mudando o mob para a próxima batalha.
                    }
                    

                }if(luta==2){
                    mapa();
                }

            }while(luta==1);

            break;
        case 2:
            printf("voltar para a entrada da dungeon\n");
            break;
        default:

            break;
        }

}