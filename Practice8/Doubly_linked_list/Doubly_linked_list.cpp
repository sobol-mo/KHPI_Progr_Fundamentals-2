/*
Динамічні структури даних.
Двозв'язний список: Приклад 3
Створити структуру двозв'язного списку. Написати
наступні функції:
- перегляд з початку списку;
- перегляд з кінця списку;
- видалення вузла з заданими даними;
- перегляд результату з початку списку;
- видалення списку.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <Windows.h>
#include <iostream>

struct spis
{
    char data[20];
    // v1 – покажчик на попередню структуру
    struct spis* v1; 
    // v2 – покажчик на наступну структуру
    struct spis* v2; 
}; 
void create(void); // створення
void list(spis*); // перегляд
void del(void); // видалення
// покажчики на початок і кінець списку
struct spis* head, * tail; 
void main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    system("cls");
    create();
    list(head); // перегляд з початку списку
    list(tail); // перегляд з кінця списку
    del();      // видалення вузла з заданими даними
    list(head); // перегляд результату з початку списку
    free(head); // видалення списку 
}
void create(void)
{
    spis* p, * pred;
    pred = NULL;
    do {
        p = (spis*)malloc(sizeof(spis));
        printf("Прізвище:  "); gets_s(p->data);
        p->v1 = pred;
        if (pred != NULL)
            pred->v2 = p;
        else
            head = p;
        pred = p;
        puts(" Закінчити - <esc>");
    } while (_getch() != 27);
    tail = p;
    tail->v2 = NULL;
}
void list(spis* p)
{
    if (p == head)
        while (p != NULL)
        {
            puts(p->data);
            p = p->v2;
        }
    else if (p == tail)
        while (p != NULL)
        {
            puts(p->data);
            p = p->v1;
        }
    else
        puts("Неправильна адреса");
    _getch();
}
void del(void)
{
    // f[20] – Рядок для видаляємого прізвища
    spis* p, * temp; char f[20]; 
    system("cls");
    printf("Прізвище: "); gets_s(f);
    p = head;
    while (p != NULL)
    {
        // якщо знайдено вказане прізвище
        if (strcmp((p->data), f) == 0) 
        {
            // якщо знайдений запис - перший
            if (p == head) 
            {
                head = p->v2;
                head->v1 = NULL;
                free(p);
                p = head;
            }
            //  якщо знайдений запис - останній
            else if (p == tail) 
            {
                tail = p->v1;
                tail->v2 = NULL;
                free(p);
                p = tail;
            }
            else  // видалення з середини списку
            {
                p->v2->v1 = p->v1;
                p->v1->v2 = p->v2;
                temp = p;
                p = p->v2;
                free(temp);
            }
        }
        // якщо задане прізвище не знайдено
        // просуваємося по списку
        else 
            p = p->v2;
    }
}
