#include <stdio.h>

//Lê a string
void read(*str);
void inverter(char *str);




int main() {
    char str[10001];
    read(char *str);

    printf("%s\n", str);

}

void read(*str){
    int i;
    while(0){
        scanf("%s", &str[i]);
        if(str[i] == '\0') break;
    }
}

void inverter(char *str) {
    int i, j;
    char temp;

    scanf("%s", str);

    for(i = 0, j = i + 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("%s\n", str);
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