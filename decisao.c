# include <stdio.h>
int main(){
    float temperatura , umidade ;
    unsigned int estoque, estoquemin = 100;

    printf("Informe a Temperatura: \n");
    scanf("%f", &temperatura);
    printf("Informe a umidade: \n");
    scanf("%f", &umidade);
    printf("Informe o estoque: \n");
    scanf("%u", &estoque);

    if(temperatura > 30.0){
        printf("Temperatura está alta!\n");
    } else {
        printf(" Temperatura está dentro dos parametros!\n");
    }
    if (umidade > 50.0){
        printf(" Umidade Elevada: \n");
    } else{
        printf("Umidade está dentro dos paramentros!\n");
    }
    if(estoque < estoquemin){
        printf("Estoque Baixo!!!\n");
    } else{
        printf("Estoque normal!\n");
    }
    return 0;
}
