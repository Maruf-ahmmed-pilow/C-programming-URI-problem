#include<stdio.h>
int main()
{
    int coad_of_a_product1,number_of_unit_product1,code_of_a_product2,number_of_unit_product2;
    double prise_of_a_product1,prise_of_a_product2,ammount;
    scanf("%d %d %lf",&coad_of_a_product1,&number_of_unit_product1,&prise_of_a_product1);
    scanf("%d %d %lf",&code_of_a_product2,&number_of_unit_product2,&prise_of_a_product2);
    ammount =(number_of_unit_product1*prise_of_a_product1)+(number_of_unit_product2*prise_of_a_product2);
    printf("VALOR A PAGAR: R$ %0.2lf\n",ammount);

    return 0;


}
