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

    if(temperatura >= 25.0 && temperatura <= 35.0 && umidade < 40.0){
        printf("Temperatura e umidade em boas condições!\n");
   } else {
        printf("Verificar temperatura e umidade\n");
   }
    if(estoque < estoquemin){
        printf("Estoque Baixo!!!\n");
    } else{
        printf("Estoque normal!\n");
    }
    return 0;
}
