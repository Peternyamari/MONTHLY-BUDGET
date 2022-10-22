#include <stdio.h>
#include <stdlib.h>

int main()
{
    char item1,item2,item3,item4,item5,item6[20];
    double cost1,cost2,cost3,cost4,cost5,cost6;
    double quantity1,quantity2,quantity3,quantity4,quantity5,quantity6;
    double salary;
    double total_costs;

    printf("ENTER ITEM 1:");
    scanf("%s" ,&item1);

    printf("ENTER COST:");
    scanf("%lf" ,&cost1);
    printf("ENTER QUANTITY:");
    scanf("%lf",&quantity1);
    printf("TOTAL CASH FOR ITEM1: %f\n",cost1*quantity1);

    printf("ENTER ITEM 2:");
    scanf("%s" ,&item2);

    printf("ENTER COST:");
    scanf("%lf",&cost2);
    printf("ENTER QUANTITY:");
    scanf("%lf",&quantity2);
    printf("TOTAL CASH FOR ITEM2: %f\n",cost2*quantity2);

    printf("ENTER ITEM 3:");
    scanf("%s" ,&item3);

    printf("ENTER COST:");
    scanf("%lf",&cost3);
    printf("ENTER QUANTITY:");
    scanf("%lf",&quantity3);
    printf("TOTAL CASH FOR ITEM3: %f\n",cost3*quantity3);

    printf("ENTER ITEM 4:");
    scanf("%s" ,&item4);

    printf("ENTER COST:");
    scanf("%lf",&cost4);
    printf("ENTER QUANTITY:");
    scanf("%lf",&quantity4);
    printf("TOTAL CASH FOR ITEM4: %f\n",cost4*quantity4);

    printf("ENTER ITEM 5:");
    scanf("%s" ,&item5);

    printf("ENTER COST:");
    scanf("%lf",&cost5);
    printf("ENTER QUANTITY:");
    scanf("%lf",&quantity5);
    printf("TOTAL CASH FOR ITEM5: %f\n",cost5*quantity5);

    printf("ENTER ITEM 6:");
    scanf("%s" ,&item6);

    printf("ENTER COST:");
    scanf("%lf",&cost6);
    printf("ENTER QUANTITY:");
    scanf("%lf",&quantity6);
    printf("TOTAL CASH FOR ITEM6: %f\n",cost6*quantity6);

    printf("TOTAL COSTS :  %f\n" ,cost1*quantity1+cost2*quantity2+cost3*quantity3+cost4*quantity4+cost5*quantity5+cost6*quantity6);
    printf("ENTER YOUR CASH/SALARY: ");
    scanf("%lf" ,&salary);
    printf("ENTER COSTS :");
    scanf("%lf" ,&total_costs);
    printf("CHANGE :  %f" ,salary-total_costs);
    return 0;
}
