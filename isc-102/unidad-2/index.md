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


## 2. OnlineGDB: Botón de Lanzamiento (Externo)
Esta es la opción más limpia visualmente. Muestra el código estático y ofrece un botón llamativo para que el alumno abra el entorno de desarrollo completo en una pestaña nueva.

### Ejemplo: Ciclo for (Suma de Pares)
```c
{% include_relative example.c %} 
```

<iframe 
    src="/ConsSorto.github.io/compilerc.html?file=https://raw.githubusercontent.com/ConsSorto/ConsSorto.github.io/main/isc-102/unidad-2/example.c" 
    width="100%" height="600px" frameborder="0">
</iframe>

<p style="text-align: center; font-size: 0.8rem; color: #888;">
    💡 <b>Nota de Sincronización:</b> Si el cuadro inferior no muestra su código, intente abrir esta página en una <b>ventana de incógnito</b> para limpiar el caché de sesión de Godbolt.
</p>

[⬅️ Volver al índice general de la clase](../index.md)