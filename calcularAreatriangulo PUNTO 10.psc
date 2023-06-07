Algoritmo calcularAreatriangulo
	definir lado1, lado2, angulo, area, angulo_radianes Como Real
	//solicitar valores de lados y angulo
	escribir"ingrese el primer lado del triangulo"
	leer lado1
	escribir"ingrese el segundo lado del triangulo "
	leer lado2
	escribir"ingrese el angulo en grados"
	leer angulo
	// convertir angulo de grados a radianes
	angulo_radianes=angulo*3.14159/180.0
	//calcular area del triangulo
	area<-0.5*lado1*lado2*sen(angulo_radianes)
	// imprimir resultado
	escribir"el area del triangulo es", area
	
	
FinAlgoritmo
