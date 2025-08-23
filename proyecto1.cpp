#include <iostream>
#include <cstdlib>

using namespace std;
int main ()
{

int opcion,numfac,i,e,hijos,edad,subsi,totalarec; 
unsigned long long facto;

do

    {
    cout<<"==============================================Menu==============================================\n";
    cout<<"                            Seleccione la opcion que desea realizar:                             \n\n";
    cout<<"1. Determinar el factorial de un numero \n";
    cout<<"2. Determinar subsidio de familia dependiendo la cantidad de hijos \n";
    cout<<"3. Salir del programa \n";
    cin>>opcion;

    switch (opcion) {

    case 1:
        cout<<"Ingresa el numero que desees saber su factorial: \n";
        cin>>numfac;
        facto=1;

        cout<<"El factorial de "<<numfac<<"! es :\n\n";

                for ( i=1 ; i <= numfac; i++)
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