Algoritmo Convertir_Tiempo
	
    // Declarar variables
    Definir segundos, horas, minutos, segundos2 como Entero
	
    // Solicitar al usuario el tiempo transcurrido en segundos
    Escribir "Ingrese el tiempo transcurrido en segundos: "
    Leer segundos
	
    

// Llamar a la función convertidor
convertir(segundos1, horas, minutos, segundos2)

// Mostrar el resultado
Escribir "El tiempo transcurrido es: ", horas, " horas, ", minutos, " minutos y ", segundos2, " segundos."

FinAlgoritmo
// Definir función convertidor
SubAlgoritmo convertir( segundos1, horas,  minutos,  segundos2)
	Definir auxiliar como Entero
	horas <- segundos1 / 3600
	auxiliar <- segundos1 % 3600
	minutos <- auxiliar / 60
	segundos2 <- auxiliar % 60
FinSubAlgoritmo