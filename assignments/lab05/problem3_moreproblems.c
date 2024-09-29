#include <stdio.h>
int main(){
char key,chr,cipherchr;
printf("ENTER CHARACTER TO ENCRYPT ");
scanf(" %c",&chr);
printf("ENTER CHARACTER TO USE AS ENCRYPTION KEY ");
scanf(" %c",&key);
cipherchr = chr^key;
printf("CHARACTER AFTER ENCRYPTION IS %c\n",cipherchr);
chr = cipherchr^key;
printf("CHARACTER AFTER DECRYPTION IS %c",chr);
}