#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define PI 3.1415
#define areaCirculo(r) ((PI)*(r)*(r))
#define perimetroCirculo(r) (2*(PI)*(r))
#define areaQuadrado(l) ((l)*(l))
#define perimetroQuadrado(l) (4*(l))
#define areaRetangulo(a,b) ((a)*(b))
#define perimetroRetangulo(a,b) ((2*(a))+(2*(b)))
#define areaTriangulo(b,h) (((b)*(h))/2)
#define perimetroTriangulo(b,c1,c2) ((b)+(c1)+(c2))


void leDados(float *valor) {

printf("Insira um valor");
scanf("%f",valor);
}



int main()
{
  float v1,v2,v3;
  int op;
  do{


    printf(">>>> Menu trigonometria <<<<<<\n");
    printf("1 - Calcular área do circulo\n");
    printf("2 - Calcular perímetro do circulo\n");
    printf("3 - Calcular área do quadrado\n");
    printf("4 - Calcular perímetro do quadrado\n");
    printf("5 - Calcular área do retângulo\n");
    printf("6 - Calcular perímetro do retângulo\n");
    printf("7 - Calcular área do triângulo\n");
    printf("8 - Calcular perímetro do triângulo\n");
    printf("9 - Sair\n");
    scanf("%i", &op);
    switch(op){
    case 9: break;
    case 1: leDados(&v1);
        printf("Área do circulo de raio %f: %f",v1,areaCirculo(v1));
            break;

      case 2: leDados(&v1);
        printf("Perímetro do circulo de raio %f: %f",v1,perimetroCirculo(v1));
            break;

     case 3: leDados(&v1); leDados(&v2);
        printf("Area do quadrado %f",areaQuadrado(v1));
            break;

   case 4: leDados(&v1); leDados(&v2);
        printf("Perimetro do quadrado: %f",perimetroQuadrado(v1));
            break;

   case 5: leDados(&v1); leDados(&v2);
        printf("Area do retângulo %f",areaRetangulo(v1,v2));
            break;

   case 6: leDados(&v1); leDados(&v2);
        printf("Perimetro do retangulo: %f",perimetroRetangulo(v1,v2));
            break;

   case 7: leDados(&v1); leDados(&v2);
        printf("Area do triangulo: %f",areaTriangulo(v1,v2));
            break;

case 8: leDados(&v1); leDados(&v2); leDados(&v3);
        printf("Perímetro do triangulo: %f",perimetroTriangulo(v1,v2,v3));
            break;
    }

  }while(op!=9);
    return 0;
}
