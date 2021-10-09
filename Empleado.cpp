#include "Persona.cpp"
#include <iostream>

using namespace std;

class Empleado : Persona{
  private : string puesto, codem;
  // constructor
  public :
	Empleado(){
  }
  Empleado(string nom,string ape,string dir,int tel, string cum, string puest, string cod_em) : Persona(nom,ape,dir,tel,cum){ 
  puesto = puest;
  codem = cod_em;
  }
  
  // METODOS
  //set (modificar)
  void setPuesto(string puest){puesto = puest;}
  void setCodem(string cod_em){codem = cod_em;}
  void setNombres(string nom){nombres = nom;}
  void setApellidos(string ape){apellidos = ape;}
  void setDireccion(string dir){direccion = dir;}
  void setTelefono(int tel){telefono = tel;}
  void setFecha(string cum){fecha = cum;}

  //get (mostrar)
  string getPuesto(){	return puesto;}
  string getCodem(){	return codem;}
  string getNombres(){	return nombres;}
  string getApellidos(){	return apellidos;}
  string getDireccion(){	return direccion;}
  int getTelefono(){	return telefono;}
  string getFecha(){	return fecha;}
  
  
// metodo
void mostrar(){
	cout<<"______________________"<<endl;
	cout<<puesto<<", "<<codem<<", "<<nombres<<", "<<apellidos<<", "<<direccion<<", "<<telefono<<", "<<fecha<<endl;
}
};


