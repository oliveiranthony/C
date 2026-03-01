#include <stdio.h>

int main() {

    int qFuncionarios, diasMes,contagemFaltas = 0, contagemAtestados = 0;
    double salarioMensal, descontoFalta = 0; 
    printf("Quantidade de Funcionarios: ");
    scanf("%d", &qFuncionarios);
    printf("Quantidades de dias do mes: ");
    scanf("%d", &diasMes);
    printf("\n");
    int mat[qFuncionarios][diasMes];

    for(int i = 0; i < qFuncionarios; i++) {
        printf("Funcionario %d\n", i + 1);
        do {
        printf("Salario mensal do funcionario: R$");
        scanf("%lf", &salarioMensal);
        } while(salarioMensal < 0);
        printf("Digite 2 para PRESENTE, 1 para ATESTADOS e 0 para FALTAS\n");
        for(int j = 0; j < diasMes; j++) {
            do {
                printf("Dia %d: ", j + 1);
                scanf("%d", &mat[i][j]);
                if(mat[i][j] == 0) {
                    descontoFalta += salarioMensal / diasMes;
                    contagemFaltas++;
                } else if(mat[i][j] == 1) {
                    printf("Validacao enviada ao setor de Departamento Pessoal\n");
                    contagemAtestados++;
                }
            } while(mat[i][j] != 2 && mat[i][j] != 1 && mat[i][j] != 0);
        }
        printf("Faltas no mes: %d\n"
            "Atestados entregues: %d\n"
            "Valor descontado do salario: R$%.2lf", contagemFaltas, contagemAtestados, descontoFalta);
        printf("\n");
    }

    return 0;
}