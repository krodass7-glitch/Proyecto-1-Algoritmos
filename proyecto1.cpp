/*Este programa indica un menu de seleccion donde de depende su seleccion este puede calcular una permutacion
o bien determinar el subsidio de una familia dependiendo la cantidad de hijos que esta tiene*/  
#include <iostream>
#include <cstdlib>

using namespace std;
int main ()
{

int opcion,numfac,i,e,hijos,edad,subsi,totalarec; 
unsigned long long facto;

    /*En este apartado hay un switch donde dependiendo la seleccion que escoja este tomara el case con el 
    numero seleccionado*/
do

    {
    cout<<"==============================================Menu==============================================\n";
    cout<<"                            Seleccione la opcion que desea realizar:                             \n\n";
    cout<<"1. Determinar el factorial de un numero \n";
    cout<<"2. Determinar subsidio de familia dependiendo la cantidad de hijos \n";
    cout<<"3. Salir del programa \n";
    cin>>opcion;

    switch (opcion) {

      /*Si escoge el 1 se calculara la permutacion donde con un cliclo for se repetira hasta que el numero 
      ingresado sea igual y este se multiplicara por si mismo*/

    case 1:
        cout<<"Ingresa el numero que desees saber su factorial: \n";
        cin>>numfac;
        facto=1;

        cout<<"El factorial de "<<numfac<<"! es :\n\n";

                for ( i=0 ; i <= numfac; i++)
                {

                    facto*=i;

                         if (i<numfac)
                    {
                        cout<<i<<" * ";
                    }
                        else
                        cout<<i<<" = ";
                }
                       cout<<facto<<"\n";
        break;
    case 2:

                
        /*En la seleccion numero 2 le pedira que ingrese la cantidad de hijos dependiendo la cantidad el ciclo
        if y else if se ejecutaran donde entre mismos hay otro if donde hace una prueba logica donde dice si la
        edad del hijo en mayor o igual a 7 y menos o igual a 18 este calculara un porcentaje adicional del subsidio*/
        cout<<"Ingrese la cantidad de hijos que tiene para saber de cuanto es el subsidio\n";
        cin>>hijos;
        i=1;
        e=0;        
          
        if (hijos<=3)
        {
             do
        {
            cout<<"Ahora indica la edad de tu "<<i<<" hijo para ver si aplica el 6% mas del subsidio\n";
            cin>>edad;
            i++;

            if (edad>=7&&edad<=18)
              {
                e++;
                subsi=300*0.06;
                totalarec=e*subsi;
              }

              } while (i<=hijos);

                cout<<"Monto de recibir Q.300.00 \n";
                cout<<"Y el subsidio de "<<e<<" hij@s es de: Q."<<totalarec<<".00\n";
                cout<<"El monto a recibir con el subsidio es de Q."<<300+totalarec<<".00\n";
                
            } else if (hijos>=4&&hijos<=5) {

                do
                {
                       
                cout<<"Ahora indica la edad de tu "<<i<<" hijo para ver si aplica el 6% mas del subsidio\n";
                cin>>edad;
                i++;

                if (edad>=7&&edad<=18)
              {
                e++;
                subsi=350*0.06;
                totalarec=e*subsi;
              }

                 } while (i<=hijos);

                cout<<"Monto de recibir Q.350.00 \n";
                cout<<"Y el subsidio de "<<e<<" hij@s es de: Q."<<totalarec<<".00\n";
                cout<<"El monto a recibir con el subsidio es de Q."<<350+totalarec<<".00\n";

                } else if (hijos>5) {
                do
                {
                       
                cout<<"Ahora indica la edad de tu "<<i<<" hijo para ver si aplica el 6% mas del subsidio\n";
                cin>>edad;
                i++;

                if (edad>=7&&edad<=18)
              {
                e++;
                subsi=400*0.06;
                totalarec=e*subsi;
              }

                 } while (i<=hijos);

                cout<<"Monto de recibir Q.400.00 \n";
                cout<<"Y el subsidio de "<<e<<" hij@s es de: Q."<<totalarec<<".00\n";
                cout<<"El monto a recibir con el subsidio es de Q."<<400+totalarec<<".00\n";
              }
                
        break;

        /*En la seccion numero 3 se llamo la libreria cstdlib para poder limpiar la pantalla y el ciclo 
        while terminara hasta que sea igual o difernte de la opcion elegida*/
    
    case 3:
        cout<<"Saliendo del programa \n";
        system("cls");
        return 0;
        break;

    default:
        
        cout<<"Por Favor seleccionar una opcion de las antes mencionadas \n";
        system("cls");
        
    }
    } while (opcion!=1||opcion!=2||opcion!=3);

    return 0;

}