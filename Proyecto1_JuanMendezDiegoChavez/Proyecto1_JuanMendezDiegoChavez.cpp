#include <vector>
#include <stdlib.h>
#include <iostream>
#include <string>
#include<fstream>
#include "Alumno.h"
using namespace std;
void LeerArchivo();
void Reemplazar(string&,string,string);
int main()
{
	vector <Alumno*> alumno;
	LeerArchivo();
}

void LeerArchivo()
{
	ifstream archivo; // lectura de archivo
	string texto, texto2, texto3;
	char as = 'a';
	archivo.open("2021-07-20.txt",ios::in);
	if (archivo.fail()) { // si no se encuentra el archivo y/o no lo lee correctamente
		cout << "No esta el archivo";
		exit(1);
	}
	while (!archivo.eof()) {
		getline(archivo, texto);
		Reemplazar(texto, "2021-07-20:", "I");
		cout << texto << endl;
	}
	archivo.close();
}
void Reemplazar(string& texto, string buscar, string reemplzado) {
	int pos = texto.find(buscar);
	while (pos != -1) {
		texto.replace(pos, buscar.size(), reemplzado);
		pos = texto.find(buscar, pos + reemplzado.size());
	}
}
