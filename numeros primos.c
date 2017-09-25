//Trabalho numeros primos
//Thais de Sousa Rocha
//matrícula:0050014759



#include <stdio.h>
#include <stdlib.h>

         int main()
         {
             int num;
             int i;
             int op;
do { 
             int pri = 0;
             printf("\nOla meu nome eh Thais Rocha e vou calcular numeros primos\n");
             
             do{
             printf("\nEntre com um numero positivo:");
             scanf("%d", &num);
}             while(num<=0);

for (i=1; i <= num; i++){
    if (num % i == 0)
{
    pri++;
}

}

if (pri==2)
   printf("Esse numero eh primo");       
   
   else
          printf("Esse numero nao eh primo");  
          
   printf("\nDeseja Continuar? 1-Sim 2-Nao:");
   scanf("%d", &op);}while (op==1);
   
   printf("\Obrigada ate a proxima!");
   
   system("pause");
   return 0;
}
