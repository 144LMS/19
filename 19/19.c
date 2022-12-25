#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <locale.h>

struct player {
	char sname[10];
	char dataa[20];
	char place[20];
	char amplua[15];
	int games;
	int ycard;
};


void task1() {
	char fname[9] = "bub.txt";
	FILE* ogo;
	if ((ogo = fopen(fname, "a")) == NULL) printf("ошибка открытия файла");
	fprintf(ogo, " %4.2f\n", 12.56);
	fclose(ogo);
}


void task2() {
	char fname[9] = "temp.txt";
	FILE* ogo;
	int chek = 0;
	int flag = 0;
	while (flag == 0) {
		puts("Что нужно сделать?\n1-записать в новый файл\n2-дозаписать в существующий\n3-завершить\n");
		scanf("%d", &chek);
		switch (chek) {
		case 1: {
			ogo = fopen(fname, "w");
			float to, p;
			puts("Введите шаг функции");
			scanf("%f", &p);
			for (to = 1.0; to <= 3.001; to += p) {
				fprintf(ogo, "%-4.2f %-5.2f\n", to, pow(to, 2) - pow(cosf(3.14 * to), 2));
			}
			fclose(ogo);
			break;
		}
		case 2: {
			ogo = fopen(fname, "a");
			float to, p;
			puts("Введите шаг функции");
			scanf("%f", &p);
			for (to = 1.0; to <= 3.001; to += p) {
				fprintf(ogo, "%-4.2f %-5.2f\n", to, pow(to, 2) - pow(cosf(3.14 * to), 2));
			}
			fclose(ogo);
			break;
		}
		case 3: {
			flag = 1;
			break;
		}
		default:
			puts("ERROR");
		}
	}
}
void task3() {
	FILE* ogo;
	char fname[11] = "temppo.txt";
	ogo = fopen(fname, "w");
	srand(time(0));
	int flag = 0;
	struct player p[5];
	sprintf(p[0].sname, "Воронов");
	sprintf(p[0].dataa, "03.05.1991");
	sprintf(p[0].place, "Подольск");
	sprintf(p[0].amplua, "пророк");
	p[0].games = ((float)rand() / RAND_MAX) * (49 - 0) + 1;
	p[0].ycard = ((float)rand() / RAND_MAX) * (5 - 0);

	sprintf(p[1].sname, "Насонов");
	sprintf(p[1].dataa, "18.04.1996");
	sprintf(p[1].place, "Белгород");
	sprintf(p[1].amplua, "брошюра");
	p[1].games = ((float)rand() / RAND_MAX) * (49 - 0) + 1;
	p[1].ycard = ((float)rand() / RAND_MAX) * (5 - 0);

	sprintf(p[2].sname, "Фролов");
	sprintf(p[2].dataa, "21.12.2003");
	sprintf(p[2].place, "Алмата");
	sprintf(p[2].amplua, "крекер");
	p[2].games = ((float)rand() / RAND_MAX) * (49 - 0) + 1;
	p[2].ycard = ((float)rand() / RAND_MAX) * (5 - 0);

	sprintf(p[3].sname, "Пырков");
	sprintf(p[3].dataa, "30.07.1994");
	sprintf(p[3].place, "Мурманск");
	sprintf(p[3].amplua, "крен");
	p[3].games = ((float)rand() / RAND_MAX) * (49 - 0) + 1;
	p[3].ycard = ((float)rand() / RAND_MAX) * (5 - 0);

	sprintf(p[4].sname, "Свинотов");
	sprintf(p[4].dataa, "01.04.2004");
	sprintf(p[4].place, "Липецск");
	sprintf(p[4].amplua, "рефрактор");
	p[4].games = ((float)rand() / RAND_MAX) * (49 - 0) + 1;
	p[4].ycard = ((float)rand() / RAND_MAX) * (5 - 0);

	for (int i = 0; i < 5; i++) {
		fprintf(ogo, "%s\n%s\n%s\n%s\n%d\n%d\n\n\n", p[i].sname, p[i].dataa, p[i].place, p[i].amplua, p[i].games, p[i].ycard);
	}
	fclose(ogo);
}
void main() {
	setlocale(LC_ALL, "ru_RU");
	task1();
}