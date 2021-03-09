/*Задача 20.Движението по дълга улица на “Експрес Такси” е организирано, така че
има спирка на всеки километър. “Експрес Такси” се движи по улицата от всяка спирка
1,2,3... или 10 километра без спиране. За всеки от десетте разстояния цените са
дадени в таблица, например:
1 12 -> 12/km
2 21 -> 10.50/km
3 31 -> 10.33/km
4 40 -> 10/km
5 49 -> 9.80/km
6 58 -> 9.60/km
7 69 -> 9.90/km
8 79 -> 9.90/km
9 90 -> 10/km
10 101 -> 10.1/km
Пътник иска да пътува n (1<=n<=100) километра. Какви разстояния на пътуване трябва
да избере, така че пътуването да му излезе най-евтино, и каква е цената на цялото
пътуване? Напишете програма, която да реши проблема.
Входни данни: В първия ред от входния файл INPUT3.TXT са записани 10 цели числа,
които са цените за пътуване, съответно на 1,2,3... ,10 километра, а във втория ред е
записано само числото n.
Изходни данни: Всеки ред без последния от изходния файл OUTPUT3.TXT трябва да
съдържа две числа - дължината на маршрута и цената на билета. Цената на цялото
пътуване трябва да се запише на последния ред от изходния файл.
Примерен вход
INPUT3.TXT
12 21 31 40 49 58 69 79 90 101
15
Примерен изход
OUTPUT3.TXT
3 31
6 58
6 58
147 */
#include <stdio.h>

void printFile(FILE *stream, const char *prompt);
void fillOutputFile(FILE *from, FILE *to);

int main()
{
    FILE *fpIN = NULL;
    FILE *fpOUT = NULL;

    fpOUT = fopen("OUTPUT3.TXT", "w+");
    fpIN = fopen("INPUT3.TXT", "r");

    if (fpIN == NULL || fpOUT == NULL)
    {
        perror("Failed to open the file");
    }
    else
    {
        printFile(fpIN, "INPUT3.TXT");
    }

    fillOutputFile(fpIN, fpOUT);

    printFile(fpOUT, "OUTPUT3.TXT");

    fclose(fpIN);
    fpIN = NULL;
    fclose(fpOUT);
    fpOUT = NULL;

    return 0;
}

void printFile(FILE *stream, const char *prompt)
{
    printf("%s\n", prompt);

    fseek(stream, 0, SEEK_SET);

    int c;
    while (1)
    {
        c = fgetc(stream);

        if (feof(stream))
            break;

        printf("%c", c);
    }
}

void fillOutputFile(FILE *from, FILE *to)
{
    int trip, price;

    printf("\n");
    scanf("%d", &trip);

    fseek(from, 0, SEEK_END);
    int sizeofOneNum = ftell(from) / 10;

    int stops[10];
    int i = 0;
    int totalPrice = 0;

    while (trip > 0)
    {
        if (trip >= 6)
        {
            stops[i] = 6;
            trip -= 6;
        }
        else
        {
            stops[i] = trip;
            trip -= trip;
        }

        fseek(from, sizeofOneNum * stops[i] - 3, SEEK_SET);

        fscanf(from, "%d", &price);

        fprintf(to, "%d %d\n", stops[i], price);
        totalPrice += price;

        i++;
    }
    fprintf(to, "%d", totalPrice);
}
