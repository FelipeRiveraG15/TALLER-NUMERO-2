Algoritmo CALCULAR_F
	Definir f Como Real
	Definir sigma Como Real
	Definir alfa Como Real
	Definir lambda como real
	Definir x Como Entero
	Definir t Como Entero
	
	//valores de variables
	lambda<-1.11695
	alfa<-328.67
	t<-3
	x<-12
	sigma<-2.1836
	//hallar f calculamndola con la formula
	f<-3*((x+sigma*t)/(x^2*(-t)^2))-lambda*(alfa-13.7)
	//indicar f
	Escribir "f es",f
	
	
	
FinAlgoritmo
