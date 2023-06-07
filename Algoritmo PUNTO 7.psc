Inicio del programa
Definir variables sueldoBase, complementoDestino, complementoCargoAcademico como n�meros reales
Definir variables horasExtra, hijos, mayoresDependientes como n�meros enteros
Definir variable sueldoNeto como n�mero real

Solicitar al usuario el sueldo base
Leer sueldoBase

Solicitar al usuario el complemento de destino
Leer complementoDestino

Solicitar al usuario el complemento de cargo acad�mico
Leer complementoCargoAcademico

Solicitar al usuario las horas extra realizadas
Leer horasExtra

Solicitar al usuario el n�mero de hijos
Leer hijos

Solicitar al usuario el n�mero de mayores dependientes
Leer mayoresDependientes

Calcular sueldoBruto como sueldoBase + complementoDestino + complementoCargoAcademico + (23 * horasExtra)

Calcular porcentajeIRPF como 24 - (2 * hijos) - (1 * mayoresDependientes)

Calcular impuestos como (porcentajeIRPF / 100) * sueldoBruto

Calcular sueldoNeto como sueldoBruto - impuestos

Mostrar "Sueldo base: " + sueldoBase + " $"
Mostrar "Complemento de destino: " + complementoDestino + " $"
Mostrar "Complemento de cargo acad�mico: " + complementoCargoAcademico + " $"
Mostrar "Horas extra realizadas: " + horasExtra
Mostrar "Hijos: " + hijos
Mostrar "Mayores: " + mayoresDependientes
Mostrar "Sueldo bruto: " + sueldoBruto + " $"
Mostrar "Porcentaje de IRPF: " + porcentajeIRPF + " %"
Mostrar "Retenci�n por IRPF: " + impuestos + " $"
Mostrar "Sueldo neto: " + sueldoNeto + " $"

Fin del programa