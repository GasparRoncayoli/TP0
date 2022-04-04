#include <stdio.h>
#include <stdlib.h>



int main()
{

    int ejercicio1 () {

    //Ejercicio 1

     float num,porcentaje;

    num=0;
    porcentaje=0;

    printf ("indicar el capital\n");
    scanf("%f", &num);

    porcentaje=(num*0.02);

    printf(" Ganaras: $ %f",porcentaje);

    printf("\n\n");
    main();

    }
    int ejercicio2 (){

        //Ejercicio 2

      float num=0,descuento=0,total=0;

      printf ("Indicar el monto total de la compra\n" );
      scanf ("%f", &num);

      descuento=(num*0.15);
      total=(num-descuento);

      printf("El monto a pagar teniendo en cuenta el descuento es de: $%f " ,total);

       printf("\n\n");
       main();

    }
    int ejercicio3(){

    //Ejercicio 3

    int hombres=0, mujeres=0, alumnos=0, porcentajeHombres=0, porcentajeMujeres=0;

    printf("indicar cuantos hombres hay en el salon\n");
    scanf("%i", &hombres);

    printf("indicar cuantas mujeres hay en el salon\n ");
    scanf("%i", &mujeres);

    alumnos=(hombres+mujeres);

    porcentajeHombres=((hombres*100)/alumnos);
    porcentajeMujeres=((mujeres*100)/alumnos);

    printf ("el porcentaje de alumnos hombres es: %i \n", porcentajeHombres);
    printf("el porcentaje de alumnas mujeres es: %i ", porcentajeMujeres);


    printf("\n\n");
    main();

    }
    int punto1CondicinalSimple(){

    //PUNTO 1 CONDICIONAL SIMPLE

    float nota1,nota2,nota3;

    printf("Indicar la primera nota del alumno \n");
    scanf("%f",&nota1);

    printf("Indicar la segunda nota del alumno\n");
    scanf("%f", &nota2);

    printf("Indicar la tercera nota del alumno\n");
    scanf("%f", &nota3);

    float promedio= ((nota1+nota2+nota3)/3);

    if(promedio>=7)
    {
        printf("el alumno esta aprobado ");

    }
       else
        {
            printf("el alumno esta desaprobado");
        }

    printf("\n\n");
    main();

    }
    int punto2CondicionalSimple(){
        //PUNTO 2 CONDICIONAL SIMPLE


   float compra, descuento, total;

   printf("indicar el precio de la compra \n");
   scanf ("%f", &compra);

   if(compra>5000)
   {
    descuento=compra*0.15;
    total=compra-descuento;

    printf("El total a pagar es: $%f",total);
   }

   else
   {
       printf("el total a pagar es: $%f",compra);
   }

    printf("\n\n");
    main();

    }
    int punto3CondicionalSimple(){
        //PUNTO 3 CONDICONAL SIMPLE


    int horasTrabajadas=0, horas40=0;

    printf ("Indicar la cantidad de horas trabajadas \n\n ");
    scanf("%d", &horasTrabajadas);

    if (horasTrabajadas<=40){



    horas40= horasTrabajadas * 300;

    printf ("su salario semanal es: $%d", horas40);


    }

    else {

    int horasExtra= horasTrabajadas-40;

    horas40=40*300;

    int horasTotal= horas40+ (horasExtra*400);

    printf("Su salario semanal es $%d ", horasTotal);

    printf("\n\n");
    main();

}


    }
    int punto4CondicionalSimple(){

        //EJERCICIO 4 CONDICIONAL SIMPLE



        float num1, num2;

        printf ("indicar el primer numero \n\n");
        scanf("%f", &num1);

        printf ("indicar el segundo numero\n\n");
        scanf ("%f", &num2);

        if (num1<num2) {

        printf(" %f %f", num1, num2);

       }

        else {
        printf(" %f %f", num2,num1);
       }

        printf("\n\n");
        main();


     }
    int punto5CondicionalSimple(){

    // EJERCICIO 5 CONDICIONAL SIMPLE


      int cantidadCamisas;
      float precioCamisas;

       printf ("indicar el precio total de la compra \n\n");
       scanf ("%f", &precioCamisas);

       printf("Indicar el numero de camisas que lleva el cliente \n\n ");
       scanf ("%i",&cantidadCamisas);

       if (cantidadCamisas>=3) {

          float descuento20= precioCamisas-(precioCamisas* 0.20);

       printf("el precio a pagar es $%f", descuento20);

       }

       else {

        float descuento10= precioCamisas-(precioCamisas*0.10);

        printf("el precio total a pagar es $%f",descuento10);
       }
    printf("\n\n");
    main();


        }
    int punto1CondicionalCompuesto(){

    //Problemas Condicionales Selectivos Compuestos (si anidados o en cascada) EJ 1

   float num1=0, num2=0, resultado=0;

   printf("indicar el primer numero \n\n");
   scanf("%f", &num1);

   printf("indicar el segundo numero\n\n");
   scanf("%f", &num2);

   if (num1>num2){

      resultado= num1-num2;
   }

   else if (num1<num2){

   resultado= num1 + num2;
   }

   else if(num1=num2){
    resultado= num1*num2;
   }

   printf("%f",resultado);

   printf("\n\n");
    main();




    }
    int punto2CondicionalCompuesto(){

   //Problemas Condicionales Selectivos Compuestos (si anidados o en cascada) EJ 2


   float num1,num2,num3;

   printf ("indicar el primer numero \n\n");
   scanf("%f", &num1);

   printf ("indicar el segundo numero \n\n");
   scanf("%f",&num2);

   printf ("indicar el tercer numero \n\n");
   scanf("%f",&num3);

   if (num1>num2 && num1>num3){

        printf("%f",num1);
        }

        else if (num2>num1 && num2>num3){

            printf("%f",num2);

        }

         else if (num3>num1 && num3>num2)

            printf ("%f", num3);



    printf("\n\n");
    main();


    }
    int punto1Repeticiones(){

    //Problemas con repeticiones EJ1


  float nota, promedio, acumulador=0;;
  int i;


  for (i=1; i<=7; i++)
  {
   printf("indicar la nota de la evaluacion\n\n");
   scanf("%f", &nota);

   acumulador = acumulador + nota;
  }

   promedio = acumulador/7;

   printf ("tu promedio es %f",promedio );

   printf("\n\n");
    main();


    }
    int punto2Repeticiones(){
    //Problemas con repeticiones EJ2


   int num,i;
   float cubo, cuarta;

   for (i=1; i<=10; i++ ){

    printf("insertar un numero\n\n");

    scanf("%d", &num);

    cubo=num*num*num;
    cuarta=num*num*num*num;

    printf("su cubo es:%f y su cuarta es: %f",cubo,cuarta);

   }

    printf("\n\n");
    main();



    }
    int punto3Repeticiones(){

    //Problemas con repeticiones EJ3


   float num=0 ;
   int i=0;

   for (i=1; i<=10; i++) {

    printf("indicar el numero\n\n");
    scanf("%f", &num);

    if (num>=0){
    printf("su numero es %f \n\n", num);}

    }

    printf("\n\n");
    main();

    }
    int punto4Repeticiones(){

     //Problemas con repeticiones EJ4



     float num,total;
     int i ;


     for (i=1;i<=15;i++){

        printf("indicar un numero NEGATIVO \n\n");
        scanf("%f", &num);

        total=num*-1;

        printf ("el numero convertido es %f \n\n",total);
     }

    printf("\n\n");
    main();

    }
    int punto5Repeticiones(){
     //Problemas con repeticiones EJ5


    float calif=0,acumulador=0,notamasbaja=10, promedio=0;
    int i=0;

  for(i=1; i<=40; i++){

    printf("Indicar la nota del alumno \n\n");
    scanf("%f",&calif);



    if (calif<notamasbaja){

    notamasbaja=calif;}



    acumulador=acumulador+calif;
    promedio=acumulador/i;

    }

    printf("El promedio de los alumnos es: %f y la nota mas baja es %f", promedio,notamasbaja);


    printf("\n\n");
    main();


    }
    int punto6Repeticiones(){

     //Problemas con repeticiones EJ6


     int i=0,num=0,producto=0,contador=0;

     printf("La tabla de que numero quieres saber \n\n");
     scanf("%i",&num);

     for(i=1;i<=10;i++){

     contador=contador+1 ;
     producto= num*contador;

     printf ("%i * %i = %i \n", num,contador,producto);

     }

    printf("\n\n");
    main();

    }
    int menu(){

        printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
        printf ("\n");
        printf ("para los Problemas Secuenciales apretar 1 2 3 Respectivamente \n");
        printf("\n\n");
        printf ("para los Problemas Condicionales Selectivos Simples apretar 4 5 6 7 8 Respectivamente \n");
        printf("\n\n");
        printf ("para los Problemas Condicionales Selectivos Compuestos (si anidados o en cascada) apretar 9 10 respectivamente \n");
        printf("\n\n");
        printf ("para los Problemas con repeticiones apretar 11 12 13 14 15 16 Respectivamente \n");
        printf("\n\n");
    }
        menu();





    int control=0;

    printf("indicar el ejercicio al que quiere ir \n");
    scanf("%d",&control);

    switch (control){
    case 1:
        ejercicio1();
        break;
    case 2:
        ejercicio2();
        break;
    case 3:
        ejercicio3();
        break;
    case 4:
        punto1CondicinalSimple();
        break;
    case 5:
        punto2CondicionalSimple();
        break;
    case 6:
        punto3CondicionalSimple();
        break;
    case 7:
        punto4CondicionalSimple();
        break;
    case 8:
        punto5CondicionalSimple();
        break;
    case 9:
        punto1CondicionalCompuesto();
        break;
    case 10:
        punto2CondicionalCompuesto();
        break;
    case 11:
        punto1Repeticiones();
        break;
    case 12:
        punto2Repeticiones();
        break;
    case 13:
        punto3Repeticiones();
        break;
    case 14:
        punto4Repeticiones();
        break;
    case 15:
        punto5Repeticiones();
        break;
    case 16:
        punto6Repeticiones();
        break;

    }





}






