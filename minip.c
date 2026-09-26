#include <stdio.h>

int tamanhostr(char *str); //calcula o tamanho da string
void inverter(char *str);
void deslocar(char *str, int n);
void trocarParesImpares(char *str);
void inverterCaixa(char *str); //transforma maiúsculo em minúsculo e vice versa
void rotacionar(char *str, int n); //fazer scanf na função main e apagar na função void
void trocarMetades(char *s);



int main() {
    char str[10001];
    int operacao, n;

    scanf(" %s", str);
    tamanhostr(str);

    while(1){
        scanf("%d", &operacao);
        if(operacao == 1){
            inverter(str);
        } else if(operacao == 2){
            scanf("%d", &n);
            deslocar(str, n);
        } else if(operacao == 3){
            trocarParesImpares(str);
        } else if(operacao == 4){
            inverterCaixa(str);
        } else if(operacao == 5){
            scanf("%d", &n);
            rotacionar(str, n);
        } else if(operacao == 6){
        trocarMetades(str);
        } else if(operacao == 0 || operacao < 0 || operacao > 6) break;
    }
    printf("%s\n", str);

    return 0;
}   



int tamanhostr(char*str) {
    int tam = 0;
    while(str[tam] != 0){
        tam++;
    }
    return tam;
}



void inverter(char *str) {
    int tam = tamanhostr(str);
    int i;
    char stringTemporaria;
    for(i = 0; i<tam/ 2; i++) {
        stringTemporaria = str[i];
        str[i] = str[tam - 1 - i];
        str[tam - 1 - i] = stringTemporaria;
    }

}

void deslocar(char *str, int n) {
    int i;
    n = n % 26;

    for(i=0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = ((str[i] - 'a' + n) % 26) + 'a';
        } else if(str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = ((str[i] - 'A' + n) % 26) + 'A';
        } else if(str[i] >= '0' && str[i] <= '9') {
            str[i] = ((str[i] - '0' + n) % 10) + '0';
        }
    }
}

void trocarParesImpares(char *str){
    char stringTemporaria;
    int i;
    for(i=0; str[i] != '\0' && str[i+1] != '\0'; i+=2){
        stringTemporaria = str[i];
        str[i] = str[i+1];
        str[i+1] = stringTemporaria;
    }




}


void inverterCaixa(char* str) { //usei a tabela ascii :P
    int i;
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i] - 32;
        } else if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = str[i] + 32;
        }
    }
}


void rotacionar(char *str, int n) {

    int tam = tamanhostr(str);
    int i;
    char stringTemporaria[10001];

    if (tam == 0) {
        return;
    }

    if (n > 0) {

        n = n % tam;

        for (i = 0; i < tam; i++) {
            stringTemporaria[(i + n) % tam] = str[i];
        }

    } else if (n < 0) {

        n = (-n) % tam;

        for (i = 0; i < tam; i++) {
            stringTemporaria[(i - n + tam) % tam] = str[i];
        }

    } else {
        return;
    }

    stringTemporaria[tam] = '\0';

    for (i = 0; i < tam; i++) {
        str[i] = stringTemporaria[i];
    }
}

void trocarMetades(char *str) {
    int i;
    int metade = tamanhostr(str)/2; 
    int meio = metade + tamanhostr(str)%2; //pula o caractere do meio se tiver
    char stringTemporaria;
    for(i = 0; i < metade; i++) {
        stringTemporaria = str[i];
        str[i] = str[i + meio];
        str[i + meio] = stringTemporaria;
    }
}
