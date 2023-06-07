Algoritmo CalcularAreatriangulo
	definir seno como numerica
	p=3.14159265
	escribir"ingrese el lado 1 del triangulo"
	leer lado1
	escribir"ingrese el lado 2 del triangulo"
	leer lado2
	escribir"ingrese el angulo (en grados) entre los dos lados"
	leer angulo
	radianes<-angulo*(p/180.0)
	seno<-sen(radianes)
	area=0.5*lado1*lado2*seno
	//mostrar resultado
	escribir"el area del triangulo es", area
	
FinAlgoritmo
