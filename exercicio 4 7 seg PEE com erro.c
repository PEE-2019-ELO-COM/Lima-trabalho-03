#include<stdio.h>
#include<string.h>
#include <stdlib.h>
int main(void){

char ent[5]="0000";
char seg[8]="0000000";
while(1){
printf("Entre com o valor binario DCBA:\n");
scanf("%s", ent);
char A=ent[3],B=ent[2],C=ent[1],D=ent[0];
if((C)||(A)||(B&&D)||((!B)&&(!D)))
    seg[0]='1';
    else
        seg[0]='0';
if(((!C)&&(!D))||(!B)||(C&&D))
    seg[1]='1';
        else
        seg[1]='0';
if((D || B)||(!C))
    seg[2]='1';
        else
        seg[2]='0';
if((A)||((!B)&&(!C))||(C&&(!B))||(C&&(!D))||((B&&(!C))&&D))
    seg[3]='1';
        else
        seg[3]='0';
if(((!B)&&(!D))||((C)&&(!D)))
    seg[4]='1';
        else
        seg[4]='0';
if((A)||((!C)&&(!D))||(B&&(!C))||(B&&(!D)))
    seg[5]='1';
        else
        seg[5]='0';
if(A||(C&&(!D))||(B&&(!C))||(B&&(!C)))
    seg[6]='1';
        else
        seg[6]='0';

printf("A saida sera o segmento abcdefg: %s\n", seg);
}
return 0;
}
