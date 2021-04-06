#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

    int idade, maior;
    float contf=0, cont_intervalo=0;
    float perc_f_intervalo=0;
    char sexo; //quantidade de caracteres (char)

    printf("Digite a idade: ");
    scanf("%d", &idade);

    maior = idade;

    while (idade != -1){ //diferent !=
        setbuf(stdin, NULL); //Limpar o buffer para ignorar o enter
        printf("Digite o sexo: (f-feminino/m-masculino):");
        scanf("%c", &sexo);

        if (sexo=='f'){
           contf++; //contf = contf + 1;
        }

        if(sexo=='f' && (idade >= 18 && idade <= 35)){
            cont_intervalo++;
        }

        printf("Digite a idade: ");
        scanf("%d", &idade);

        if (idade > maior){
            maior = idade;
        }
    }
    perc_f_intervalo = (cont_intervalo/contf)*100;
    printf("Programa finalizado! \n");
    printf("A maior idade digitada: %d \n", maior);
    printf("A quantidade de feminino: %.0f \n",  contf);
    printf("A quantidade de feminino no inter 18-35: %.0f \n", cont_intervalo);
    printf("O percentual solicitado: %.2f \n", perc_f_intervalo);

    

	return 0;
}
