#include <stdio.h>
int main() {
    int totalMinutes, hours, minutes;
    printf("input total minutes: ");
    scanf("%d", &totalMinutes);
    hours = totalMinutes / 60;
    minutes = totalMinutes % 60;
    printf("%02d : %02d\n", hours, minutes);
    return 0;
}
//Amit Kumar 
