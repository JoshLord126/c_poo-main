// cambio para el repositorio remoto

#include "Cliente.cpp"
#include "Empleado.cpp"
#include <iostream>
using namespace std;
main(){
	string nit,nombres,apellidos,direccion, codi, pue, fecha;
	int telefono, opc;
	
	
	do{
		cout<<"Empleado............ 1\n"<<"Cliente..............2"<<endl;
		cout<<"Valores sobre quien desea ingresar?... ";
		cin>>opc;
		system("cls");
		if(opc==2){
			cout<<"Ingreso de Cliente\n\n";
			cout<<"Ingrese Nit: ";
			cin>>nit;
		}else if(opc==1){
			cout<<"Ingreso de Empleado\n\n";
			cout<<"Ingrese Codigo: ";
			cin>>codi;
			cout<<"Ingrese Puesto: ";
			cin>>pue;
		}
	}while(opc>2 || opc<1);
	
	cout<<"Ingrese Nombres: ";
	cin>>nombres;
	cout<<"Ingrese Apellidos: ";
	cin>>apellidos;
	cout<<"Ingrese Direccion: ";
	cin>>direccion;
	cout<<"Ingrese Telefono: ";
	cin>>telefono;
	cout<<"Ingrese Fecha de nacimiento: ";
	cin>>fecha;


	
	
	
	// instanciar un objeto
	if(opc==2){
		Cliente obj_cli = Cliente(nombres,apellidos,direccion,telefono,fecha, nit);
		obj_cli.mostrar();
	}else if(opc==1){
		Empleado obj_em = Empleado(nombres,apellidos,direccion,telefono,fecha, pue, codi);
		obj_em.mostrar();
	}
	
	

}
