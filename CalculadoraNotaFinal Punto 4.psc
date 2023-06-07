Algoritmo CalculadoraNotaFinal
    Definir examenes, i Como Entero
    Definir sumaNotas, nota, calificacion Como Real
	
    Escribir "CALCULADORA DE NOTA FINAL"
    Escribir ""
	
    Escribir "Ingrese el numero de examenes realizados: "
    Leer examenes
	
    sumaNotas <- 0.0
	
    Para i <- 1 Hasta examenes Con Paso 1 Hacer
        Escribir "Ingrese la nota del examen ", i, ": "
        Leer nota
		
        sumaNotas <- sumaNotas + nota
    FinPara
	
    calificacion <- sumaNotas / examenes
	
    Escribir "La nota final es: ", calificacion
	
FinAlgoritmo
