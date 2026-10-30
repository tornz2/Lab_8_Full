#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, ".UTF8");


    int N;

    printf("N:\n");
    scanf("%d", &N);

    double sum = 0.0;
    int plus_or_minus = 1;

    for (int i = 1; i <= N; i++) {
        sum += plus_or_minus * (1.0 + i / 10.0);
        plus_or_minus *= -1; 
    }
    printf("Результат суммы = %lf\n", sum);

    return 0;
}