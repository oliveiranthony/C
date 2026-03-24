#include <stdio.h>
#include <string.h>
#include "pss.h"

//📞 Agenda de contatos
//Funcionalidades: Adicionar contato; Listar contatos; Buscar por nome

void buscar(char nomeCompleto[][50], char nTelefone[][12]) {
    char aux[50];
    input_s("Procure pelo nome do contato: ", aux, sizeof(aux));
    aux[strcspn(aux, "\n")] = '\0';
    for(int i = 0; i < 100; i++) {
        if(strcmp(aux, nomeCompleto[i]) == 0) {
            printf("Contato Telefonico: %s", nTelefone[i]);
        }
    }
}

int main() {

    char nomeCompleto[100][50], nTelefone[100][12];;

    puts("Para finalizar o programa, digite 999 onde sera inserido o nome do contato");
        for(int i = 0; i < 100; i++) {
            input_s("Digite o nome do contato: ", nomeCompleto[i], sizeof(nomeCompleto[i]));
            nomeCompleto[i][strcspn(nomeCompleto[i], "\n")]  = '\0';
            if(strcmp(nomeCompleto[i], "999") == 0) {
                break;
            }
            input_s("Insira o numero de telefone: ",nTelefone[i], sizeof(nTelefone[i]));
        }
        
        buscar(nomeCompleto, nTelefone);

    return 0;
}