#include <stdio.h>

// Write a C program that converts kilometres per hour to miles 
per hour. (1 KM = 0.621371 M)
int main() {
    float kmPerHour, milesPerHour;
    printf("Input kilometres per hour: ");
    scanf("%f", &kmPerHour);
    milesPerHour = kmPerHour * 0.621371;
    printf("%.6f miles per hour\n", milesPerHour);
    return 0;
}
//Amit Kumar 
