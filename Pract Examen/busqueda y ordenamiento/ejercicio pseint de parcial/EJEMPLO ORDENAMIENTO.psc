Proceso sin_titulo
    definir numeros_enteros Como Entero
    definir n, i, j Como Entero
    n <- 3
    Dimensionar numeros_enteros[n]
	
    Para i = 0 Hasta n-1 Con Paso 1 Hacer
            Mostrar "Ingrese un valor"
            Leer numeros_enteros[i]
        Fin Para
	
    
		ordenar(numeros_enteros,n)
		mostrar_arreglo(numeros_enteros, n)
	
FinProceso

SubProceso mostrar_arreglo(numeros_enteros, n)
    Para i = 0 Hasta n-1 Con Paso 1 Hacer
            Mostrar numeros_enteros[i]
	Fin Para
FinSubProceso

SubProceso ordenar(numeros_enteros, n)
	definir aux como entero
    Para i = 0 Hasta n-2 Con Paso 1 Hacer
        Para j = i+1 Hasta n-1 Con Paso 1 Hacer
			si	numeros_enteros[j]<numeros_enteros[i]
				aux=numeros_enteros[i]
				numeros_enteros[i]=numeros_enteros[j]
				numeros_enteros[j]=aux
			FinSi
        Fin Para
    Fin Para
FinSubProceso