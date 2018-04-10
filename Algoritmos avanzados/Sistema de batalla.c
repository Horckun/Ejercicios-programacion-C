// SISTEMA DE BATALLA

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define p printf
#define s scanf

void introduceheroe();
void introducemalo(int nm);
void lvh(int *pegar);
void lve(int *batalla, int *pegar, int *i);
void reservar(int *nm);
void cambio(char palabra[20]);

typedef struct {
	char nombre[20];
	int lv;
	int hp;
	int mp;
	int fuerza;
	int magia;
	int exp;
}bueno;

typedef struct {
	int lv;
	int hp;
	int mp;
	int fuerza;
	int magia;
	int exp;
}malo;

bueno heroe;
malo *enemigo;

int main() {
	srand(time(NULL));
	int nm,opcion,i,batalla,pegar,ba,am;
	
	nm = 0;
	
	introduceheroe();
	reservar(&nm);
	
	do {
		do {
			p("H%croe %s (Lv %i - HP %i - MP %i)\n\n",130,heroe.nombre,heroe.lv,heroe.hp,heroe.mp);
			p("Elige una opci%cn:\n",162);
			p("=================\n\n");
			p("[1] - Atacar.\n");
			p("[2] - Magia.\n\n");
			p("Opci%cn: ",162);
			fflush(stdin);
			s("%i",&opcion);
			p("\n");
		} while(opcion < 1 || opcion > 2);
		p("A qui%cn quieres atacar?\n",130);
		p("=======================\n\n");
		for(i = 0; i < nm; i++) {
			if(enemigo[i].hp > 0) {
				p("[%i] - Enemigo %i (Lv %i - HP %i - MP %i)\n",i,i,enemigo[i].lv,enemigo[i].hp,enemigo[i].mp);
			} else {
				if(enemigo[nm].hp < 0) {
					p("HAS GANADO!!!\n\n");
				}
			}
		}
		p("\n");
		p("Opci%cn: ",162);
		fflush(stdin);
		s("%i",&batalla);
		p("\n");
		switch(opcion) {
			case 1: {
				pegar = (heroe.fuerza * (rand()%3));
				p("Le has quitado %i HP al enemigo %i.\n\n",pegar,batalla);
				enemigo[batalla].hp -= pegar;
				if(enemigo[batalla].hp <= 0) {
					p("El enemigo %i ha muerto, enhorabuena!.\n\n",batalla);
				}
				lvh(&pegar);
			}
			break;
			case 2: {
				pegar = (heroe.magia * (rand()%3));
				heroe.mp -= 20;
				p("Le has quitado %i HP al enemigo %i.\n\n",pegar,batalla);
				if(heroe.mp <= 0) {
					p("No te queda MP.\n");
				}
				enemigo[batalla].hp -= pegar;
				if(enemigo[batalla].hp <= 0) {
					p("El enemigo %i ha muerto, enhorabuena!.\n\n",batalla);
				}
				lvh(&pegar);
			}
			break;
		}
		system("pause");
		p("Turno de los enemigos:\n");
		p("======================\n\n");
		for(i = 0; i < nm; i++) {
			if(enemigo[i].hp > 0) {
				ba = rand()%2;
				if(ba == 0) {
					p("El enemigo %i atacar%c f%csicamente.\n",i,160,161);
					pegar = (enemigo[i].fuerza * (rand()%3)); 
					if(heroe.hp <= 0) {
						p("Lo siento, has muerto.\n\n");
						exit(1);
					} else {
						p("El enemigo %i te ha quitado %i HP.\n\n",i,pegar);
						heroe.hp -= pegar;
						if((heroe.hp - 20) < 980) {
							heroe.hp += 20;
							p("Has recuperado 20 HP.\n\n");
						}
						if((heroe.mp - 20) < 980) {
							heroe.mp += 20;
							p("Has recuperado 20 MP.\n\n");
						}
					}
				} else {
					if(ba == 1) {
						p("El enemigo %i atacar%c con magia.\n\n",i,160);
						pegar = (enemigo[i].magia * (rand()%3));
						enemigo[i].magia -= 20;
						if(heroe.hp <= 0) {
							p("Lo siento, has muerto.\n\n");
							exit(1);
						} else {
							p("El enemigo %i te ha quitado %i HP.\n\n",i,pegar);
							heroe.hp -= pegar;
							if((heroe.hp - 20) < 980) {
								heroe.hp += 20;
								p("Has recuperado 20 HP.\n\n");
							}
							if((heroe.mp - 20) < 980) {
								heroe.mp += 20;
								p("Has recuperado 20 MP.\n\n");
							}
						}
					}
				}
				lve(&batalla,&pegar,&i);
			}
		}
		am = rand()%2;
		if(am == 0) {
			enemigo = (malo*)realloc(enemigo,(nm+1)*sizeof(malo));
			if(enemigo == NULL) {
				p("No se ha podido asignar espacio en memoria.\n");
				exit(1);
			}
			introducemalo(nm);
			nm++;
		}
	} while(heroe.hp > 0);
	
	return 0;
}
void introduceheroe() {
	heroe.fuerza = 100;
	heroe.hp = 1000;
	heroe.lv = 1;
	heroe.magia = 100;
	heroe.mp = 1000;
	heroe.exp = 0;
	
	p("Introduce el nombre del h%croe: ",130);
	fgets(heroe.nombre,20,stdin);
	cambio(heroe.nombre);
	p("\n");
	
	p("%s es Lv %i, tiene %i HP, %i MP, %i de fuerza y %i de magia.\n\n",heroe.nombre,heroe.lv,heroe.hp,heroe.mp,heroe.fuerza,heroe.magia);
}
void introducemalo(int nm) {
	enemigo[nm].fuerza = 100;
	enemigo[nm].hp = 500;
	enemigo[nm].exp = 0;
	enemigo[nm].lv = 1;
	enemigo[nm].magia = 100;
	enemigo[nm].mp = 500;
}
void lvh(int *pegar) {
	if(heroe.lv == 1) {
		if(*pegar > 0) {
			heroe.exp += 20;
			p("Has adquirido 20 puntos de experiencia, tienes %i/100 EXP.\n\n",heroe.exp);
		}
		if(heroe.exp == 100) {
			heroe.hp = 1000;
			heroe.mp = 1000;
			heroe.fuerza *= 1.5;
			heroe.hp *= 1.5;
			heroe.lv += 1;
			heroe.magia *= 1.5;
			heroe.mp *= 1.5;
			heroe.exp = 0;
			p("Enhorabuena!!! Has subido al Lv. %i\n",heroe.lv);
			p("%s es Lv %i, tiene %i HP, %i MP, %i de fuerza y %i de magia.\n\n",heroe.nombre,heroe.lv,heroe.hp,heroe.mp,heroe.fuerza,heroe.magia);
		}
	}
	if(heroe.lv == 2) {
		if(*pegar > 0) {
			heroe.exp += 20;
			p("Has adquirido 20 puntos de experiencia, tienes %i/200 EXP.\n\n",heroe.exp);
		}
		if(heroe.exp == 200) {
			heroe.hp = 1500;
			heroe.mp = 1500;
			heroe.fuerza *= 1.5;
			heroe.hp *= 1.5;
			heroe.lv += 1;
			heroe.magia *= 1.5;
			heroe.mp *= 1.5;
			heroe.exp = 0;
			p("Enhorabuena!!! Has subido al Lv. %i\n",heroe.lv);
			p("%s es Lv %i, tiene %i HP, %i MP, %i de fuerza y %i de magia.\n\n",heroe.nombre,heroe.lv,heroe.hp,heroe.mp,heroe.fuerza,heroe.magia);
		}
	}
	if(heroe.lv == 3) {
		if(*pegar > 0) {
			heroe.exp += 20;
			p("Has adquirido 20 puntos de experiencia, tienes %i/400 EXP.\n\n",heroe.exp);
		}
		if(heroe.exp == 400) {
			heroe.hp = 2000;
			heroe.mp = 2000;
			heroe.fuerza *= 1.5;
			heroe.hp *= 1.5;
			heroe.lv += 1;
			heroe.magia *= 1.5;
			heroe.mp *= 1.5;
			heroe.exp = 0;
			p("Enhorabuena!!! Has subido al Lv. %i\n",heroe.lv);
			p("%s es Lv %i, tiene %i HP, %i MP, %i de fuerza y %i de magia.\n\n",heroe.nombre,heroe.lv,heroe.hp,heroe.mp,heroe.fuerza,heroe.magia);
		}
	}
}
void lve(int *batalla, int *pegar, int *i) {
	if(enemigo[*i].lv == 1) {
		if(*pegar > 0) {
			enemigo[*i].exp += 20;
			p("El enemigo %i ha adquirido 20 puntos de experiencia, tiene %i/100 EXP.\n\n",*i,enemigo[*i].exp);
		}
		if(enemigo[*batalla].exp == 100) {
			enemigo[*batalla].hp = 500;
			enemigo[*batalla].mp = 500;
			enemigo[*batalla].fuerza *= 1.5;
			enemigo[*batalla].hp *= 1.5;
			enemigo[*batalla].lv += 1;
			enemigo[*batalla].magia *= 1.5;
			enemigo[*batalla].mp *= 1.5;
			p("Cuidado!!! Ha subido al Lv. %i\n",enemigo[*i].lv);
			p("El enemigo es Lv %i, tiene %i HP, %i MP, %i de fuerza y %i de magia.\n\n",enemigo[*i].lv,enemigo[*i].hp,enemigo[*i].mp,enemigo[*i].fuerza,enemigo[*i].magia);
		}
	}
	if(enemigo[*i].lv == 2) {
		if(*pegar > 0) {
			enemigo[*i].exp += 20;
			p("El enemigo %i ha adquirido 20 puntos de experiencia, tiene %i/200 EXP.\n\n",*i,enemigo[*i].exp);
		}
		if(enemigo[*batalla].exp == 200) {
			enemigo[*batalla].hp = 750;
			enemigo[*batalla].mp = 750;
			enemigo[*batalla].fuerza *= 1.5;
			enemigo[*batalla].hp *= 1.5;
			enemigo[*batalla].lv += 1;
			enemigo[*batalla].magia *= 1.5;
			enemigo[*batalla].mp *= 1.5;
			p("Cuidado!!! Ha subido al Lv. %i\n",enemigo[*i].lv);
			p("El enemigo es Lv %i, tiene %i HP, %i MP, %i de fuerza y %i de magia.\n\n",enemigo[*i].lv,enemigo[*i].hp,enemigo[*i].mp,enemigo[*i].fuerza,enemigo[*i].magia);
		}
	}
	if(enemigo[*i].lv == 2) {
		if(*pegar > 0) {
			enemigo[*i].exp += 20;
			p("El enemigo %i ha adquirido 20 puntos de experiencia, tiene %i/400 EXP.\n\n",*i,enemigo[*i].exp);
		}
		if(enemigo[*batalla].exp == 400) {
			enemigo[*batalla].hp = 1000;
			enemigo[*batalla].mp = 1000;
			enemigo[*batalla].fuerza *= 1.5;
			enemigo[*batalla].hp *= 1.5;
			enemigo[*batalla].lv += 1;
			enemigo[*batalla].magia *= 1.5;
			enemigo[*batalla].mp *= 1.5;
			p("Cuidado!!! Ha subido al Lv. %i\n",enemigo[*i].lv);
			p("El enemigo es Lv %i, tiene %i HP, %i MP, %i de fuerza y %i de magia.\n\n",enemigo[*i].lv,enemigo[*i].hp,enemigo[*i].mp,enemigo[*i].fuerza,enemigo[*i].magia);
		}
	}
}
void reservar(int *nm) {	
	enemigo = (malo*)malloc((*nm+1)*sizeof(malo));
	if(enemigo == NULL) {
		p("No se ha podido asignar un tamaño a la memoria.\n");
		exit(1);
	}
	introducemalo(*nm);
	(*nm)++;
}
void cambio(char palabra[20]) {
	int i;
	
	for(i = 0; i < 20; i++) {
		if(palabra[i] == '\n') {
			palabra[i] = '\0';
		}
	}
}
