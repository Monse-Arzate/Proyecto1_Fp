#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int  conv_binario_decimal(char *binario[]);

int main(){
    int num;
    char binario[100];

    scanf("%s", &binario);
    num = conv_binario_decimal(binario);

    printf("%d\n", num);
    return 0; 
}

int  conv_binario_decimal(char *binario[])
{
    int num = 0, pot = 0;
    for(int i = strlen(binario)-1; i>=0; i--){
        if(binario[i]=='1') 
            num= num + pow(2, pot);
        pot = pot + 1;
    } 
    return num;
    
