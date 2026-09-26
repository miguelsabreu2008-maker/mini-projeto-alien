#include <stdio.h>

//Lê a string
int tamanhostr(char*str); //calcula o tamanho da string
void read(char *str); 
void inverter(char *str);

int tamanhostr(char*str) {
    int tam = 0;
    while(str[tam] != 0){
        tam++;
    }
    return tam;
}

void read(char *str){ //eu acho que essa função é meio desnecessária, pq o %s já lẽ a string até o /0, eu tinha esquecido disso
    int i;
    for(i = 0; str[i] == '\0'; i++) {
        scanf("%s", &str[i]);
    }
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

int main() {
    char str[10001];

    read(str);

    inverter(str);

    printf("%s\n", str);

    return 0;
}


