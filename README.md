# Лабораторная работа №8
---

## 1. Вариант

**Вариант 5**

---

## 2. Условие задачи

![Условие задачи](sourse/lab8_.png)

---

## 3. Блок-схема

* **Блок-схема:**
  <p align="center">
  <img src="sourse/Lab8.drawio.svg" alt="Main:" width="400">
</p>

---

## 4. Реализация программы

```c
#include <locale.h>
#include <stdio.h>


int def_1(int size, char part);
int def_2(int size, char part);
int def_3(int size, char part);
int def_4(int size, char part);


int main() {
    setlocale(LC_ALL, ".UTF8");


    int size;
    char part;

    printf("Символ:\n");
    scanf("%c", &part);

    printf("Размер треугольника\n");
    scanf(" %d", &size);
    puts("\n");

    def_1(size, part);
    def_2(size, part);
    def_3(size, part);
    def_4(size, part);


    return 0;
}


int def_1(int size, char part) {
    //Скат вправо
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%c ", part);
        }
        printf("\n");
    }
    printf("\n\n");


    return 0;
}


int def_2(int size, char part) {
    //Скат влево
    for (int i = 0; i <= size; i++) {
        for (int j = size; j > i; j--){
            printf("  ");
        }
        for (int g = 0; g < i; g++) {
                printf("%c ", part);
        }
        printf("\n");
    }
    printf("\n\n");
    

    return 0;
}


int def_3(int size, char part) {
    //Скат вправо (Only контур)
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i || i == size){
                printf("%c ", part);
            } else printf("  ");
        }
        printf("\n");
    }
    printf("\n\n");


    return 0;
}


int def_4(int size, char part) {
    //Скат влево (Only контур)
    for (int i = 0; i <= size; i++) {
        for (int j = size; j > i; j--){
            printf("  ");
        }
        for (int g = 1; g <= i; g++) {
            if (g == 1 || g == i || i == size){
                printf("%c ", part);
            } else printf("  ");
        }
        printf("\n");
    }   
    printf("\n\n");


    return 0;
}
```

---

## 5. Результат работы программы

**Входные данные (контрольный пример):**
***Ввод 1***
```text
N = 9
```
***Ввод 2***
```text
N = 4
```

**Консольный вывод:**

***Вывод 1:***
```text
Сумма: 1,500000
```
***Вывод 2***
```text
Сумма: -0,200000
```
---

## 6. Информация о разработчике

*Бурыкин Александр бТИИ-262*
