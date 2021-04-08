//Carolyn Visser
#include <stdio.h>

int main()
{
    
    double intAmount,intrest,addAmount;
    
    int years = -1 , n;
    do
    {
        if(intAmount < 0)
        {
            printf("Initial investment cannot be negative.\n");
        }
        printf("Enter initial investment amount : ");
        scanf("%lf" , &intAmount);
    
    } while (intAmount < 0);
    do
    {
        
        printf("Enter total years : ");
        scanf("%d" , &years);
        if(years <= 0)
        {
            printf("Years must be greater than zero.\n");
        }
    } while (years <= 0);
   
    do
    {
        if(intrest < 0)
        {
            printf("Return cannot be negative.\n");
        }
        printf("Enter return rate : ");
        scanf("%lf", &intrest);
    
    } while (intrest < 0);
   
    do
    {
        if(addAmount < 0)
        {
            printf("additional contribution cannot be negative.\n");
        }
        printf("Enter additional contribution per year: ");
        scanf("%lf" , &addAmount);
    
    } while (addAmount < 0);
    

    double newVal = intAmount ;
    double newInt ;
    printf("Year\tStart Balance\tInterest\tEnd Balance\n");
    printf("******************************************************\n");
    
    for (n = 1 ; n <= years ; n = n+1){
        printf("%d\t", n);
        if (n > 1)
        {
            newVal = newVal + addAmount  ;
        }else
        {
            newVal = newVal ;
        }
        printf("%.2lf\t" , newVal);
        newInt = newVal * (intrest /100);
        newVal = newVal + newInt;
        if (newVal < 10000)
        {
            printf("\t%.2lf\t" , newInt);
        }else
        {
            if(newInt < 10000)
            {
                printf("%.2lf\t" , newInt);
            }else
            {
                printf("%.2lf", newInt);
            }

        }
        printf("\t%.2lf\n" , newVal ) ;
    }
    return 0;
}
