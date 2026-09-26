#include <stdio.h>

int tamanhostr(char*str); //calcula o tamanho da string
void inverter(char *str);
void deslocar(char *str, int n);


int main() {
    char str[10001];

    scanf("%s", str);
    inverter(str);
    deslocar(str, n);

    printf("%s\n", str);

    return 0;
}

int tamanhostr(char*str) {
    int tam = 0;
    while(str[tam] != '\0'){
        tam++;
    }
    return tam;
}


void inverter(char *str) {
    int tam = tamanhostr(str);
    int i;
    char temp;
    for(i = 0; i<tam/ 2; i++) {
        temp = str[i];
        str[i] = str[tam - 1 - i];
        str[tam - 1 - i] = temp;
    }

}

void deslocar(char *str, int n) {
    int i;
    scanf("%d", &n);
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
