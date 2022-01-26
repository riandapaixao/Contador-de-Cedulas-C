#include <stdio.h>
 
int main() {
 
 int valor, troco, duzentos, cem, cinquenta, vinte, dez, 
 cinco, dois, um;

scanf("%d",&valor);

troco = valor;

duzentos = troco / 200;
troco = troco - (duzentos * 200);
cem = troco / 100;
troco = troco - (cem *100);
cinquenta = troco / 50;
troco = troco - (cinquenta * 50);
vinte = troco / 20;
troco = troco - (vinte * 20);
dez = troco /10;
troco = troco -(dez * 10);
cinco = troco / 5;
troco = troco - (cinco * 5);
dois = troco / 2;
troco = troco - (dois * 2);

printf("%d\n",valor);
printf("%d notas(s) de R$ 200,00\n", duzentos);
printf("%d nota(s) de R$ 100,00\n",cem);
printf("%d nota(s) de R$ 50,00\n",cinquenta);
printf("%d nota(s) de R$ 20,00\n",vinte);
printf("%d nota(s) de R$ 10,00\n",dez);
printf("%d nota(s) de R$ 5,00\n",cinco);
printf("%d nota(s) de R$ 2,00\n",dois);
printf("%d nota(s) de R$ 1,00\n",troco);
 
    return 0;
}