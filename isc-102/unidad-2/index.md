---
layout: default
title: "Unidad II: Funciones, Arreglos, Punteros y Memoria "
parent: "ISC-102 Programación Estructurada"
nav_order: 2
has_mermaid: true 
---

# 📘 Unidad II: Funciones, Arreglos, Punteros y Memoria 
# Introducción

¡Bienvenidos a la segunda etapa de nuestro curso! En esta unidad, elevaremos nuestro nivel de programación pasando de simples scripts secuenciales a la creación de software modular y el manejo directo de la memoria.

**[1. Funciones y Estructura de un Programa](./bloque1.md)**
Una función es un grupo de sentencias diseñadas para realizar una tarea específica. La programación estructurada se basa en dividir un problema grande en módulos pequeños y manejables (Capítulo 7, Sección 7.1).

**[2. Arreglos y Punteros](./bloque2.md)**
Para que un programa procese información, necesita almacenarla y manipularla. Aquí es donde entran los elementos básicos para escribir codigo de manera correcta.


## Conclusión de la Unidad
Dominar las funciones y los punteros es el paso definitivo para convertirte en un programador de sistemas. Estos conceptos te dan el control total sobre los recursos de la computadora, permitiéndote crear software eficiente y de alto rendimiento.

**Consejo del libro:** Recuerda siempre indentar (dejar espacios) en tus estructuras de control. Un código limpio es un código fácil de depurar. (Revisa los consejos en el **Capítulo 2, Sección 2.6**).

---
*Referencias: Joyanes Aguilar, L. & Zahonero Martínez, I. (2014). Programación en C, C++, Java y UML.*


# 🚀 Dinamismo en ConsDev

Ingeniero, esta zona está diseñada para que los alumnos experimenten con el código del **Bloque 3** en tiempo real.

---

## 1. JDoodle: Compilador Integrado
Esta herramienta es perfecta para fragmentos cortos. El alumno puede editar el código aquí mismo y presionar **"Execute"**.

```c
#include <stdio.h>

int main() {
    int nota = 85;
    printf("Evaluando nota: %d\n", nota);
    
    if (nota >= 65) {
        printf("Resultado: Aprobado ✅\n");
    } else {
        printf("Resultado: Reprobado ❌\n");
    }
    return 0;
}

```
<div style="margin: 20px 0; border: 2px solid #BB86FC; border-radius: 12px; overflow: hidden;">
    <iframe src="https://www.jdoodle.com/embed/v0/4?stdin=0&arg=0" 
            width="100%" 
            height="450" 
            frameborder="0">
    </iframe>
</div>

## 2. OnlineGDB: Botón de Lanzamiento (Externo)
Esta es la opción más limpia visualmente. Muestra el código estático y ofrece un botón llamativo para que el alumno abra el entorno de desarrollo completo en una pestaña nueva.

### Ejemplo: Ciclo for (Suma de Pares)
```c
#include <stdio.h>

int main() {
    int suma = 0;
    for (int i = 2; i <= 10; i += 2) {
        suma += i;
        printf("Sumando %d, total parcial: %d\n", i, suma);
    }
    printf("\nResultado final de la suma: %d\n", suma);
    return 0;
}

```

<div style="text-align: center; margin: 40px 0;">
    <a href="https://onlinegdb.com/rk-r-0P8_" 
       target="_blank" 
       style="display: inline-block; padding: 16px 32px; background-color: #BB86FC; color: #000; text-decoration: none; border-radius: 50px; font-weight: bold; font-family: sans-serif; box-shadow: 0 4px 15px rgba(187, 134, 252, 0.4); transition: 0.3s;">
       ⚡ EJECUTAR CÓDIGO EN VIVO
    </a>
    <p style="font-size: 0.85rem; color: #666; margin-top: 12px; font-style: italic;">
        (Se abrirá OnlineGDB en una pestaña nueva)
    </p>
</div>

[⬅️ Volver al índice general de la clase](../index.md)