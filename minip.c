int tamanhostr(char *str); //calcula o tamanho da string
void inverter(char *str);
void deslocar(char *str, int n)
void inverterCaixa(char *str); //transforma maiúsculo em minúsculo e vice versa
void trocarMetades(char *s);



int main() {
    char str[10001];

    scanf("%s", str);

    inverter(str);
    deslocar(str, n);
    inverterCaixa(str);
    trocarMetades(str);
    printf("%s\n", str);

    return 0;
}

void read(char *str); 

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

void trocarMetades(char *str) {
    int i;
    int metade = tamanhostr(str)/2; 
    int meio = metade + tamanhostr(str)%2; //pula o caractere do meio se tiver
    char temp;
    for(i = 0; i < metade; i++) {
        temp = str[i];
        str[i] = str[i + meio];
        str[i + meio] = temp;
    }
}
