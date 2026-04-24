---
layout: default
title: "2: Tipos Operadores"
parent: "Unidad I: Introducción y Lógica de Programación"
nav_order: 4
---

## 2: Tipos, Operadores y Expresiones

Este bloque es el "taller" donde definimos nuestras herramientas de trabajo. En C, no basta con dar instrucciones; debemos ser precisos sobre qué datos usamos y cómo los manipulamos.

### 1. Nombres de variables (Identificadores)
Para nombrar variables, C sigue reglas estrictas que todo programador debe memorizar (Capítulo 3, Sección 3.6):
*   **Reglas de oro:** Deben comenzar con una letra o un subrayado (`_`). No pueden contener espacios ni caracteres especiales como `@` o `&`.
*   **Sensibilidad a mayúsculas:** C es *case-sensitive*. Esto significa que `minum`, `MiNum` y `MINUM` son tres variables totalmente distintas.
*   **Longitud:** Aunque pueden ser largos, muchos compiladores solo consideran significativos los primeros 31 o 32 caracteres.
*   **Ejemplos:**
    *   ✅ *Válidos:* `fecha_nacimiento`, `_valor`, `notaFinal2`.
    *   ❌ *Inválidos:* `1erParcial` (empieza con número), `valor total` (tiene espacio).

### 2. Tipos de datos y tamaños
C no desperdicia memoria. Cada dato tiene un tamaño específico que puede variar según la máquina, pero el estándar suele ser (Capítulo 3, Sección 3.7 y Tabla 3.1):
*   **char:** Almacena un solo carácter (1 byte). Ejemplo: `'A'`.
*   **int:** Para números enteros (normalmente 2 o 4 bytes).
*   **float:** Números con decimales de precisión simple (4 bytes).
*   **double:** Números con decimales de alta precisión (8 bytes).

**¿Cómo saber cuánto ocupa un dato en MI computadora?**
Usamos el operador **`sizeof`**. Si escribes `sizeof(int)`, el programa te dirá cuántos bytes reserva tu sistema para un entero (Capítulo 4, Sección 4.10).

### 3. Constantes: Valores que no cambian
Existen dos formas principales de definir valores fijos en C (Capítulo 3, Sección 3.9):
1.  **#define (Macros):** Se definen antes del `main`. No ocupan espacio de memoria real, el compilador simplemente busca y reemplaza el nombre por el valor. 
    *   *Ejemplo:* `#define PI 3.141592`
2.  **const:** Se declaran como una variable normal pero con la palabra reservada `const`. Tienen tipo de dato y terminan en punto y coma.
    *   *Ejemplo:* `const int DIAS_SEMANA = 7;`

### 4. Operadores: El motor de los cálculos
C ofrece una rica colección de operadores para transformar datos:

*   **Aritméticos (Capítulo 4, Sección 4.3):** Además de `+`, `-`, `*` y `/`, tenemos el operador **módulo `%`**, que devuelve el resto de una división entera.
    *   *Ejemplo:* `15 % 12` da como resultado `3`.
*   **Incremento y Decremento (Capítulo 4, Sección 4.4):** Los operadores `++` y `--` suman o restan 1. ¡Cuidado con su posición!
    *   `++n` (Prefijo): Primero incrementa, luego entrega el valor.
    *   `n++` (Posfijo): Primero entrega el valor actual, luego incrementa.
*   **Relacionales y Lógicos (Capítulo 4, Secciones 4.5 y 4.6):** Se usan para comparar. En C, **0 es Falso y cualquier otro número es Verdadero**.
    *   **&& (AND):** Verdadero solo si ambos son ciertos.
    *   **\|\| (OR):** Verdadero si al menos uno es cierto.
    *   **! (NOT):** Invierte el valor (lo que es cierto lo hace falso).

### 5. Conversión de tipos (Cast)
A veces mezclamos peras con manzanas. C puede convertir tipos automáticamente (conversión implícita), pero si queremos forzarlo, usamos el **moldeo o cast** (Capítulo 4, Sección 4.11):
*   *Ejemplo:* Si tienes `float x = 3.9;` y quieres convertirlo a entero, escribes `(int)x`. El resultado será `3` (se pierden los decimales).

### 6. Evaluación de Precedencia
Al igual que en matemáticas, no todas las operaciones se hacen a la vez. Los paréntesis `()` tienen la máxima prioridad, seguidos por la multiplicación y división, y finalmente suma y resta (Capítulo 4, Sección 4.12 y Tabla 4.13). Conocer esto evita errores lógicos donde el resultado no es el esperado por falta de paréntesis.

[⬅️ Volver al índice de la clase](./index.md)