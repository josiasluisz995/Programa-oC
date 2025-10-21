#include <stdio.h>

   int main(){
       int idade, matricula;
       float Altura;
       char nome[50];


    printf("Digite sua idade:  \n");
    scanf("%d" , &idade);

    printf("Digite sua altura:  \n");
    scanf("%F" , &Altura);

    printf("Digite seu nome:  \n");
    scanf("%s" , nome);

    printf("Digite sua matricula; \n");
    scanf("%d" , &matricula);

    printf("Nome do aluno: %s - Matricula: %d \n", nome, matricula);
    printf("Idade: %d - Altura: %f", idade, Altura);
    

    return 0;
   }