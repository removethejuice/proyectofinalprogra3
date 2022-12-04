#include "Alumno.h"

Alumno::Alumno(string Nombre, string Audio, int Asistencias)
{
	this->Nombre = Nombre;
	this->Audio = Audio;
	this->Asistencias = Asistencias;
}

Alumno::~Alumno()
{
}

string Alumno::GetNombre()
{
	return Nombre;
}

void Alumno::SetNombre(string Nombre)
{
	Nombre = Nombre;
}

string Alumno::Getaudio()
{
	return Audio;
}

void Alumno::Setaudio(string Audio)
{
	Audio = Audio;
}

int Alumno::Getasistencias()
{
	return Asistencias;
}

void Alumno::Setasistencias(int Asistencias)
{
	Asistencias = Asistencias;
}
