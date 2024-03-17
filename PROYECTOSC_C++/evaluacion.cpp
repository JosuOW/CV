#include<conio2.h>
#include<iostream>
#include<cmath>
using namespace std;



int main() {
	string color;
	string nom;
	string nombre;
	float nombre1;
	float nota1;
	float nota2;
	float nota3;
	float nota4;
	int posipare1;
	int posipare2;
	string resp;
	string sexo;
	int valorente;
	// autor: Josune Singana
	// fecha: 21-06-2022
	textbackground(YELLOW);
	clrscr();
	textcolor(MAGENTA);
	cout << " APLICACION COMPRUEBA DATOS E IMPRIME ERRORES " << endl;
	resp = "s";
	while (resp=="s" || resp=="S") {
		cout << "INGRESE SU NOMBRE: ";
		cin >> nombre;
		if (nombre=="nom") {
			while (nombre1<0 || nombre1==0 || nombre1>0) {
				cout << "Error no son caracteres, vuelva a intentar" << endl;
				cin >> nombre;
			}
		}
		cout << "INGRESE SEXO m o f: ";
		cin >> sexo;
		if (sexo=="m" || sexo=="f") {
			cout << " " << nombre << " " << sexo << endl;
		} else {
			do {
				cout << "Error no son caracteres validos" << endl;
				cin >> sexo;
				cout << " " << nombre << " " << sexo << endl;
			} while (!(sexo=="m" || sexo=="f"));
		}
		clrscr();
			textcolor(GREEN);
		cout << " APLICACION COMPRUEBA DATOS E IMPRIME ERRORES CALIFICACIONES DE PRUEBA" << endl;
		cout << "INGRESE NOTA 1:";
		cin >> nota1;
		while (nota1<0 || nota1>100) {
			cout << "Error la nota esta fuera del intervalo 0-100 , vuelva a intentar" << endl;
			if (nota1<0) {
				cout << "la nota es menor a 0" << endl;
			} else {
				cout << "la nota es mayor a 100" << endl;
			}
			cin >> nota1;
		}
		cout << "INGRESE NOTA 2:";
		cin >> nota2;
		while (nota2<0 || nota2>100) {
			cout << "Error la nota esta fuera del intervalo 0-100 , vuelva a intentar" << endl;
			if (nota2<0) {
				cout << "la nota es menor a 0" << endl;
			} else {
				cout << "la nota es mayor a 100" << endl;
			}
			cin >> nota2;
		}
		cout << "INGRESE NOTA 3:";
		cin >> nota3;
		while (nota3<0 || nota1>100) {
			cout << "Error la nota esta fuera del intervalo 0-100 , vuelva a intentar" << endl;
			if (nota3<0) {
				cout << "la nota es menor a 0" << endl;
			} else {
				cout << "la nota es mayor a 100" << endl;
			}
			cin >> nota3;
		}
		cout << "INGRESE NOTA 4:";
		cin >> nota4;
		while (nota4<0 || nota4>100) {
			cout << "Error la nota esta fuera del intervalo 0-100 , vuelva a intentar" << endl;
			if (nota4<0) {
				cout << "la nota es menor a 0" << endl;
			} else {
				cout << "la nota es mayor a 100" << endl;
			}
			cin >> nota4;
		}
	clrscr();
		textcolor(BROWN);
		cout << " APLICACION COMPRUEBA DATOS E IMPRIME ERRORES VALOR ENTERO" << endl;
		cout << "INGRESE UN VALOR ENTERO:";
		cin >> valorente;
		valorente = int(valorente);
		while (valorente<2 || valorente>1000) {
			cout << "Error el valor esta fuera del intervalo 2-1000 , vuelva a intentar" << endl;
			if (valorente<2) {
				cout << "la nota es menor a 2" << endl;
			} else {
				cout << "la nota es mayor a 1000" << endl;
			}
			cin >> valorente;
		}
	clrscr();
		textcolor(BROWN);
		cout << " APLICACION COMPRUEBA DATOS E IMPRIME ERRORES 2 ENTEROS PARES" << endl;
		cout << "INGRESE UN VALOR ENTERO 1:";
		cin >> posipare1;
		posipare1 = int(posipare1);
		while (posipare1<0 || posipare1%2!=0) {
			if (posipare1%2!=0) {
				cout << "El valor no es par, vuelva a intentar" << endl;
			}
			if (posipare1<2) {
				cout << "EL valor es menor a 2, vuelva a intentar" << endl;
			}
			cin >> posipare1;
			posipare1 = int(posipare1);
		}
		cout << "INGRESE UN VALOR ENTERO 2:";
		cin >> posipare2;
		posipare2 = int(posipare2);
		while (posipare2<0 || posipare2%2!=0) {
			if (posipare2<2) {
				cout << "EL valor es menor a 2, vuelva a intentar" << endl;
			}
			if (posipare2%2!=0) {
				cout << "El valor no es par, vuelva a intentar" << endl;
			}
			cin >> posipare2;
			posipare2 = int(posipare2);
		}
		clrscr();
		textcolor(BROWN);
		cout << " APLICACION COMPRUEBA DATOS E IMPRIME ERRORES colores" << endl;
		cout << "INGRESE UN CODIGO DE COLOR ENTRE ROJ VER AZU NEG NAR:";
		cin >> color;
		if (color=="ROJ" || color=="VER" || color=="AZU" || color=="NEG" || color=="NAR") {
			cout << "CODIGO VALIDO  " << color << endl;
		} else {
			do {
				cout << "Error, carateres no validos, vuelva a intentar" << endl;
				cin >> color;
				if (color!="roj" || color!="ver" || color!="azu" || color!="neg" || color!="nar") {
					cout << "Error, no se aceptan caracteres minusculas, vuelva a intentar" << endl;
					cin >> color;
				}
			} while (!(color=="ROJ" || color=="VER" || color=="AZU" || color=="NEG" || color=="NAR"));
			cout << "CODIGO VALIDO  " << color << endl;
		}
		cout << " resultados: " << nota1 << " " << nota2 << " " << nota3 << " " << nota4 << " " << valorente << " " << posipare1 << " " << posipare2 << " " << color << endl;
		cout << "desea repetir el proceso: s o n ";
		cin >> resp;
			resp = getch();
	}
	return 0;
}

