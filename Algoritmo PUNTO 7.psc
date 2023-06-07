Inicio del programa
Definir variables sueldoBase, complementoDestino, complementoCargoAcademico como números reales
Definir variables horasExtra, hijos, mayoresDependientes como números enteros
Definir variable sueldoNeto como número real

Solicitar al usuario el sueldo base
Leer sueldoBase

Solicitar al usuario el complemento de destino
Leer complementoDestino

Solicitar al usuario el complemento de cargo académico
Leer complementoCargoAcademico

Solicitar al usuario las horas extra realizadas
Leer horasExtra

Solicitar al usuario el número de hijos
Leer hijos

Solicitar al usuario el número de mayores dependientes
Leer mayoresDependientes

Calcular sueldoBruto como sueldoBase + complementoDestino + complementoCargoAcademico + (23 * horasExtra)

Calcular porcentajeIRPF como 24 - (2 * hijos) - (1 * mayoresDependientes)

Calcular impuestos como (porcentajeIRPF / 100) * sueldoBruto

Calcular sueldoNeto como sueldoBruto - impuestos

Mostrar "Sueldo base: " + sueldoBase + " $"
Mostrar "Complemento de destino: " + complementoDestino + " $"
Mostrar "Complemento de cargo académico: " + complementoCargoAcademico + " $"
Mostrar "Horas extra realizadas: " + horasExtra
Mostrar "Hijos: " + hijos
Mostrar "Mayores: " + mayoresDependientes
Mostrar "Sueldo bruto: " + sueldoBruto + " $"
Mostrar "Porcentaje de IRPF: " + porcentajeIRPF + " %"
Mostrar "Retención por IRPF: " + impuestos + " $"
Mostrar "Sueldo neto: " + sueldoNeto + " $"

Fin del programa