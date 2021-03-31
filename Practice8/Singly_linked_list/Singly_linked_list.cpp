/*
Динамічні структури даних.
Однозв'язний список: Приклад 1
Створити структуру однозв'язного списку. Написати
функцію для створення та перегляду однозв'язного 
списку. 
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <Windows.h>
#include <iostream>

struct spis
{
	char data[20];
	struct spis* next;
};
//функція створення списку (повертає адресу голови)
struct spis* create(void); 
// функція перегляду списку
void list(spis* head); 
// глобальна змінна, адреса голови списку
struct spis* head; 

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	system("cls");

	head = create();
	list(head);
	free(head);
}
struct spis* create(void)
{
	// pred - покажчик на попередню структуру
	spis* p, * pred; char c; 
	// виділяємо пам'ять для першого запису
	head = pred = p = (spis*)malloc(sizeof(spis)); 
	printf("  fam: "); scanf("%s", p->data);
	do {
		p = (spis*)malloc(sizeof(spis));
		printf("\n  fam: "); scanf("%s", p->data);
		// посилання з попереднього запису на поточну
		pred->next = p; 
		// збереження адреси поточного
		// запису у поле попереднього
		// поточний запис стає попереднім
		pred = p;	
		printf(" Закінчити? y/n  ");
		c = _getch();
	} while (c != 'y');
	p->next = NULL;
	return head;
}
void list(spis* head)
{
	spis* p;
	p = head;
	while (p != NULL) // поки не кінець списку
	{
		printf("\n  fio: %s", p->data);
		p = p->next; // просування по списку
	}
	//_getch();
}