#include <stdio.h>
#include <math.h>

#define PI 3.141592

float VolumenCono(float radio, float altura) {
    float volumen = (PI*pow(radio,2)*altura)/3;
    return volumen;
}

float FahrenheitACelsius(float fahrenheit) {
    float celsius = (fahrenheit - 32) * 5 / 9;
    return celsius;
}

void convertidor(int segundos, int *horas, int *minutos, int *segundos2) {
    *horas = segundos / 3600;
    segundos %= 3600;
    *minutos = segundos / 60;
    *segundos2 = segundos % 60;
}

float notaFinal(int examenes) {
    float sumaNotas = 0.0;
    float nota, calificacion;

    for (int i = 1; i <= examenes; i++) {
        printf("Ingrese la nota del examen %d: ", i);
        scanf("%f", &nota);

        sumaNotas += nota;
    }

    calificacion = sumaNotas / examenes;

    return calificacion;
}

float formula(float r, float a, float b, float c, float d) {
    float y = ((4/(3*(r+34)))-(9*(a+b*c))+((3+d*(2+a))/(a+b*d)));
    return y;
}

float formula2(int x, float sigma, int y, float lambda, float alfa) {
    float f = 3*((x+sigma*y)/(pow(x,2)-pow(y,2)))-lambda*(alfa-13.7);
    return f;
}

double calcularNomina(double sueldoBase, double complementoDestino, double complementoCargoAcademico, int horasExtra, int hijos, int mayoresDependientes) {
    // Calcular el sueldo bruto
    double sueldoBruto = sueldoBase + complementoDestino + complementoCargoAcademico + (23.0 * horasExtra);

    // Calcular el porcentaje de IRPF
    double porcentajeIRPF = 24.0 - (2.0 * hijos) - (1.0 * mayoresDependientes);

    // Calcular los impuestos
    double impuestos = (porcentajeIRPF / 100.0) * sueldoBruto;

    // Calcular el sueldo neto
    double sueldoNeto = sueldoBruto - impuestos;

    // Mostrar los resultados
    printf("\nRESULTADOS\n");
    printf("Sueldo base: %.2lf $\n", sueldoBase);
    printf("Complemento de destino: %.2lf $\n", complementoDestino);
    printf("Complemento de cargo academico: %.2lf $\n", complementoCargoAcademico);
    printf("Horas extra realizadas: %d\n", horasExtra);
    printf("Hijos: %d\n", hijos);
    printf("Mayores: %d\n", mayoresDependientes);
    printf("\nCalculo de nomina:\n");
    printf("Sueldo bruto: %.2lf $\n", sueldoBruto);
    printf("Porcentaje de IRPF: %.0lf %%\n", porcentajeIRPF);
    printf("Retencion por IRPF: %.2lf $\n", impuestos);
    printf("Sueldo neto: %.2lf $\n", sueldoNeto);

    return sueldoNeto;
}

float areaTriangulo2(float lado1a, float lado2a, float angulo2) {

    float radianes = angulo2 * (PI / 180);

    float area2 = 0.5 * lado1a * lado2a * sin(radianes);

    return area2;
}

float areaTriangulo(float lado1, float lado2, float angulo) {

    float radianes = angulo * (PI / 180);
    float area = 0.5 * lado1 * lado2 * sin(radianes);

    return area;
}

float calculo(float capital, float ratio, float plazo) {

    float cuota = (capital*ratio)/(100*(1-pow(1+ratio/100,-plazo)));
    return cuota;
}

