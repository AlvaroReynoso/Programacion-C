Algoritmo sin_titulo
	definir descuentoEfectivo como real
	definir descuentoDebito como real
	definir descuentoCredito como real
	definir array Como Caracter
	Dimensionar array[3,3]
	cargaDatos(array)
	cargaMonto(array)
	muestraDatos(array)
	descuentoEfectivo=obtenerDescuento(array,0)
	Escribir "El descuento en efectivo es: ",descuentoEfectivo
	descuentoDebito=obtenerDescuento(array,1)
	Escribir "El descuento con Debito es: ",descuentoDebito
	descuentoCredito=obtenerDescuento(array,2)
	Escribir "El descuento con Credito es: ",descuentoCredito
	Escribir "El total de los descuentos es: ",descuentoEfectivo+descuentoCredito+descuentoDebito
FinAlgoritmo
SubProceso cargaDatos(array)
	array[0,0]="Efectivo"
	array[0,1]="0.15"
	array[0,2]=""
	array[1,0]="Debito"
	array[1,1]="0.10"
	array[1,2]=""
	array[2,0]="Credito"
	array[2,1]="0"
	array[2,2]=""
FinSubProceso

SubProceso cargaMonto(array)
	Definir i,j como entero
	para i=0 hasta 2 con paso 1 Hacer
		Escribir "Ingrese el monto de ",array[i,0]
		leer array[i,2]
	FinPara
FinSubProceso

SubProceso muestraDatos(array)
	para i=0 hasta 2 con paso 1
		Para j=0 hasta 2 con paso 1
		Escribir array[i,j] " " Sin Saltar
	FinPara
	Escribir " "
	FinPara
FinSubProceso

Funcion descuento=obtenerDescuento(array,fila)
	definir descuento como real
	definir i,j como real
	descuento=ConvertirANumero(array[fila,2])*ConvertirANumero(array[fila,1])
FinFuncion
	