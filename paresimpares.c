#include <stdio.h>
#include <locale.h>

main()
{
    int num,i,par=0,impar=0;

    setlocale(LC_ALL,"");

    for(i=1;i<=10;i++){
        printf("Indique um numero: ");
        scanf("%d",&num);

        if (num%2==0) {
            par=par+1;
        }
        else {
            impar=impar+1;
        }

    }
    printf("Pares = %d\n",par);
    printf("Impares = %d\n",impar);
}
