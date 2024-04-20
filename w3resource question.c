#include <stdio.h>
int main()
{
    int years,weeks,days;
    printf("Enter the number of Days you need: ");
    scanf("%d",&days);
    years=days/365;
    weeks=(days % 365)/7;
    days=days-((years*365)+(weeks*7));
    printf("Year=%d\n",years);
    printf("weeks=%d\n",weeks);
    printf("days=%d",days);



    return 0;
}
