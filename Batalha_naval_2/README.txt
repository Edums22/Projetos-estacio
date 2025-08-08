BATALHA NAVAL – README

Objetivo
========
Afundar todos os navios do adversário (computador) antes que ele afunde os seus.

No jogo:
- Você controla 3 navios.
- O computador também controla 3 navios.
- O tabuleiro tem tamanho 5x5 (linhas e colunas numeradas de 0 a 4).

Regras do Jogo
==============
1. O tabuleiro começa vazio, representado por `~` (mar desconhecido).
2. Cada jogador posiciona seus navios:
   - Você posiciona manualmente.
   - O computador posiciona aleatoriamente.
3. O jogo é jogado em turnos:
   - Você escolhe uma coordenada para atacar no tabuleiro do computador.
   - O computador escolhe uma coordenada para atacar no seu tabuleiro.
4. Símbolos usados no tabuleiro:
   - `N` → Navio (apenas visível no seu tabuleiro).
   - `X` → Tiro acertou um navio.
   - `O` → Tiro caiu na água (errou).
   - `~` → Local ainda não atacado.
5. O jogo termina quando todos os navios de um dos lados forem destruídos.

Como Jogar
==========
1. Posicione seus navios:
   - Digite dois números de 0 a 4 separados por espaço:
     - Primeiro número: linha (X).
     - Segundo número: coluna (Y).
   - Exemplo:
     Navio 1: 0 1
     Navio 2: 2 3
     Navio 3: 4 4

2. Ataque o inimigo:
   - Digite as coordenadas do ataque no formato:
     X Y
   - Se acertar: "Você acertou um navio!".
   - Se errar: "Você errou.".

3. O computador atacará automaticamente após seu turno.

4. Continue jogando até a vitória ou derrota.

Dicas
=====
- Espalhe seus navios pelo tabuleiro para dificultar ataques do computador.
- Ao acertar um navio inimigo, ataque casas vizinhas.
- Não repita ataques na mesma coordenada.
