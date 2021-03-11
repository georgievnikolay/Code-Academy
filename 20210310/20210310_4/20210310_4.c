/*Пренапишете Задача 2 от 05.03.2021г за Пощенските такси на дадена
куриерска фирма се определят според тежестта на пратките (с точност до цял грам) и обема,
както е показано в таблицата.
При влизане в някоя функция отваряте файл за писане и при успешно излизане от функцията
записвате във файла function_name() success . Това го правим за всички функции. Ако има
някаква грешка записваме грешката във файла и името на функцията.*/
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>

#define PRICE_TAGS 9

const float weightPrices[2][PRICE_TAGS] = {
    {20, 50, 100, 200, 350, 500, 1000, 2000, 3000},
    {0.46, 0.69, 1.02, 1.75, 2.13, 2.44, 3.20, 4.27, 5.03}};

const float volumePrices[2][PRICE_TAGS] = {
    {600, 500, 400, 250, 150, 100, 50, 10, 1},
    {5.79, 4.89, 3.11, 1.50, 0.56, 0.33, 0.22, 0.11, 0.01}};

typedef struct
{
    int weight;
    int volume;
    float price;
} shipment;

int numberOfShipments;

float calculateSeparately(shipment *orderArray);
float calculateTogether(shipment *orderArray);
void enterValidNumber(int min, int max, int *number, char *promt);
void betterChoice(float *separate, float *together, shipment *orderArray);

FILE *fp = NULL;

int main()
{
    if ((fp = fopen("log.txt", "w")) == NULL)
    {
        perror("Failed to open file!");
    }

    printf("Please enter how many shipments you would like to make: ");
    scanf("%d", &numberOfShipments);

    shipment *order = (shipment *)malloc(numberOfShipments * sizeof(shipment));
    if (NULL == order)
    {
        printf("Allocation memory error!\n");
        exit(1);
    }

    for (int i = 0; i < numberOfShipments; i++)
    {
        printf("Enter details for shipment No %d:\n", i + 1);
        enterValidNumber(1, 3000, &order[i].weight, "Weight:");

        printf("Volume: ");
        scanf("%d", &order[i].volume);
        order[i].price = 0.0;
    }

    float separatePrice = calculateSeparately(order);
    float togetherPrice = calculateTogether(order);

    betterChoice(&separatePrice, &togetherPrice, order);

    free(order);
    order = NULL;
    fclose(fp);
    fp = NULL;

    return 0;
}
void betterChoice(float *separate, float *together, shipment *orderArray)
{
    printf("For orders with");
    for (int i = 0; i < numberOfShipments; i++)
    {
        printf(" weight %d and volume %d ", orderArray[i].weight, orderArray[i].volume);
    }
    if (*separate > *together)
    {
        printf("is better to ship together since the price is: %.2f\n", *together);
    }
    else
    {
        printf("is better to ship separately since the price is: %.2f\n", *separate);
    }

    if (errno == 0)
    {
        fprintf(fp, "%s -> %d : %s\n", __func__, errno, "Succsessfull");
    }
    else
    {
        fprintf(fp, "%s -> %d : %s\n", __func__, errno, strerror(errno));
    }
    return;
}

void enterValidNumber(int min, int max, int *number, char *promt)
{
    do
    {
        printf("%s", promt);
        scanf("%d", number);
    } while (*number < min || *number > max);

    if (errno == 0)
    {
        fprintf(fp, "%s -> %d : %s\n", __func__, errno, "Succsessfull");
    }
    else
    {
        fprintf(fp, "%s -> %d : %s\n", __func__, errno, strerror(errno));
    }
}

float calculateSeparately(shipment *orderArray)
{
    float weightPrice, volumePrice, totalSeparately = 0.0;
    int flagVolume, flagWeight;

    for (int i = 0; i < numberOfShipments; i++)
    {
        flagVolume = 0, flagWeight = 0;
        for (int j = 0; j < PRICE_TAGS; j++)
        {
            if ((orderArray[i].weight <= weightPrices[0][j]) && (flagWeight == 0))
            {
                weightPrice = weightPrices[1][j];
                flagWeight = 1;
            }

            if ((orderArray[i].volume > volumePrices[0][j]) && (flagVolume == 0))
            {
                volumePrice = volumePrices[1][j];
                flagVolume = 1;
            }
        }
        orderArray[i].price = weightPrice + volumePrice;
        totalSeparately += orderArray[i].price;
    }

    if (errno == 0)
    {
        fprintf(fp, "%s -> %d : %s\n", __func__, errno, "Succsessfull");
    }
    else
    {
        fprintf(fp, "%s -> %d : %s\n", __func__, errno, strerror(errno));
    }

    return totalSeparately;
}

float calculateTogether(shipment *orderArray)
{
    float weightPrice = 0.0, volumePrice = 0.0, totalTogether = 0.0;
    int totalWeight = 0, totalVolume = 0;

    for (int i = 0; i < numberOfShipments; i++)
    {
        totalWeight += orderArray[i].weight;
        totalVolume += orderArray[i].volume;
    }

    /*Since max weight is 3000 we have to see how many time we exceed that weight so we cam add it properly to the price and the new total weight is the remaining*/
    int countMaxWeightTimes = 0;
    if (totalWeight > 3000)
    {
        countMaxWeightTimes = totalWeight / 3000;
        totalWeight = totalWeight % 3000;
    }
    weightPrice += countMaxWeightTimes * weightPrices[1][PRICE_TAGS - 1];

    int flagWeight = 0, flagVolume = 0;
    for (int j = 0; j < PRICE_TAGS; j++)
    {
        if ((totalWeight <= weightPrices[0][j]) && (flagWeight == 0))
        {
            weightPrice += weightPrices[1][j];
            flagWeight = 1;
        }

        if ((totalVolume > volumePrices[0][j]) && (flagVolume == 0))
        {
            volumePrice = volumePrices[1][j];
            flagVolume = 1;
        }
    }

    totalTogether = weightPrice + volumePrice;

    if (errno == 0)
    {
        fprintf(fp, "%s -> %d : %s\n", __func__, errno, "Succsessfull");
    }
    else
    {
        fprintf(fp, "%s -> %d : %s\n", __func__, errno, strerror(errno));
    }

    return totalTogether;
}