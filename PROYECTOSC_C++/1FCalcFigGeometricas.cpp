
#include<stdio.h>
#include<math.h>
#include<conio2.h>
// Declaraciones adelantadas de las funciones
float triape(float d1, float d2, float d3);
float triare(float d1, float d2, float d3);
float cuadrape(float d1);
float cuadrare(float d1);
float rectape(float d1, float d2);
float rectare(float d1, float d2);
float rombore(float d1, float d2);
float rombope(float d1, float d2);
float cirpe(float r);
float cirre(float r);
float polipe(float nl, float l, float a);
float polire(float nl, float l, float a);
float menu();

float triape(float d1, float d2, float d3) {
		float perimetro;
		if (d1+d2>d1 && d3+d2>d1 && d1+d3>d2) {
		perimetro= d1+d2+d3;
		} else {
		printf("LAS DIMENSIONES DE LOS LADOS NO FORMAN UN TRIANGULO \n");
		} 
		return perimetro;
	}

	float triare(float d1, float d2, float d3) {
		float area, perimetro,sp;
			if (d1+d2>d1 && d3+d2>d1 && d1+d3>d2) {
			 perimetro = d1+d2+d3;
			 sp = perimetro/2;
			 area= sqrt (sp*(sp-d1)*(sp-d2)*(sp-d3));
			 } else {
				printf("LAS DIMENSIONES DE LOS LADOS NO FORMAN UN TRIANGULO \n");	
			 }
		return area;
   }
	
	float cuadrape(float d1) {
			float perimetro;
			perimetro = 4*d1;
		    return perimetro;
	}
	
	float cuadrare(float d1) {
		float area;
		area = d1*d1;
		return area;	
	}
	
	float rectape(float d1, float d2) {
		float perimetro;
		perimetro= 2*(d1*d2);
		return perimetro;
	}
	
	float rectare(float d1, float d2) {
		float area;
		area= d1*d2;
		return area;
	}
	
	float rombope(float d1, float d2) {
		float perimetro;
		perimetro= 4*sqrtf((pow((d1/2),2))+(pow((d2/2),2)));
		return perimetro;
	}
	
	float  rombore(float d1, float d2) {
		float area;
		area = (d1*d2)/2;
		return area;
	}
	
	float cirpe(float r) {
		float perimetro;
		perimetro=2*M_PI*r; 				
		return perimetro;
	}
	
	float cirre(float r) {
		float area,pi;
		area = M_PI*pow(r,2);
		return area;
	}
	
	float polipe(float nl, float l, float ap) {
		float perimetro;
		perimetro=nl*l;	
		return perimetro;
	}
	
	float polire(float nl, float l, float ap) {
		float area;
		area = (nl*l*ap)/2;
		return area;
	}


float menu() {
	float op;
	textcolor(BLACK);
	gotoxy(30,2); printf(" APLICACION CALCULA AREA Y PERIMETRO DE FIGURAS GEOMETRICAS 2D \n");
	gotoxy(5,4);printf(" 1   Triangulo\n");
	gotoxy(5,6);printf(" 2   Cuadrado\n");
	gotoxy(5,8);printf(" 3   Rectangulo\n");
	gotoxy(5,10);printf(" 4   Rombo\n");
	gotoxy(5,12);printf(" 5   Circulo\n");
	gotoxy(5,14);printf(" 6   Poligono regular\n");
	gotoxy(5,16);printf(" 7   Salir\n");
	gotoxy(5,20);printf(" Ingresar Opcion:");
	scanf("%f",&op);
	return op;
}


