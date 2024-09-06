Algoritmo  inicial
	// Realizar un programa que permita al usuario de un hospital, buscar a un paciente por el
	// número de DNI e informar al usuario los datos de la persona.
	// Realizar una búsqueda secuencial
	Definir dniABuscar Como Cadena
	Definir pacientes Como Cadena
	Dimensionar pacientes(4,5)
	cargarDatos(pacientes)
	Escribir 'Ingrese el DNI que quiere buscar: '
	Leer dniABuscar
	buscarPorDni(pacientes,dniABuscar)
finAlgoritmo

SubAlgoritmo cargarDatos(datos por Referencia)
	datos[0,0]<-'Ana'
	datos[0,1]<-'Martinez'
	// datos[0,2]<-'17123456'
	datos[0,2]<-'2'
	datos[0,3]<-'541141200011'
	datos[0,4]<-'54'
	datos[1,0]<-'Camila'
	datos[1,1]<-'Noe'
	// datos[1,2]<-'25789101'
	datos[1,2]<-'3'
	datos[1,3]<-'543419485831'
	datos[1,4]<-'45'
	datos[2,0]<-'Bruno'
	datos[2,1]<-'Noe'
	datos[2,2]<-'39121314'
	datos[2,3]<-'541145565789'
	datos[2,4]<-'26'
	datos[3,0]<-'Dardo'
	datos[3,1]<-'Pistilli'
	// datos[3,2] = "21151617"
	datos[3,2]<-'9'
	datos[3,3]<-'541158637543'
	datos[3,4]<-'48'
FinSubAlgoritmo

SubAlgoritmo buscarPorDni(datos por Referencia,dni por valor)
	Definir i, j Como Entero
	i <- 0
	Mientras i<=4 Hacer
		Si dni==datos[i,2] Entonces
			Escribir 'Los datos de la persona son: '
			Para j<-0 Hasta 4 Con Paso 1 Hacer
				Escribir datos[i,j]
			FinPara
			i <- 4
		FinSi
		i <- i+1
	FinMientras
FinSubAlgoritmo






