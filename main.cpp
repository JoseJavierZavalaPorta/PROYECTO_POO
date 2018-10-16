#include <iostream>
#include <string.h>

//Me oyes? Me sientes?
//JOOOOOOOSSSSSEEEEEEE

using namespace std;
 int opcion;
//funciones
void bienvenida(){
  cout<<"**************************************"<<endl;
  cout<<"*                                    *"<<endl;
  cout<<"* Bienvenidos al juego de refranes:  *"<<endl;
  cout<<"*                                    *"<<endl;
  cout<<"**************************************"<<endl;
  cout<<endl;
}

void menuDelPorgrama(){
   
  cout<<"**ESTAMOS LISTOS PARA EMPEZAR A JUGAR*"<<endl<<endl;
  cout<<"Ingrese el número de la opción que desee utilizar: "<<endl;
  cout<<"(1) Jugar a completar Refranes"<<endl <<"(2) Mostrar resultados anteriores"<< endl << "(3) Salir"<<endl;
  cout << "¿Cuál eliges?: "; cin >> opcion;
}

 void MostrarRefranIncompleto(){

   //Opción 1: Justar todos los refranes incompletos un un string 
   string respuesta;
   cout << "\n VAMOS CON LOS REFRANES! \n ";
   
   string refranes[10][2] = {
       {"Haciendo y deshaciendo se va","aprendiendo"},{"Quien no hace lo que dice","acaba diciendo lo que hace"},
       {"Cada persona es dueña de su silencio y esclava","de sus palabras"},
       {"El que siembra vientos", "cosecha tempestades"}, 
       "El que a buen árbol se arrima buena sombra le cobija", 
       "Nadie escarmienta en cabeza ajena", 
       "A río revuelto, ganancia de pescadores", 
       "En boca cerrada no entran moscas", 
     "No hay mal que por bien no venga", 
     "Haz el bien y no mires a quien", 
     "A enemigo que huye, puente de plata"
     };
      int nrefran=1;
  
  for (int i = 0; i < 2; i++) {
      
      cout <<  "El refrán "<< nrefran <<" es ---->  "<< refranes[i][0]<< " [...] <----"<< endl;
      cout << "Completa el refrán: "; cin >> respuesta;
      
      string correcto = refranes[i][1];
      if (respuesta == correcto){
      cout << "\n OMG OMG OMG! GOOOOD! \n "<< endl;
      }
      else
      cout <<"\n Te mamaste RICK, esa no es la respuesta \n";
      cout << "Vamos con el siguiente :D! \n"<<endl;
      nrefran= nrefran +1; 	
 }
 }

//comando principal
int main(){
bienvenida();
menuDelPorgrama();
  switch (opcion){
case 1: cout << "Usted ha seleccionado la opción 1"<< endl;MostrarRefranIncompleto();
    break;
    case 2: cout << "Usted ha seleccionado la opción 2";
    break;
    case 3: cout << "Usted ha seleccionado la opción 3";
    break;
    default: cout << "Usted ha ingresado una opción incorrecta";
  }
    
return 0;
}