int main() {
	float d1,d2,d3,l,nl,r,ap,a,p;
	int opc;
	/* Autor: Josune Singana */
	/* Fecha: 05/07/2022 */
	opc = 0;
	textcolor(BLACK);
	textbackground(LIGHTGRAY);
	clrscr();
do {

	opc = menu();
	switch(opc) {
          case 1:textcolor(MAGENTA);
		            gotoxy(16,21);printf("  INGRESAR EL LADO 1:");
					scanf("%f",&d1);
					gotoxy(16,22);printf("  INGRESAR EL LADO 2:");
					scanf("%f",&d2);
					gotoxy(16,23);printf("  INGRESAR EL LADO 3:");
					scanf("%f",&d3);
					gotoxy(20,24);printf("   CALCULO AREA Y PERIMETRO DE UN TRIANGULO\n");
					p=triape(d1,d2,d3);
					a=triare(d1,d2,d3);
			      gotoxy(25,25);printf(" EL AREA Y PERIMETRO DEL TRIANGULO\n");
		break;
		case 2:textcolor(BLUE);
				     	
					gotoxy(20,21);printf("   CALCULO AREA Y PERIMETRO DE UN CUADRADO\n");
					gotoxy(16,22);	printf("  INGRESAR EL LADO: ");
						scanf("%f",&d1);
					p=cuadrape(d1);
			      	a=cuadrare(d1);
			      	gotoxy(25,25);printf(" EL AREA Y PERIMETRO DEL CUADRADO\n");
	                
		break;	
	    case 3:textcolor(GREEN);
				gotoxy(20,21);printf("   CALCULO AREA Y PERIMETRO DE UN RECTANGULO\n");
				/* Entrada de datos */
				gotoxy(16,22);printf("  INGRESAR EL LARGO: ");
				scanf("%f",&d1);
				gotoxy(16,23);printf("  INGRESAR EL ANCHO: ");
				scanf("%f",&d2);
				gotoxy(25,25);printf(" EL AREA Y PERIMETRO DEL RECTANGULO\n");
				p=rectape(d1,d2);
				  a=rectare(d1,d2);
			
	    break;
		case 4:textcolor(CYAN);
				gotoxy(20,21);	printf("   CALCULO AREA Y PERIMETRO DE UN ROMBO\n");
					/* Entrada de datos */
					gotoxy(16,22);printf("  INGRESAR LA DIAGONAL MAYOR: ");
					scanf("%f",&d1);
					gotoxy(16,23);printf("  INGRESAR LA DIAGONAL MENOR: ");
					scanf("%f",&d2);
			
					gotoxy(25,25);printf(" EL AREA Y PERIMETRO DEL ROMBO\n");
				  p=rombope(d1,d2);
      	         a=rombore(d1,d2);
		
		break;
		case 5:textcolor(BROWN);
		        gotoxy(20,21);	printf("   CALCULO AREA Y PERIMETRO DE UN CIRCULO\n");
						/* Entrada de datos */
						gotoxy(16,22);printf("  INGRESAR EL RADIO: ");
						scanf("%f",&r);
						p=cirpe(r);
      	                  a=cirre(r);
						gotoxy(25,25);printf(" EL AREA Y PERIMETRO DEL CIRCULO\n");
					   
		break;
		case 6:textcolor(LIGHTGREEN);
							gotoxy(20,21);printf("   CALCULO AREA Y PERIMETRO DE UN POLIGONO REGULAR\n");
							/* Entrada de datos */
							gotoxy(16,22);printf("  INGRESAR EL NUMERO DE LADOS: ");
							scanf("%f",&nl);
							gotoxy(16,23);printf("  INGRESAR LA LONGITUD DEL LADO: ");
							scanf("%f",&l);
							gotoxy(16,24);printf("  INGRESAR EL APOTEMA: ");
							scanf("%f",&ap);
							p=polipe( nl,l,ap);
      	                    a=polire( nl,l,ap);
							gotoxy(25,25);printf(" EL AREA Y PERIMETRO DE UN POLIGONO REGULAR\n");		
							
		break;
		case 7:textcolor(CYAN);
								gotoxy(20,21);printf("GRACIAS POR USAR ESTA APLICACION\n");
		break;
		}
		if (opc<7) {
		textcolor(BLUE);
			printf(" AREA: %.2f PERIMETRO: %.2f\n",a,p);
			printf("PRESIONA CUALQUIER TECLA PARA CONTINUAR\n");
		getch();
		clrscr();
		}
	} while (opc<7);
	return 0;
}

