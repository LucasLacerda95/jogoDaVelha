#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define ANSI_COLOR_RED "\x1b[31m"
#define ANSI_COLOR_GRAY "\e[0;37m"
#define ANSI_COLOR_RESET "\x1b[0m"

char matriz[3][3] = {{'.', '.', '.'},
                     {'.', '.', '.'},
                     {'.', '.', '.'}};

char matrizModelo[3][3] = {{'7', '8', '9'},
                           {'4', '5', '6'},
                           {'1', '2', '3'}};

char matrizJogada()
{

    int coordenadaX, coordenadaY, jogada = 0;
    for (int jogadas = 0; jogadas < 9; ++jogadas)
    {

        for (int cont1 = 0; cont1 < 3; cont1++) // Aninhamento dos laços for para criar a matriz resetada
        {
            printf("\n");
            for (int cont2 = 0; cont2 < 3; cont2++)
            {
                printf("\t%c", matriz[cont1][cont2]);
            }
            // Cria Matriz Modelo ---------------------------------------------------------------------------------------------

            for (int cont2 = 0; cont2 < 3; cont2++)
            {
                if ((cont2 == 0) || (cont2 == 3) || (cont2 == 6))
                {
                    printf("\t\t");
                }
                printf(ANSI_COLOR_GRAY "\t%c", matrizModelo[cont1][cont2]);
            }
            /*-----------------------------------------------------------------------------------------------------------------*/
            printf("\n");
        }

        printf("\n\nDigite a coordenada da sua jogada: ");
        scanf("%i", &jogada);
        system("cls");

        if ((jogadas % 2) == 0)
        {
            switch (jogada)
            {
            case 7:
                if (matriz[0][0] != '.')
                {
                    printf("Opcao ja marcada..");
                    jogadas -= 1;
                }
                else
                    matriz[0][0] = 'X';
                break;
            case 8:
                if (matriz[0][1] != '.')
                {
                    printf("Opcao ja marcada..");
                    jogadas -= 1;
                }
                else
                    matriz[0][1] = 'X';
                break;
            case 9:
                if (matriz[0][2] != '.')
                {
                    printf("Opcao ja marcada..");
                    jogadas -= 1;
                }
                else
                    matriz[0][2] = 'X';
                break;
            case 4:
                if (matriz[1][0] != '.')
                {
                    printf("Opcao ja marcada..");
                    jogadas -= 1;
                }
                else
                    matriz[1][0] = 'X';
                break;
            case 5:
                if (matriz[1][1] != '.')
                {
                    printf("Opcao ja marcada..");
                    jogadas -= 1;
                }
                else
                    matriz[1][1] = 'X';
                break;
            case 6:
                if (matriz[1][2] != '.')
                {
                    printf("Opcao ja marcada..");
                    jogadas -= 1;
                }
                else
                    matriz[1][2] = 'X';
                break;
            case 1:
                if (matriz[2][0] != '.')
                {
                    printf("Opcao ja marcada..");
                    jogadas -= 1;
                }
                else
                    matriz[2][0] = 'X';
                break;
            case 2:
                if (matriz[2][1] != '.')
                {
                    printf("Opcao ja marcada..");
                    jogadas -= 1;
                }
                else
                    matriz[2][1] = 'X';
                break;
            case 3:
                if (matriz[2][2] != '.')
                {
                    printf("Opcao ja marcada..");
                    jogadas -= 1;
                }
                else
                    matriz[2][2] = 'X';
                break;

            default:
                printf("Valor incorreto...");
                jogadas -= 1;
                break;
            }
        }
        else
        {
            switch (jogada)
            {
            case 7:
                if (matriz[0][0] != '.')
                {
                    printf("Opcao ja marcada..");
                    jogadas -= 1;
                }
                else
                    matriz[0][0] = 'O';
                break;
            case 8:
                if (matriz[0][1] != '.')
                {
                    printf("Opcao ja marcada..");
                    jogadas -= 1;
                }
                else
                    matriz[0][1] = 'O';
                break;
            case 9:
                if (matriz[0][2] != '.')
                {
                    printf("Opcao ja marcada..");
                    jogadas -= 1;
                }
                else
                    matriz[0][2] = 'O';
                break;
            case 4:
                if (matriz[1][0] != '.')
                {
                    printf("Opcao ja marcada..");
                    jogadas -= 1;
                }
                else
                    matriz[1][0] = 'O';
                break;
            case 5:
                if (matriz[1][1] != '.')
                {
                    printf("Opcao ja marcada..");
                    jogadas -= 1;
                }
                else
                    matriz[1][1] = 'O';
                break;
            case 6:
                if (matriz[1][2] != '.')
                {
                    printf("Opcao ja marcada..");
                    jogadas -= 1;
                }
                else
                    matriz[1][2] = 'O';
                break;
            case 1:
                if (matriz[2][0] != '.')
                {
                    printf("Opcao ja marcada..");
                    jogadas -= 1;
                }
                else
                    matriz[2][0] = 'O';
                break;
            case 2:
                if (matriz[2][1] != '.')
                {
                    printf("Opcao ja marcada..");
                    jogadas -= 1;
                }
                else
                    matriz[2][1] = 'O';
                break;
            case 3:
                if (matriz[2][2] != '.')
                {
                    printf("Opcao1 ja marcada..");
                    jogadas -= 1;
                }
                else
                    matriz[2][2] = 'O';
                break;
            default:
                printf("Valor incorreto...");
                jogadas -= 1;
                break;
            }
        }

        // Verifica se o valor é válido:

        // Verifica se a jogada é vitoriosa / Se sim ele Finaliza o jogo.. ----------------------------------------------------------------------------------
        if ((matriz[0][0] == 'X') && (matriz[1][1] == 'X') && (matriz[2][2] == 'X') || (matriz[0][0] == 'X') && (matriz[0][1] == 'X') && (matriz[0][2] == 'X') ||
            (matriz[1][0] == 'X') && (matriz[1][1] == 'X') && (matriz[1][2] == 'X') || (matriz[2][0] == 'X') && (matriz[2][1] == 'X') && (matriz[2][2] == 'X') ||
            (matriz[0][0] == 'X') && (matriz[1][0] == 'X') && (matriz[2][0] == 'X') || (matriz[0][1] == 'X') && (matriz[1][1] == 'X') && (matriz[2][1] == 'X') ||
            (matriz[0][2] == 'X') && (matriz[1][2] == 'X') && (matriz[2][2] == 'X') || (matriz[0][2] == 'X') && (matriz[1][1] == 'X') && (matriz[2][0] == 'X'))
        {
            printf("\n\tJogador 1 venceu...\n");
            printf("Para jogar novamente pressione enter..");
            system("pause");
            jogadas = 0;
            main();
        }
        else if ((matriz[0][0] == 'O') && (matriz[1][1] == 'O') && (matriz[2][2] == 'O') || (matriz[0][0] == 'O') && (matriz[0][1] == 'O') && (matriz[0][2] == 'O') ||
                 (matriz[1][0] == 'O') && (matriz[1][1] == 'O') && (matriz[1][2] == 'O') || (matriz[2][0] == 'O') && (matriz[2][1] == 'O') && (matriz[2][2] == 'O') ||
                 (matriz[0][0] == 'O') && (matriz[1][0] == 'O') && (matriz[2][0] == 'O') || (matriz[0][1] == 'O') && (matriz[1][1] == 'O') && (matriz[2][1] == 'O') ||
                 (matriz[0][2] == 'O') && (matriz[1][2] == 'O') && (matriz[2][2] == 'O') || (matriz[0][2] == 'O') && (matriz[1][1] == 'O') && (matriz[2][0] == 'O'))
        {
            printf("\n\n\t\tJogador 2 venceu...\n\n");
            printf("Para jogar novamente pressione enter..");
            system("pause");
            jogadas = 0;
            main();
        }

        printf(ANSI_COLOR_GRAY "\n\t\t\t\t\t\t     'Modelo'" ANSI_COLOR_RESET);
    }
    printf("\n\n\t\tEmpate!!\n\n");

    return matriz;
}

int main()
{
    system("cls");
    char jogada = matrizJogada();
    printf("%c", jogada);

    system("exit");
    return 0;
}

// int menu(){
//     printf("-------------------------------------------------------\n");
//     printf("-------------------------------------------------------\n");
//     printf("---------------------Jogo da Velha---------------------\n");
//     printf("-------------------------------------------------------\n");
//     printf("-------------------------------------------------------\n\n\n\n\n");

//     char seletor = "";

//     printf(ANSI_COLOR_RED"\t\t\t%c Novo Jogo\n"ANSI_COLOR_RESET, seletor);
//     printf("\t\t\t%c Recordes\n", seletor);
//     printf("\t\t\t%c Creditos\n", seletor);
//     printf("\t\t\t%c Sair do Jogo\n\n\n\n", seletor);

//     system("pause");
//     return 0;
// }
