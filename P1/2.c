#include<stdio.h>
#include<string.h>

int main()
{
    char string[200]; //string
    char consoantes[200]; //vetor das consoantes
    int i, j = 0; //declaracao de contadores

    printf("coloque sua string: "); //recebe a string
    scanf("%s", &string);

    while (string[i] != '\0') //faz a comparacao de todas as letras da frase colocada em string
    {
        if (string[i] == 'b' || string[i] == 'c' || string[i] == 'd' || string[i] == 'f' || string[i] == 'g' || string[i] == 'j' || string[i] == 'k' || string[i] == 'l' || string[i] == 'm' || string[i] == 'n' || string[i] == 'p' || string[i] == 'q' || string[i] == 'r' || string[i] == 's' || string[i] == 't' || string[i] == 'v' || string[i] == 'w' || string[i] == 'x' || string[i] == 'z' || string[i] == 'B' || string[i] == 'C' || string[i] == 'D' || string[i] == 'F' || string[i] == 'G' || string[i] == 'J' || string[i] == 'K' || string[i] == 'L' || string[i] == 'M' || string[i] == 'N' || string[i] == 'P' || string[i] == 'Q' || string[i] == 'R' || string[i] == 'S' || string[i] == 'T' || string[i] == 'V' || string[i] == 'W' || string[i] == 'X' || string[i] == 'Z')
        {
            consoantes[j] = string[i]; //se alguma das letras for consoante, o programa armazena no vetor consoantes
            j++;
        }
        i++;
    }
    
    printf("\n%s", consoantes); //print da frase somente com consoantes
    

    return 0;
}