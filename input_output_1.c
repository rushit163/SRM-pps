#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float kms,mtrs,fts,ins,cms;
    scanf("%f",&kms);
    mtrs=kms*1000;
    fts=kms*3280.84;
    ins=kms*39370.1;
    cms=kms*100000;
    printf("%0.2f m\n%0.2f ft\n%0.2f in\n%0.2f cm\n",mtrs,fts,ins,cms); 
    return 0;
}
