#include <stdio.h>
#include <locale.h>

int fatorial(int x){
    int i, f=1;
    for (i=1; i <= x; i++){
        f = f * i;
    }
    return f;
}
int main(){
    setlocale(LC_ALL, "portuguese");
    int n;
    printf("Digite um valor inteiro :");
    scanf("%i", &n);
    if (n>=0){
        printf("fatorial de %i é %i",n, fatorial(n));
    }
    else{
        printf("não é possivel calcular o fatorial de numero negativo.");
    }
    return 0;
}