
#include <stdio.h>

void main()
{
    int hora, minutos, segundos;
    float resto1, resto2, resto3;
    int seg, r1, r2, r3;

    printf("Digite o valor dos segundos e iremos converte-lo para minutos e horas, se possivel:\n");
    scanf("%d", &seg);

    if (seg >= 3600) // O programa vai conferir se o valor pode ser convertido em hora
    {
        hora = seg / 3600;
        resto1 = seg % 3600;
        r1 = resto1;
        printf("%d horas", hora);
        if (resto1 > 0) // O programa vai conferir se os segundos digitados correspondem apenas a hora ou se há minutos
        {
            resto2 = r1 % 60;
            minutos = r1 / 60;
            segundos = resto2;
            printf(", %d minutos", minutos);
            if (resto2 > 0) // O programa vai conferir se os segundos digitados correspondem apenas a hora e minutos ou se há segundos sobrando
            {
                printf(", %d segundos\n", segundos); // Em caso positivo, o programa irá imprimir os segundos restantes
            }
        }
    }
    else if (seg < 3600 && seg >= 60) // Essa condição corresponde a quando o número digitado não chega a completar o valor de, no mínimo, 1 hora
    {
        minutos = seg / 60;
        resto3 = seg % 60;
        segundos = resto3;
        printf("%d minutos", minutos);
        if (resto3 > 0)
        {
            printf(", %d segundos", segundos);
        }
    }
    else // Se o valor digitado não chega nem a completar 1 minuto, é feita a impressão dele mesmo
    {
        printf("%d segundos", seg);
    }
}