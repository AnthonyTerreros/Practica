# Programación: Hilos - Concurrent Merge Sort

Nombre: Terreros Gurumendi

## Compilar programa

El archivo C se llama problema.c

Para compilar se usa el siguiente comando:
```bash
gcc -Wall -pthread -fsanitize=address,undefined problema.c -o problema
```

## Ejecutar Programa

Para ejecutar el programa debes escribir de la siguiente manera: ./problema |numero_de_hilos|
Por ejemplo, si quieres ejecutar el programa con 4 hilos, deberás poner: 
```bash
./problema 4
```

## Uso del programa

Debes ingresar los números uno por uno con un enter, cuando ya no quieras ingresar más números escribie 'x'

## Ejemplo Ilustrativo
> Pantalla por Consola:

> Ingrese los datos: [Escriba x para terminar] 
> 1
> 32
> 45
> 65
> 453
> 234
> 546
> 6788
> x

Inicio: 
1 32 45 65 453 234 546 6788 

Ordenado: 
1 32 45 65 234 453 546 6788 

> Fin de Pantalla por Consola.
