#include <locale.h>
#include <stdio.h>
#include <math.h>

#define _USE_MATH_DEFINES


int def_1();
int def_2();
int def_3();


int main(){
    setlocale(LC_ALL, ".UTF8");

    // def_1();
    // def_2();
    def_3();

    return 0;
}


int def_1(){
    int count;
    char ch, ch2;

    puts("Сколько");    
    scanf("%d", &count);

    puts("Первый");
    scanf(" %c", &ch);

    puts("Второй");
    scanf(" %c", &ch2);

    for (int start = 1; start <= count; start++) {
        putchar(ch);
    }
    puts("\n");

    putchar('+');
    for (int i = 1; i <= count; i++) {
        putchar(ch);
    }
    putchar('+');
    puts("\n");

    int half = count / 2;

    for (int i = 1; i <= half; i++) {
        putchar(ch);
    }
    for (int i = half + 1; i <= count; i++) {
        putchar(ch2);
    }
    puts("\n");

    for (int i = 1; i <= count; i++) {
        putchar(ch);
        putchar('!');
    }

    return 0;
}

int def_2(){
    int m, n;
    int s = 0;

    scanf("%d %d", &m, &n);

    for (int i = m; i <= n; i++){
        s += i;
    }
    printf("%d\n", s);

    int res = 1;

    for (int i = 0; i <= n; i++, res*=2){
        printf("2^%d=%d\nРезультат: %.1fK\n", i, res, res / 1024.0);
    }


    return 0;
}


int def_3(){
    printf("y = x^2 - cos(x + 1)^2\n");
    printf("[0.1; 2.2]\n");

    double step;
    printf("Шаг\n");
    scanf("%lf", &step);

    printf("\n------------------\n");
    printf("|   x    |  f(x)  |\n");
    printf("------------------\n");

    for (double x = 0.1; x <= 2.2; x += step) {
        double y = pow(x, 2) - pow(cos(x + 1), 2);

        printf("| %6.2lf | %6.2lf |\n", x, y);
    }
    printf("------------------\n");

    return 0;
}


