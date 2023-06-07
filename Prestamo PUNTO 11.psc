Algoritmo Prestamo
	definir capital, interes_anual, interes_mensual,cuota_mensual, total_pagado, cantidad_amortizacion, cantidad_interes Como Real
	//preguntar datos a persona
	Escribir "ponga interes_anual"
	leer interes_anual
	Escribir "ponga capital"
	leer capital
	escribir"ponga numero de años"
	leer años
	//plazo_meses
	plazo_meses<-años*12
	//interes_mensual
	interes_mensua<-interes_anual/12/100
	//cuota_mensual
	cuota_mensual<-capital*interes_mensual/(100*(1-(1+(interes_mensual/100) ^(-plazo_meses))))
	//total_pagado
	total_pagado<-cuota_mensual*plazo_meses
	//calcular amortizacion
	cantidad_amortizacion<-capital
	//cantidad de interes
	cantidad_interes<-total_pagado-cantidad_amortizacion
	//mostrar los rresultados
	Escribir "cuota mensual", cuota_mensual
    escribir"total pagado2",total_pagado
	Escribir "cantidad amortizacion", cantidad_amortizacion
	Escribir "cantidad interes", cantidad_interes
	
	
FinAlgoritmo
