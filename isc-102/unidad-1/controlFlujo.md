---
layout: default
title: "Bloque 3: Control de Flujo"
parent: "Unidad I: Introducción y Lógica de Programación"
nav_order: 5
has_mermaid: true 
---

# Bloque 3: Control de Flujo del Programa

El control de flujo es la "columna vertebral" de la **programación estructurada**. Permite que un programa deje de ser una simple lista de instrucciones que se ejecutan de arriba hacia abajo, para convertirse en un algoritmo inteligente capaz de tomar decisiones y repetir tareas (Capítulo 5, Sección 5.1).

## 1. Declaraciones y Bloques
En C, un **bloque** o sentencia compuesta es un conjunto de instrucciones encerradas entre llaves `{ }`. El programa trata a este conjunto como una única unidad lógica con un solo punto de entrada y uno de salida (Capítulo 5, Sección 5.1). Es fundamental para agrupar varias acciones dentro de una estructura de control.

```c
{
    int temperatura = 25;
    printf("La temperatura actual es: %d", temperatura);
} // Al cerrar la llave, termina el bloque.
```
2. Estructuras de Selección (Decisión)
Estas estructuras permiten al programa elegir entre diferentes caminos de ejecución basándose en si una condición lógica es verdadera o falsa.
Sentencia if-else: Es la estructura básica de dos opciones. Si la condición es verdadera (distinta de cero), se ejecuta la primera acción; si es falsa, se ejecuta la acción dentro del else (Capítulo 5, Sección 5.3).
Bloque else-if (Anidamiento): Se utiliza cuando existen más de dos alternativas. Permite evaluar múltiples condiciones en cadena hasta encontrar una que sea verdadera (Capítulo 5, Sección 5.4).
Sentencia switch: Es una alternativa más clara para selecciones múltiples basadas en un solo valor (selector) de tipo entero o carácter. Es vital usar la instrucción break para evitar que el programa "caiga" en los casos siguientes (Capítulo 5, Sección 5.5).
Ejemplo de selección en C:
int edad = 18;

if (edad >= 18) {
    printf("Es mayor de edad.\n");
} else if (edad > 0) {
    printf("Es menor de edad.\n");
} else {
    printf("Edad no válida.\n");
}
3. Estructuras de Repetición (Bucles)
Los bucles permiten ejecutar una tarea repetidamente con gran precisión, algo fundamental en ingeniería para procesar grandes volúmenes de datos (Capítulo 6, Introducción).
Ciclo while: Es un bucle de tipo pre-test. Evalúa la condición antes de ejecutar el cuerpo. Si la condición es falsa desde el principio, el bucle nunca se ejecuta (Capítulo 6, Sección 6.1).
Ciclo for: Es el más utilizado cuando se conoce de antemano el número de repeticiones. Agrupa la inicialización, la condición y el incremento en una sola línea (Capítulo 6, Sección 6.2).
Ciclo do-while: A diferencia de los anteriores, es un bucle post-test. Evalúa la condición al final, lo que garantiza que el código se ejecute al menos una vez (Capítulo 6, Sección 6.4).
Ejemplo de ciclos en C:
// Bucle for: Imprimir números del 1 al 5
for (int i = 1; i <= 5; i++) {
    printf("%d ", i);
}

// Bucle do-while: Validar que el usuario ingrese un número positivo
int num;
do {
    printf("\nIngrese un numero mayor a 0: ");
    scanf("%d", &num);
} while (num <= 0);
Conclusión del Bloque
Dominar estas estructuras (secuencia, selección y repetición) te permite construir cualquier algoritmo lógico. Como recomienda el libro de Joyanes, el uso correcto de la indentación (sangría) en estos bloques es clave para que tu código sea legible y profesional (Capítulo 5, Sección 5.8).
[⬅️ Volver al índice de la clase](./index.md)