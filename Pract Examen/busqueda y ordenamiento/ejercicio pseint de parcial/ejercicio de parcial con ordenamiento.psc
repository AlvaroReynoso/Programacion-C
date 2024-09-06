Algoritmo main
	definir n como entero
	n=4
	m=3
	definir arreglo como caracter
	Dimensionar array[4,3]
	cargaArray(array)
	cargaCant(array)
	ordenar(array,2)
	mostrarTodo(array)
FinAlgoritmo
SubProceso cargaArray(array)
	array[0,0]="01"
	array[0,1]="Mantel 2x2"
	array[0,2]=""
	array[1,0]="02"
	array[1,1]="Plato playo 24cm"
	array[1,2]=""
	array[2,0]="03"
	array[2,1]="Copa vino"
	array[2,2]=""
	array[3,0]="04"
	array[3,1]="Plato hondo 22cm"
	array[3,2]=""
	
FinSubProceso

SubProceso cargaCant(array)
definir i Como Entero
	
Para i=0 hasta 3 con paso 1 hacer
	Escribir "Ingrese la cantidad vendida de",array[i,1]," :"
	leer array[i,2]
FinPara
FinSubProceso

SubProceso ordenar(array,columnaOrd)
	definir i,j,k Como Entero
	definir aux como caracter
	Para i=0 hasta 3 con paso 1 Hacer
		para j=i+1 hasta 3 con paso 1 Hacer
			si array[j,columnaOrd]<array[i,columnaOrd]
			para k=0 hasta 2 con paso 1 hacer
				aux=array[i,k]
				array[i,k]=array[j,k]
				array[j,k]=aux
			FinPara
			FinSi
		FinPara
	FinPara
FinSubProceso

subproceso mostrarTodo(array)
	para i=0 hasta 3 con paso 1 Hacer
		Escribir "Codigo: ",array[i,0]
		Escribir "Producto: ",array[i,1]
		Escribir "Cantidad: ",array[i,2]
	FinPara
FinSubProceso
	