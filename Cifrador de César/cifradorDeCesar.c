#include <stdio.h>
#include <string.h>

/*Cifrador de César (criptografia simples) 🔐
O senha tem um limite de 15 caracteres*/ 

void criptografia(char senha[], int *deslocamento) {
    int i = 0; char subs;
    while(senha[i] != '\0') {
        subs = senha[i] + *deslocamento;
        printf("%c", subs);
        i++;
    }
}

int main() {

    char senha[15]; int deslocamento;
    printf("Formule a senha: "); scanf("%s", senha);
    printf("Deslocamento de caracteres: "); scanf("%d", &deslocamento);
    criptografia(senha, &deslocamento);

    return 0;
}