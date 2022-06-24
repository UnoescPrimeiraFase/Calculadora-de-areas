/* Elaborar um algoritmo para criar o menu
igual ao demonstrado a seguir.
Cálculo de Áreas
------------------
(1) Triângulo
(2) Trapézio
(3) Círculo
(4) Losango
Escolha uma forma geométrica:
Após isso, solicitar ao usuário qual área ele deseja
calcular. Utilizando a estrutura switch/case calcule as
4 áreas do menu, lembrando de solicitar ao usuário
as informações sobre as medidas referentes à fórmula
correspondente à área selecionada.
*/
#include <stdio.h>
#include <math.h>
#define PI 3.1415926

int main(void) {
  
  
  int escolha;
  float b, b1, b2, h, d1, d2, r, area = -1;
  
  printf("Cálculo de áreas\n");
  for (int i = 0; i < 18; i++)//Separador
    printf("-");
  printf("\n\n");
  
  printf("(1) Triângulo\n");
  printf("(2) Trapézio\n");
  printf("(3) Círculo\n");
  printf("(4) Losango\n\n");
  printf("Escolha uma forma geométrica:\n");
  scanf("%i",&escolha);
  
  switch (escolha){
    
    case 1://Triângulo
      
      do{
        printf("Base: ");
        scanf("%f",&b);
        if (b <= 0)
          printf("\nErro! Valor inválido, preencha novamente\n\n");
      }while (b <= 0);
      
      do{
        printf("Altura: ");
        scanf("%f",&h);
        if (h <= 0)
          printf("\nErro! Valor inválido, preencha novamente\n\n");
      }while (h <= 0);
      
      area = b*h/2;
      break;
    
    case 2://Trapézio
      
      do{
        printf("Base 1: ");
        scanf("%f",&b1);
        if (b1 <= 0)
          printf("\nErro! Valor inválido, preencha o campo novamente\n\n");      
        }while (b1 <= 0);
      
      do{
        printf("Base 2: ");
        scanf("%f",&b2);
        if (b2 <= 0)
          printf("\nErro! Valor inválido, preencha o campo novamente\n\n"); 
        }while (b2 <= 0);
      
      do{
      printf("Altura: ");
      scanf("%f",&h);
        if (h <= 0)
          printf("\nErro! Valor inválido, preencha o campo novamente\n\n");
      }while (h <= 0);
      
      area = (b1+b2)*h/2;
      break;
    
    case 3://Círculo
      
      do{
        printf("Raio: ");
        scanf("%f",&r);
        if (r <= 0)
          printf("\nErro! Valor inválido, preencha o campo novamente\n\n");
      }while (r <= 0);
      
      area = PI * pow(r,2);// pow (r, 2) Primeiro item é a base, o segundo é o expoente
      break;
    
    case 4://Losango
      
      do{
        printf("Diagonal 1: ");
        scanf("%f",&d1);
        if (d1 <= 0)
          printf("\nErro! Valor inválido, preencha o campo novamente\n\n");
      }while (d1 <= 0);
      
      do{
        printf("Diagonal 2: ");
        scanf("%f",&d2);
        if (d2 <= 0)
          printf("\nErro! Valor inválido, preencha o campo novamente\n\n");
      }while (d2 <= 0);
      
      area = d1*d2/2;
      break;
    
    default:
      printf("Erro! Essa não é uma opção válida!\n");//Mensagem padrão caso não se escolha nenhuma das opções predefinidas.
      break;
    
  }
  printf("\n");
  if (area != -1){//Evita imprimir área caso a opção não seja uma das quatro.
    for (int i = 0; i < 45; i++)//Separador
      printf("-");
    printf("\n");
    
    printf("\nA área da figura escolhida é: %.4f unidades de medida²",area);// Imprime a área com precisão de quatro casas decimais
    }
  return 0;
}