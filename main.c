/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Hector
 *
 * Created on 22 de agosto de 2018, 07:23 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include<math.h>

/*
 * 
 */
int main() {
    
    int numero1;
   int numero2;
    printf ("Hora de sumaaaar\n");
   printf ("Elige el primer numero");
   scanf ("%d",&numero1);
   printf("Elige el segundo");
   scanf ("%d",&numero2);
   int suma=(numero1)+(numero2);
   double a= fabs(suma);
   printf ("El valor absouto de tu suma es: %g",a);
   
    return 0;
}

