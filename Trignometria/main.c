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
    printf("1 - Calcular �rea do circulo\n");
    printf("2 - Calcular per�metro do circulo\n");
    printf("3 - Calcular �rea do quadrado\n");
    printf("4 - Calcular per�metro do quadrado\n");
    printf("5 - Calcular �rea do ret�ngulo\n");
    printf("6 - Calcular per�metro do ret�ngulo\n");
    printf("7 - Calcular �rea do tri�ngulo\n");
    printf("8 - Calcular per�metro do tri�ngulo\n");
    printf("9 - Sair\n");
    scanf("%i", &op);
    switch(op){
    case 9: break;
    case 1: leDados(&v1);
        printf("�rea do circulo de raio %f: %f",v1,areaCirculo(v1));
            break;

      case 2: leDados(&v1);
        printf("Per�metro do circulo de raio %f: %f",v1,perimetroCirculo(v1));
            break;

     case 3: leDados(&v1); leDados(&v2);
        printf("Area do quadrado %f",areaQuadrado(v1));
            break;

   case 4: leDados(&v1); leDados(&v2);
        printf("Perimetro do quadrado: %f",perimetroQuadrado(v1));
            break;

   case 5: leDados(&v1); leDados(&v2);
        printf("Area do ret�ngulo %f",areaRetangulo(v1,v2));
            break;

   case 6: leDados(&v1); leDados(&v2);
        printf("Perimetro do retangulo: %f",perimetroRetangulo(v1,v2));
            break;

   case 7: leDados(&v1); leDados(&v2);
        printf("Area do triangulo: %f",areaTriangulo(v1,v2));
            break;

case 8: leDados(&v1); leDados(&v2); leDados(&v3);
        printf("Per�metro do triangulo: %f",perimetroTriangulo(v1,v2,v3));
            break;
    }

  }while(op!=9);
    return 0;
}
