#include <stdio.h>

int main() {
    int num_funcionario;
    float hrs_trabalhadas, valor_por_hr, salario;

    //printf("Digite o número do funcionário: ");
    scanf("%d", &num_funcionario);

    //printf("Digite o número de horas trabalhadas: ");
    scanf("%f", &hrs_trabalhadas);

    //printf("Digite o valor recebido por hora: ");
    scanf("%f", &valor_por_hr);

    salario = hrs_trabalhadas * valor_por_hr;

    printf("NUMBER = %d\n", num_funcionario);
    printf("SALARY = U$ %.2f\n", salario);

    return 0;
}
