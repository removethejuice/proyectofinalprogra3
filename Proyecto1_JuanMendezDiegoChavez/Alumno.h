#pragma once
#include <iostream>
#include <string>
using namespace std;
class Alumno
{
private:
	string Nombre, Audio;
	int Asistencias;
public:
	Alumno(string, string, int);
	~Alumno();
	string GetNombre();
	void SetNombre(string);
	string Getaudio();
	void Setaudio(string);
	int Getasistencias();
	void Setasistencias(int);

};

