#include <stdio.h>
#include <cmath>

//start networth = 1000000 price of apartment = 13000000

float stratAlice(float networth, float infliation,float pay,float salary,float index_salary,float food,float n)
{
    networth = 0;
    for(float i=0; i<n; i++)
    {
        
        networth = networth+12*((salary*index_salary)-food*infliation - pay);
        

    }
    networth = networth + 172479820;    return(networth);

}
float stratBOB(float networth, float infliation,float pay,float salary,float index_salary,float food,float n)
{
for(float i=0; i<n; i++)
    {
        
        networth = networth+12*((salary*index_salary)-food*infliation - pay);


    }
        return(networth);

    
}
int main()
{
printf("Введите начальный капитал");
float networth = int(scanf());
float bob,al;
float k;

al = stratAlice(0,1.09,150000,200000,1.09,50000,30);
printf("%f \n", al );
bob = stratBOB(0,1.09,30000,200000,1.09,50000,30);
printf("%f \n", bob );
}



