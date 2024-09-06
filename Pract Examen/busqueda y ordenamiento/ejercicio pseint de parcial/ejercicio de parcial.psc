Algoritmo sin_titulo
	definir array como caracter
	definir acumTotal como real
	definir total Como Real
	acumTotal=0
	dimensionar array[4,4]
	cargaDatos(array)
	acumTotal=ingresoCant(array,acumTotal)
	total=monto(array)
	mostrar "El total de cantidades de productos son: ",acumTotal
	total=monto(array)
	Mostrar "Lo reacaudado es: ",total
	Mostrar "El iva es " ,total*0.21
FinAlgoritmo
SubProceso cargaDatos(array)
	array[0,0]="01"
	array[0,1]="3500"
	array[0,2]="Mantel 2x2"
	array[0,3]=""
	array[1,0]="02"
	array[1,1]="800.99"
	array[1,2]="Plato playo 24cm"
	array[1,3]=""
	array[2,0]="03"
	array[2,1]="1450.50"
	array[2,2]="Copa vino"
	array[2,3]=""
	array[3,0]="04"
	array[3,1]="650.50"
	array[3,2]="Plato hondo 22cm"
	array[3,3]=""
	
	FinSubProceso

funcion acumTotal=ingresoCant(array,acumTotal Por valor)
	definir i,j como entero
	Para i=0 hasta 3 con paso 1 Hacer
		Escribir "Ingrese cantidad vendida del producto",i+1
		leer array[i,3]
		acumTotal=acumTotal+[ConvertirANumero(array[i,3])]
	FinPara
	FinSubProceso
	
Funcion total=monto(array)
		definir i Como Entero
		definir total Como Real
		Dimensionar arregloTotalSuma[3]
	
	Para i=0 hasta 3 con paso 1 Hacer
		
		total=total+ConvertirANumero(array[i,1])*ConvertirANumero(array[i,3])
	FinPara
	
	FinFuncion
	