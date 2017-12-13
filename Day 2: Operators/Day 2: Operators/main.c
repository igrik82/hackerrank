#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int total_cost(double mealCost, double tipPercent, double taxPercent);

int main() {
    double mealCost, tipPercent, taxPercent;
    
    scanf("%lf %lf %lf",&mealCost, &tipPercent, &taxPercent);
    printf("The total meal cost is %d dollars.", total_cost(mealCost, tipPercent, taxPercent));
}

int total_cost(double mealCost, double tipPercent, double taxPercent){
    double totalCost;
    totalCost = round((mealCost + (mealCost * tipPercent / 100) + (mealCost *  taxPercent / 100)));
    return totalCost;
}
