#include <iostream>
using namespace std;
class Persona{
	// atributos
	protected : string nombres,apellidos,direccion, fecha;
				int telefono;
	// costructor
	protected : 
		Persona(){
		}
		Persona(string nom,string ape,string dir,int tel, string cum){
			nombres = nom;
			apellidos = ape;
			direccion = dir;
			telefono = tel;
			fecha = cum;
		}
	
	// metodos
	void mostrar();
	
};
