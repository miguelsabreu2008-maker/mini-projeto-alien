#include <stdio.h>





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