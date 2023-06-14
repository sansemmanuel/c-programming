#include <stdio.h>
#include <stdlib.h>
int main(){
    int caja_1 [7];
    int caja_2 [7];
    int i, total_sales = 0, worst_day = 0, best_day = 0;
    float cash_percentaje = 0.0, debit_credit_percentaje = 0.0, percentaje;
    for(int i = 0; i < 7;i++)
    {
        printf("Type cash results for day:%d\n",i + 1);
        scanf("%d",&caja_1[i]);
    }
    for(int i = 0; i < 7;i++)
    {
        printf("type the amount of debit/credit sales for caja 2 day:%d\n",i + 1);
        scanf("%d",&caja_2[i]);

        total_sales += caja_1[i] + caja_2[i];
        if (caja_1[i]< caja_1[worst_day])
        worst_day = i;
    
            {
                if (caja_1[i] + caja_2[i] > 
                       caja_1[best_day] + caja_2[best_day])
                best_day = i;
            }
    }
    cash_percentaje = ((float)total_sales-caja_2[best_day])/total_sales*100;
    debit_credit_percentaje = ((float)total_sales-caja_2[best_day])/total_sales*100;
printf("Worst day: %d\n", worst_day + 1); 
printf("Best day: %d\n", best_day + 1); 
printf("Cash sales percentage: %.2f%%\n", cash_percentaje); 
printf("Debit/credit sales percentage: %.2f%%\n", debit_credit_percentaje); 
     return 0; 
}