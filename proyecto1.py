"""Este programa indica un menu de seleccion donde de depende su seleccion este puede calcular una permutacion
o bien determinar el subsidio de una familia dependiendo la cantidad de hijos que esta tiene"""

import os
#llamamos la libreria os para poder convertir variables a variables de entonrno#


"""Mientras en ciclo while sea verdadero este se ejecutara"""
while True:
    print("==============================================Menu==============================================")
    print("                            Seleccione la opcion que desea realizar:                             \n\n")
    print("1. Determinar el factorial de un numero")
    print("2. Determinar subsidio de familia dependiendo la cantidad de hijos")
    print("3. Salir del programa\n")

    opcion = int(input("Selecciona la opcion que deseas realizar: "))
    
    
    if opcion == 1:
        numfac = int(input("Ingressa el numero que desees saber su factorial: "))
        facto = 1
        print(f"El factorial de {numfac}! es:\n")
        for i in range(1, numfac + 1):
            facto *= i
            if i < numfac:
                print(i, "*", end=" ")
            else:
                print(i, "=", end=" ")
        print(facto)

    elif opcion == 2:
        hijos = int(input("Ingrese la cantidad de hijos que tiene: "))
        i = 1
        e = 0
        totalarec = 0

        if hijos <= 3:
            base = 300
        elif 4 <= hijos <= 5:
            base = 350
        else:
            base = 400

        while i <= hijos:
            edad = int(input(f"Ahora indica la edad de tu hijo {i}: "))
            i += 1
            if 7 <= edad <= 18:
                e += 1
                subsi = base * 0.06
                totalarec = e * subsi

        print(f"\nMonto de recibir Q.{base}.00")
        print(f"Y el subsidio de {e} hij@s es de: Q.{totalarec}.00")
        print(f"El monto a recibir con el subsidio es de Q.{base + totalarec}.00")

    elif opcion == 3:
        print("Saliendo del programa...")
        break

    else:
        print("Por Favor seleccionar una opcion valida")
        os.system("cls")  
