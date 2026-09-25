#include <stdio.h>

void inverter(char *str);



int main() {
    char str[10001];
    int n[20];

    scanf("%s", str);

    while(1) {
        scanf("%d", n);
        if(n == 0 ) {
            break;
        }
    }
    printf("%ls", n);

    return 0;
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

    printf("%s", str);
}