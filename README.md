# prog2
#Guía de ejercicios correspondiente a la materia progII.

Guía:
TP 1. Repaso matrices y vectores 

Vectores
1.Hacer una función que reciba como parámetros un vector de enteros y un número entero que indica la cantidad de componentes del vector, 
y que devuelva el valor mínimo contenido en ese vector.
2.Hacer una función que reciba como parámetros un vector de enteros y un número entero que indica la cantidad de componentes del vector, 
y que devuelva el valor máximo contenido en ese vector.
3.Hacer una función que reciba como parámetros un vector de enteros y un número entero que indica la cantidad de componentes del vector, 
y que devuelva la posición que cupa el valor mínimo contenido en ese vector.
4.Hacer una función que reciba como parámetros un vector de enteros y un número entero que indica la cantidad de componentes del vector, y que devuelva la posición 
que ocupa el valor máximo contenido en ese vector.
5.Hacer una función que reciba como parámetros un vector de enteros de 10 elementos y un número entero, y que devuelva verdadero si el número recibido existe en el 
vector, o falso si no existe.
6.Hacer una función que reciba como parámetros un vector de enteros de 10 elementos y un número entero, y que devuelva la posiciónsi el número recibido existe en el
vector, o -1si no existe.
7.Hacer una función que reciba como parámetros un vector de enteros de 10 elementos y un número entero, y que devuelva la cantidad de veces que el número recibido 
como parámetro se repite dentro del vector.

Matrices
1.Hacer una función que reciba como parámetros una matriz de enteros de 10x10 y un número entero (entre 0 y 9), y devuelva el máximo de la fila indicada 
por el segundo parámetro. 
2.Hacer una función que reciba como parámetros una matriz de enteros de 10x10 yun número entero (entre 0 y 9), y devuelva la posición que ocupa el máximo 
en la fila indicada por el segundo parámetro. 
3.Hacer una función que reciba como parámetros una matriz de enteros de 10x10 y un número entero (entre 0 y 9), y devuelva la suma de todos los 
componentes de la columna indicada por el segundo parámetro. 
4.Hacer una función que reciba como parámetros una matriz de enteros de 10x10 y un número entero (entre 0 y 9), y devuelva la cantidad de componentes 
positivos de la columna indicada por el segundo parámetro. 
5.Hacer una función que reciba como parámetros una matriz de enteros de 10x10, y devuelva la suma de todos los componentes de la matriz. 

Combinados
1) Una empresa vende 5 diferentes tipos de artículos en 3 sucursales. Por cadaventa que realiza, se anotaron los siguientes datos: 
-Nro. de artículo (1 a 5) 
-Nro. de sucursal (1 a 3) 
-Cantidad vendida 

Este lote finaliza con un registro con nro. de artículo igual a cero. Puede haber más de un registro para el mismo artículo en la misma sucursal. 
Se desea determinar e informar:
a)Un listado con la cantidad de artículos vendidos en cada sucursal, con el siguiente formato:
            Sucursal 1             Sucursal 2               Sucursal 3  
Artículo 1  Xxxxxxxxxxxxxxx        Xxxxxxxxxxxxxxx          Xxxxxxxxxxxxxxx
Artículo 2  Xxxxxxxxxxxxxxx        Xxxxxxxxxxxxxxx          Xxxxxxxxxxxxxxx                               
Artículo 3  Xxxxxxxxxxxxxxx        Xxxxxxxxxxxxxxx          Xxxxxxxxxxxxxxx
Artículo 4  Xxxxxxxxxxxxxxx        Xxxxxxxxxxxxxxx          Xxxxxxxxxxxxxxx
Artículo 5  Xxxxxxxxxxxxxxx        Xxxxxxxxxxxxxxx          Xxxxxxxxxxxxxxx

b)Informar cual fue el nro. de artículo más vendido en total en cada una de las tres sucursales. 

2) Una persona ha anotado sus gastos, día a día, durante todo el año pasado. Para cada gasto ha confeccionado el siguiente registro: 
-Mes (de 1 a 12) -Día (de 1 a 31) -Importe del Gasto (en $) 
Esta persona puede haber efectuado varios gastos en el mismo día, y desea obtener un listado con el gasto total de cada mes, y el día de mayor 
gasto total en cada mes y su monto. Los registros vienen desordenados yel último se indica con mes igual a cero. 
Confeccionar un programa C que resuelva este problema. 

