
#include<stdio.h>
#include<math.h>

#include<conio2.h>
    	/* autor: Josune Singana */
	/* fecha: 21-06-2022 */


int main() {
	char color, nom, nombre;
	float  nota1, nota2, nota3, nota4;
	int posipare1;
	int posipare2;
	char resp;
	char sexo;
	int valorente;
textbackground(YELLOW);
	clrscr();
	textcolor(MAGENTA);
	resp = 's';
	 gotoxy (25,2);printf(" APLICACION COMPRUEBA DATOS E IMPRIME ERRORES \n");
	
	while (resp=='s' || resp=='S') {
		printf("INGRESE SU NOMBRE: ");
		scanf("%s",nombre);
		if (nombre=='nom') {
			while (nombre<0 || nombre==0 || nombre>0) {
				printf("Error no son caracteres, vuelva a intentar\n");
				scanf("%s",nombre);
			}
		}
		printf("INGRESE SEXO m o f: ");
		scanf("%c",sexo);
			printf(" %s %s\n",nombre,sexo);
		} else {
			do {
				printf("Error no son caracteres validos\n");
				scanf("%c",sexo);	
			} while (sexo=='m' || sexo=='f');
			printf(" %s %c\n",nombre,sexo);
		}	clrscr();
		textcolor(CYAN);
		 gotoxy (25,2);printf(" APLICACION COMPRUEBA DATOS E IMPRIME ERRORES CALIFICACIONES DE PRUEBA\n");
		printf("INGRESE NOTA 1:");
		scanf("%f",&nota1);
		while (nota1<0 || nota1>100) {
			printf("Error la nota esta fuera del intervalo 0-100 , vuelva a intentar\n");
			if (nota1<0) {
				printf("la nota es menor a 0\n");
			} else {
				printf("la nota es mayor a 100\n");
			}
			scanf("%f",&nota1);
		}
		printf("INGRESE NOTA 2:");
		scanf("%f",&nota2);
		while (nota2<0 || nota2>100) {
			printf("Error la nota esta fuera del intervalo 0-100 , vuelva a intentar\n");
			if (nota2<0) {
				printf("la nota es menor a 0\n");
			} else {
				printf("la nota es mayor a 100\n");
			}
			scanf("%f",&nota2);
		}
		printf("INGRESE NOTA 3:");
		scanf("%f",&nota3);
		while (nota3<0 || nota1>100) {
			printf("Error la nota esta fuera del intervalo 0-100 , vuelva a intentar\n");
			if (nota3<0) {
				printf("la nota es menor a 0\n");
			} else {
				printf("la nota es mayor a 100\n");
			}
			scanf("%f",&nota3);
		}
		printf("INGRESE NOTA 4:");
		scanf("%f",&nota4);
		while (nota4<0 || nota4>100) {
			printf("Error la nota esta fuera del intervalo 0-100 , vuelva a intentar\n");
			if (nota4<0) {
				printf("la nota es menor a 0\n");
			} else {
				printf("la nota es mayor a 100\n");
			}
			scanf("%f",&nota4);
		}
	clrscr();
	textcolor(BLUE);
		printf(" APLICACION COMPRUEBA DATOS E IMPRIME ERRORES VALOR ENTERO\n");
		printf("INGRESE UN VALOR ENTERO:");
		scanf("%i",&valorente);

		while (valorente<2 || valorente>1000) {
			printf("Error el valor esta fuera del intervalo 2-1000 , vuelva a intentar\n");
			if (valorente<2) {
				printf("la nota es menor a 2\n");
			} else {
				printf("la nota es mayor a 1000\n");
			}
			scanf("%i",&valorente);
		}
	clrscr();
	textcolor(GREEN);
		printf(" APLICACION COMPRUEBA DATOS E IMPRIME ERRORES 2 ENTEROS PARES\n");
		printf("INGRESE UN VALOR ENTERO 1:");
		scanf("%i",&posipare1);
		while (posipare1<0 || posipare1%2!=0) {
			if (posipare1%2!=0) {
				printf("El valor no es par, vuelva a intentar\n");
			}
			if (posipare1<2) {
				printf("EL valor es menor a 2, vuelva a intentar\n");
			}
			scanf("%i",&posipare1);
		}
		printf("INGRESE UN VALOR ENTERO 2:");
		scanf("%i",&posipare2);
	
		while (posipare2<0 || posipare2%2!=0) {
			if (posipare2<2) {
				printf("EL valor es menor a 2, vuelva a intentar\n");
			}
			if (posipare2%2!=0) {
				printf("El valor no es par, vuelva a intentar\n");
			}
			scanf("%i",&posipare2);
		
		}
		clrscr();
		textcolor(BROWN);
		printf(" APLICACION COMPRUEBA DATOS E IMPRIME ERRORES colores\n");
		printf("INGRESE UN CODIGO DE COLOR ENTRE ROJ VER AZU NEG NAR:");
		scanf("%s",color);
		if (color=='ROJ' || color=='VER' ||color=='AZU' || color=='NEG' || color=='NAR' ) {
			printf("CODIGO VALIDO  %s\n",color);
		} else {
			do {
				printf("Error, carateres no validos, vuelva a intentar\n");
				scanf("%s",color);
				if (color=='roj' || color=='ver' ||color=='azu' || color=='neg' || color=='nar' ) {
					printf("Error, no se aceptan caracteres minusculas, vuelva a intentar\n");
					scanf("%s",color);
				}
			} while (color=='ROJ' || color=='VER' ||color=='AZU' || color=='NEG' || color=='NAR' );
			printf("CODIGO VALIDO  %s\n",color);
		}
		printf(" resultados: %f %f %f %f %i %i %i %s\n",nota1,nota2,nota3,nota4,valorente,posipare1,posipare2,color);
		printf("desea repetir el proceso: s o n ");
		
		resp = getch();
	}
	return 0;
}

