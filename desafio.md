### Descrição do projeto 

.Utilizei duas linguagens de programação, Javascript e C. Na versão Javascript deixei fiz exatamente como o desafio o propõe, já na versão C utilizei recursos que o Javascript não tem de maneira convencional (como uma forma fácil de imput, o que também faz com que um laço de repetição seja ilógico) e refiz a lógica do programa como está escrito no código.

## Tópico sobre estruturas de decisão
.Não acho que faça muito sentido usar a estrutura de decisão switch case para o projeto proposto, já que switch case não lida muito bem com valores comparativos de intervalos numéricos, seria melhor usar a estrutura if e else como acabei por fazer.

Chat gpt fazendo por switch case:

let jogador = ["Guilherme", 100];
let nivel;

function classificador_Nivel_Heroi(jogador) {
    let pontos = jogador[1];

    switch (true) {
        case pontos < 1000:
            nivel = "Ferro";
            break;
        case pontos >= 1000 && pontos < 2000:
            nivel = "Bronze";
            break;
        case pontos >= 2000 && pontos < 5000:
            nivel = "Prata";
            break;
        case pontos >= 5000 && pontos < 7000:
            nivel = "Ouro";
            break;
        case pontos >= 7000 && pontos < 8000:
            nivel = "Platina";
            break;
        case pontos >= 8000 && pontos < 9000:
            nivel = "Ascendente";
            break;
        case pontos >= 9000 && pontos < 10000:
            nivel = "Imortal";
            break;
        case pontos >= 10000:
            nivel = "Radiante";
            break;
        default:
            nivel = "Desconhecido";
            break;
    }

    console.log(nivel);
}

classificador_Nivel_Heroi(jogador);

### Obrigado pela atenção!

