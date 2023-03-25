#include <stdio.h>
#include <ctype.h>


int main(){

    while (1){
        char unit;
        float temp;

        printf("\nIs the temp in (F) or (C): ");
        scanf("%1c", &unit);
        unit = toupper(unit);
        switch(unit){
        case 'C':
            printf("\nEnter the temp in celsius: ");
            scanf("%f", &temp);
            temp = (temp * 9 / 5) + 32;
            printf("\nThe temp in Farenheit is: %.1f", temp);
            break;
        
        case 'F':
            printf("\nEnter the temp in farenheit: ");
            scanf("%f", &temp);
            temp = ((temp -32) * 5) / 9;
            printf("The temp in celsius is: %.1f", temp);
            break;

        default:
            break;
    }
    }
    return 0;

}



