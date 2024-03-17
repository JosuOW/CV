//PROGRAMA RELOJ DE ARENA
// autor: Josune Singaña
	/*fecha: 17 de Julio de 2022*/
#include <stdio.h>
#include <conio2.h>
#include<stdlib.h>
int co,f,n,i,j,x;
void recipiente ();
void borrar1();
void arena();
void repetir();
void medio(int x);
void borrar2(int co,int f);
void borrar3(int co,int f);
void borrar4(int co,int f);
int main(){
		textbackground(YELLOW);
	clrscr();
	textcolor(BLUE);
	recipiente ();
	textcolor(BROWN);
    gotoxy(1,1);printf("EL RELOJ INICIA LUEGO DEL SONIDO \a ");
	 arena();
	i=23; j=50;
	 borrar1();
	 repetir(); 
	 	for (x=8; x>=2; x--) {
	 medio(x);
	 gotoxy(50,12);printf ("o");
switch (x){
	case 8:
			 co=1; f=9;
			borrar2(co,f);
			 f=8;
			borrar3(co,f);
			repetir(); 
			break;
	case 7:
			 co=1; f=8;
			  borrar2(co,f);
			 f=7;
			  borrar3(co,f);
			 co=3; f=10;
			borrar4(co,f);
			repetir();
			break;
	case 6:
			 co=1; f=7;
			borrar2(co,f);
			 co=1; f=6;
			  borrar3(co,f);
			co=3; f=9;
			borrar4(co,f);
			co=4; f=10;
			borrar4(co,f);
			break;
	case 5:
			 co=1; f=6;
			borrar2(co,f);
			co=1; f=5;
			  borrar3(co,f);
	           f=8;
			  for (co=3; co<=5; co++) {
			borrar4(co,f);
			f++;}
			break;
	case 4:
			 co=1; f=5;
			borrar2(co,f);
			co=1; f=4;
			  borrar3(co,f);
			  f=7;
			 for (co=3; co<=6; co++) {
			borrar4(co,f);
			f++;}
			break;
	case 3:
			 co=1; f=4;
			borrar2(co,f);
			co=1; f=3;
			  borrar3(co,f);
			 f=6;
			  for (co=3; co<=7; co++) {
			borrar4(co,f);
			f++;}
			break;	 
	case 2:
			 co=1; f=3;
			borrar2(co,f);
			co=1; f=2;
			  borrar3(co,f);
			 co=3; f=5;
			  for (co=3; co<=8; co++) {
			borrar4(co,f);
			f++;}
			gotoxy(1,24);printf("\a GRACIAS POR USAR EL PROGRAMA ");
	        getch();
			break;
	}
	}
	return 0;
	}

void recipiente(){
//borde superior e inferior
			for (n=40;n<=60 ;n++) {
			gotoxy(n,2);printf ("X");
			gotoxy(n,24);printf ("X");}
//diagonales
			for (i=3; i<=23;i++) {			
    gotoxy(i+37,i);printf ("X");}
    i=3; 	
	for (j=60; j>=40;j--) {			
	  gotoxy(j,i++);printf ("X");}
return;
}

void arena(){
			gotoxy(42,4);printf ("ooooooooooooooooo");
			gotoxy(43,5);printf ("ooooooooooooooo");
			gotoxy(44,6);printf ("ooooooooooooo");
			gotoxy(45,7);printf ("ooooooooooo");
			gotoxy(46,8);printf ("ooooooooo");
			gotoxy(47,9);printf ("ooooooo");
			gotoxy(48,10);printf ("ooooo");
			gotoxy(49,11);printf ("ooo");
			gotoxy(50,12);printf ("o");
return;
}
void repetir(){
		// RETARDA EL PROGRAMA sleep(1000); o delay(1000)
	delay(1000); gotoxy(50,12);printf (" "); delay(1000);
return;
}

void borrar1(){
   int j, i=49;
for(j=1;j<=3; j++ ){
i++;
	repetir(); 
if (i==50)
	{
	gotoxy(i,23);printf ("o");
	delay(1000);gotoxy(i,4);printf (" "); 	
	}else{ if (i==51)	
	        {gotoxy(i-1,22);printf ("o");
			delay(1000);gotoxy(i-1,5);printf (" "); 
			}else{ if (i==52)	
			{gotoxy(i-1,23);printf ("o");
			delay(1000);gotoxy(i-1,4);printf (" "); 
		    i=i-3;
	        }
	        gotoxy(i,23);printf ("o");
	delay(1000);gotoxy(i,4);printf (" "); 	
				}
		}
gotoxy(50,12);printf ("o");
}
return;
}

void borrar2(int co,int f){
   int j;
for(j=1;j<=2; j++ ){
if (j==1)
	{
		delay(1000);gotoxy(50+co+1,13-f);printf (" "); 
       gotoxy(50,12);printf ("o");
	    repetir(); 
	    	gotoxy(50-co,13+f);printf ("o");	
	}else{ if (j==2)	
	        {	delay(1000);gotoxy(50-co-1,13-f);printf (" "); 
        gotoxy(50,12);printf ("o");
		repetir(); 
			gotoxy(50+co,13+f);printf ("o");
				}
		}
}
return;
}

void borrar3(int co,int f){
   int j;
for(j=1;j<=2; j++ ){
if (j==1)
	{
		delay(1000);gotoxy(50+co,13-f);printf (" "); 
       gotoxy(50,12);printf ("o");
	    repetir(); 
	gotoxy(50-co-1,13+f+2);printf ("o");		
	}else{ if (j==2)	
	        {	delay(1000);gotoxy(50-co,13-f);printf (" "); 
        gotoxy(50,12);printf ("o");
		repetir(); 
	gotoxy(50+co+1,13+f+2);printf ("o");
	gotoxy(50,12);printf ("o");
				}
		}
}
return;
}

void borrar4(int co,int f){
   int j;
for(j=1;j<=2; j++ ){
if (j==1)
	{
		delay(1000);gotoxy(50+co,13-f+1);printf (" "); 
       gotoxy(50,12);printf ("o");
	    repetir(); 
	    	gotoxy(50-co,13+f);printf ("o");	
	}else{ if (j==2)	
	        {	delay(1000);gotoxy(50-co,13-f+1);printf (" "); 
        gotoxy(50,12);printf ("o");
		repetir(); 
			gotoxy(50+co,13+f);printf ("o");
			}
		}
}
return;
}
// elimina y reescribe arena de la mitad
void medio(int x){
	gotoxy(50,13+x);printf ("o");
	delay(1000);gotoxy(50,13-x+1);printf (" ");	
return;	
}