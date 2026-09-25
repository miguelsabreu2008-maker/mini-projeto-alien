#include <stdio.h>

//Lê a string
void read(*str);
void inverter(char *str);




int main() {
    char str[10001];
    read(*str);

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