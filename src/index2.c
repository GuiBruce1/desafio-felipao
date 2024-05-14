/*Programa em C com a lógica alterada por mim!*/

#include <stdio.h>
#include <string.h>

char classificador_Nivel_Heroi(char* str, int xp){
    char nivel[15];

    if (xp <= 1000){
        strcpy(str, "Ferro");
    } else if(xp <= 2000){
        strcpy(str, "Bronze");
    } else if(xp <= 5000){
        strcpy(str, "Prata");
    } else if(xp <= 7000){
        strcpy(str, "Ouro");
    } else if(xp <= 8000){
        strcpy(str, "Platina");
    } else if(xp <= 9000){
        strcpy(str, "Ascendente");
    } else if(xp <= 10000){
        strcpy(str, "Imortal");
    } else {
        strcpy(str, "Radiante");
    }
}

int main() {
    int xp;
    char jogador[10];
    char nivel[15];
    printf("Digite o nome de seu herói: ");
    scanf("%s", jogador); 

    printf("Digite o xp que seu herói tem: ");
    scanf("%d", &xp);

    if(xp < 0){
        while(xp < 0){
            printf("Quantidade de xp inválida, o xp tem que ser maior ou igual a zero, tente novamente: ");
            scanf("%d", &xp);
        }
    }
    
    classificador_Nivel_Heroi(nivel, xp);

    printf("O herói de nome %s está no nível %s", jogador, nivel);

    return 0;
}