3) Una empresa fabrica 200 productos que son vendidos por 5 vendedores. 
La empresa    quiere obtener un listado en el que figure el monto total en pesos de las ventas efectuadas en 2018por cada uno de sus vendedores, mes por mes. 
Para ello dispone de un lote de registros con los siguientes datos de cada una de las ventas: 
-Día (1 a 31) -Mes (1 a 12) -Importe ($) -Código de vendedor (‘a’, ‘b’, ‘c’, ‘d’, ‘e’) 
Este lote está desordenado y cualquier vendedor puede haber vendido el mismo producto, en un mismo día, a diferentes clientes. 
El fin se indica con un registro con día igual a cero. Construya un programa C para resolver el problema. 

4) Una fábrica produce 70 distintos tipos de engranajes en 15 máquinas. Dispone de un lote de registros con la producción del último mes, 
con la siguiente información: 
-Día -Tipo de Engranaje (1 a 70) -Número de máquina utilizada (1 a 15) 
-Cantidad producida Los registros están desordenados y se pueden repetir para un mismo día y para una misma máquina la producción del mismo tipo de engranaje. 
El fin del lote se indica con un registro con día 32.
Confeccionar un programar para informar:
a)El tipo de engranaje del cual se han producido en total la mayor cantidad de unidades.
b)El número de máquina que menos cantidad en total produjo. 
c)Un listado con el siguiente formato: Tipo de Engranaje    Nro. de Máquina    Cant. Producida 


TP 2. Repaso cadenas de caracteres

1) Hacer funciones que reciban los mismos parámetros y realicen las mismas acciones que las siguientes funciones de la librería string.h:
-int strcmp(char *, char *)
-void strcpy(char*, char *)
-int strlen(char *)
-char * strcat(char *, char *)

2)Hacer una función que reciba como parámetros una cadena de caracteres y dos caracteres, y reemplace en la cadena todas las ocurrencias del primer carácter dado 
por el segundo. 
Ejemplo: CADENA FUENTE:           “La mar estaba serena”
CARÁCTER 1:               ‘a’ CARÁCTER 2:                  ‘i’ 
CADENA RESULTADO:  “Li mir estibi sereni” 

3)Diseñar una función que reciba como parámetros una cadena de caracteres, un valor entero que representa una posición de ella y 1 carácter, e inserte en la cadena
el carácter dado en la posición pedida.
Ejemplo: CADENA FUENTE:          “Hola” 
CARÁCTER:                    ’a’ 
POSICION:                      1 
CADENA RESULTADO: “Hala” 
NOTA: la función no debe hacer nada si el valor de posición es mayor que la cantidad de caracteres de la cadena

4)Diseñar una rutina que liste por pantalla en forma de columna las letras de una palabra dada. 

5)Hacer un programa para cargar y mostrar una matriz de char de 5x10 de la siguiente manera: 
-Con palabras de hasta 9 caracteres.
-Con palabras de 10 o más caracteres.
Analizar y explicar las diferencias que se producen al mostrar palabra por palabra el contenido de la matriz. 


TP 4. Registros

1)Un negocio representa los artículos con los que trabaja de la siguiente manera:
•Código de artículo (char[5]) •Descripción (char[30]) •Precio unitario (float) •Unidades en stock (int)
Diseñar el struct correspondiente, y hacer un programa con funciones para cargar y mostrar un registro de artículo. 

2)Un comercio vende un total de 50 artículos diferentes. Para cada uno de ellos almacena la informaciónque se detalló en el ejercicio anterior.
Hacer un programa para cargar y mostrar por pantallala lista de artículos.El programa debe tener un menú confunciones.

3)Hacer una función que reciba un vector de tipo struct articulo, con el mismo formato del ejercicio anterior, y una cadena de caracteres, y devuelva la posición
del código del registro que coincida con la cadena recibida. En caso de que no exista coincidencia debe devolver -1. 

4)Igual al ejercicio anterior, pero la función debe devolver el registro completo. En caso de que no exista coincidencia, debe devolver un registro con valor -1 
en el campo precio unitario. 

5)Modificar el ejercicio 2, de tal manera de no permitir que se repita el código de artículo en diferentes registros. Usar para eso la función del ejercicio 3.

6)Agregar la opción Venta, al menú del ejercicio 2. En la venta se debe pedir el código de artículoy la cantidad de unidades a comprar, e informar el importe de 
la venta. Se debe verificar que exista el código, y que la cantidad pedida no exceda el stock disponible. Con cada venta debe disminuir el stock del artículo 
vendido.
