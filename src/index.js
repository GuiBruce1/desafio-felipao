// Projeto em Javascript escrito com a instrução literal do desafio onde números cheios como 1000, 2000 ou com uma unidade no final como 1001 e 2001 não serão considerados no cálculo do rank, deixando um buraco na lógica do programa.
let jogador = ["Guilherme", 100]
let nivel

function classificador_Nivel_Heroi(jogador){
    if (jogador < 1000){
        nivel = "Ferro"
    } else if(jogador > 1001 && jogador < 2000){
        nivel = "Bronze"
    } else if(jogador > 2001 && jogador < 5000){
        nivel = "Prata"
    } else if(jogador > 5001 && jogador < 7000){
        nivel = "Ouro"
    } else if(jogador > 7001 && jogador < 8000){
        nivel = "Platina"
    } else if(jogador > 8001 && jogador < 9000){
        nivel = "Ascendente"
    } else if(jogador > 9001 && jogador < 10000){
        nivel = "Imortal"
    } else if(jogador > 10001){
        nivel = "Radiante"
    }
}
classificador_Nivel_Heroi(jogador[1])

console.log(nivel)