int main() {

    //PUNTO UNO
    printf("\nPUNTO UNO\n");
    float radio, altura, volumen;

    radio = 14.5;
    altura = 26.79;

    volumen = VolumenCono(radio, altura);

    printf("El volumen del cono es %f\n", volumen);

    //PUNTO 2
    printf("\nPUNTO DOS\n");
     float fahrenheit, celsius;

    printf("Ingrese la temperatura en grados Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = FahrenheitACelsius(fahrenheit);

    printf("\nEquivalente a %.2f grados Celsius.\n", celsius);

    //PUNTO TRES
    printf("\nPUNTO TRES\n");

    int segundos, horas, minutos, segundos2;

    printf("Ingrese el tiempo transcurrido en segundos: ");
    scanf("%d", &segundos);

    convertidor(segundos, &horas, &minutos, &segundos2);

    printf("\nEl tiempo transcurrido es: %d horas, %d minutos y %d segundos.\n", horas, minutos, segundos2);

    //PUNTO CUATRO
    printf("\nPUNTO CUATRO\n");

    int examenes;

    printf("CALCULADORA DE NOTA FINAL\n\n");
    printf("Ingrese el numero de examenes realizados: ");
    scanf("%d", &examenes);

    float calificacion = notaFinal(examenes);

    printf("La nota final es: %.2f\n", calificacion);

    //PUNTO CINCO
    printf("\nPUNTO CINCO\n");

    float r,a,b,c,d,resultado;

    printf("Ingrese el valor de r = ");
    scanf("%f",&r);
    printf("Ingrese el valor de a = ");
    scanf("%f",&a);
    printf("Ingrese el valor de b = ");
    scanf("%f",&b);
    printf("Ingrese el valor de c = ");
    scanf("%f",&c);
    printf("Ingrese el valor de d = ");
    scanf("%f",&d);

    resultado = formula(r, a, b, c, d);

    printf("El resultado es = %f\n", resultado);

    //PUNTO SEIS
    printf("\nPUNTO SEIS\n");

    int x = 12;
    float sigma = 2.1836;
    int y = 3;
    float lambda = 1.11695;
    float alfa = 328.67;
    float f;

    f = formula2(x, sigma, y, lambda, alfa);

    printf("El valor de f es = %.2f\n", f);

    //PUNTO SIETE
    printf("\nPUNTO SIETE\n");

     // Declaración de variables
    double sueldoBase, complementoDestino, complementoCargoAcademico;
    int horasExtra, hijos, mayoresDependientes;

    // Solicitar los datos al usuario
    printf("Sueldo base: ");
    scanf("%lf", &sueldoBase);

    printf("Complemento de destino: ");
    scanf("%lf", &complementoDestino);

    printf("Complemento de cargo academico: ");
    scanf("%lf", &complementoCargoAcademico);

    printf("Horas extra realizadas: ");
    scanf("%d", &horasExtra);

    printf("Hijos: ");
    scanf("%d", &hijos);

    printf("Mayores: ");
    scanf("%d", &mayoresDependientes);

    // Calcular la nómina utilizando la función calcularNomina()
    double sueldoNeto = calcularNomina(sueldoBase, complementoDestino, complementoCargoAcademico, horasExtra, hijos, mayoresDependientes);

     //PUNTO OCHO
    printf("\nPUNTO OCHO\n");

    int aa = 1;
    double dd = 1.0;

    aa = 46 % 9 + 4 * 4 - 2;
    printf("Resultado expresion 1: %d\n", aa);

    aa = 45 + 43 % 5 * (23 * 3 % 2);
    printf("Resultado expresion 2: %d\n", aa);

    aa = 45 + 45 * 50 % aa--;
    printf("Resultado expresion 3: %d\n", aa);

    dd = 1.5 * 3 + (++dd);
    printf("Resultado expresion 4: %.2f\n", dd);

    dd = 1.5 * 3 + dd++;
    printf("Resultado expresion 5: %.2f\n", dd);

    aa %= 3 / aa + 3;
    printf("Resultado expresion 6: %d\n", aa);

     //PUNTO NUEVE
    printf("\nPUNTO NUEVE\n");

    float lado1a = 10.0;
    float lado2a = 10.0;
    float angulo2 = 45.0;

    float area2 = areaTriangulo2(lado1a, lado2a, angulo2);

    printf("El area del triangulo es: %f\n", area2);

    //PUNTO DIEZ
    printf("\nPUNTO DIEZ\n");

    float lado1, lado2, angulo, area;

    printf("Ingrese el valor del lado 1: ");
    scanf("%f", &lado1);

    printf("Ingrese el valor del lado 2: ");
    scanf("%f", &lado2);

    printf("Ingrese el valor del angulo entre los lados: ");
    scanf("%f", &angulo);

    area = areaTriangulo(lado1, lado2, angulo);

    printf("El area del triangulo es: %f\n", area);

    //PUNTO ONCE
    printf("\nPUNTO ONCE\n");

    float capital,ratio,plazo,cuota,totalPagado,intereses;

    printf("Ingrese el valor del capital prestado = ");
    scanf("%f",&capital);
    printf("Ingrese el valor del interes anual = ");
    scanf("%f",&ratio);
    printf("Ingrese la cantidad en meses que dura el prestado = ");
    scanf("%f",&plazo);

    cuota = calculo(capital,ratio,plazo);

    totalPagado = cuota*plazo;
    intereses = totalPagado - capital;

    printf("El valor de la cuota mensual a pagar es de %.2f pesos\n", cuota);
    printf("El la cantidad de amortizacion es %.2f pesos y la cantidad de interes es %.2f", capital,intereses);



    return 0;
}
