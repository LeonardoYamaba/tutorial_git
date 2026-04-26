#include <stdio.h>

int main(){

    system("cls");
    
    printf("---TESTE GIT---\n\n");

    int comando;

    printf("Para salvar alteracoes do arquivo no repositorio local. Qual comando GIT utilizamos.\n");
     printf("1. git commit.\n");
     printf("2. git add.\n");
     printf("3. git merge.\n");
     printf("4. git push.\n");
     printf("Resposta: ");
    scanf("%d", &comando);

    if ( comando == 1 )
    {
        printf("\nRESPOSTA CORRETA!");
    }


    else
    {
        printf("\nRESPOSTA ERRADA, FRACASSOU!");
    }
}