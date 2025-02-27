#include <stdio.h>

int menu(){
    
    int i;
    
    for (i = 0; i <= 1; i++){
        printf("*****************\n");
    }
        printf("** Calculadora **\n");       
    for (i = 0; i <= 1; i++){
        printf("*****************\n");
    }
    return 0;
}
int main() {
    
    float n1,n2;
    int operacao,decisao;
    
    menu();
    do {
        
    printf("\nSelecione a operacao desejada:\n\n");

    printf("1 - Soma | 2 - Subtracao | 3 - Multiplicacao | 4 - Divisao\n");
    
        do {

        scanf("%i",&operacao);
            if(operacao < 1 || operacao > 4){
                printf("Por favor, digite uma operacao valida.\n");
            }

        }   while(operacao < 1 || operacao > 4);

    if (operacao == 1){
        printf("Operacao selecionada: 1 - Soma\n\n");
    }else if (operacao == 2){
        printf("Operacao selecionada: 2 - Subrtracao\n\n");
    }else if (operacao == 3){
        printf("Operacao selecionada: 3 - Multiplicacao\n\n");
    }else if (operacao == 4){
        printf("Operacao selecionada: 4 - Divisao\n\n");
    }
    
    printf("Digite o primeiro numero:\n");
    scanf("%f",&n1);
    
    printf("Digite o segundo numero:\n");
    scanf("%f",&n2);
    
    if (operacao == 1) {
        printf("A soma dos numeros e:%f",(n1+n2));
    }else if (operacao == 2) {
        printf("A subtracao dos numeros e:%f",(n1-n2));
    }else if (operacao == 3) {
        printf("A multiplicacao dos numeros e:%f",(n1*n2));
    }else if (operacao == 4) {
        if ((n1 != 0) || (n2 != 0)) {
            printf("A divisao dos numeros e:%.2f",(n1/n2));
        } else {
            printf("Nao e possivel realizar divizao por zero");
        }
    } 
    printf("\n\nPara realizar outra operacao digite 1.\nPara fechar digite 0.\n");
    scanf("%i",&decisao);
    
    if (decisao == 1){
        printf("Ok, vamos denovo!\n");
    }else if (decisao == 0) {
        printf("Programa encerrado!");
    }else if (decisao < 0 || decisao > 1){
        printf("Por favor, digite 1 ou 0.");
    }
    }   while (decisao == 1);
    return 0;
}