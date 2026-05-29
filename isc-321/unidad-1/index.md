---
layout: default
title: "Unidad 1: Introducción, Modelado y SQL"
parent: "ISC-321 Fundamentos de Base de datos"
nav_order: 1
has_mermaid: true 
---

# 📘 Unidad 1: Fundamentos y Modelado de Datos

## Introducción
En esta primera unidad, estableceremos los cimientos del mundo de los datos. Pasaremos de entender la necesidad de un **DBMS** para garantizar la fiabilidad mediante propiedades **ACID**, hasta la transformación de requisitos del mundo real en estructuras técnicas sólidas mediante el **Modelado Entidad-Relación** el **Modelado Relaciónal** y la **Normalización**.

---

## Contenido de la Unidad

**[1. Introducción y Conceptos Básicos](./1.md)**
Estudio del "almacén" organizado de información y el software (DBMS) que resuelve los problemas de redundancia e inconsistencia de los sistemas de archivos tradicionales.
*   **Niveles de Abstracción:** Físico, Lógico y de Vistas.
*   **Propiedades ACID:** Atomicidad, Consistencia, Aislamiento y Durabilidad.

**[2. Modelado Entidad-Relación (E-R) y Extendido (EER)](./2.md)**
Traducción de requisitos a una estructura lógica basada en objetos (entidades) y sus asociaciones (relaciones).
*   **Atributos:** Simples, compuestos, multivalor y derivados.
*   **EER:** Conceptos de superclase/subclase, especialización y generalización.

**[3. El Modelo Relacional](./3.md)**
Transformación del diseño conceptual en tablas (relaciones).
*   **Estructura:** Tuplas, atributos y dominios.
*   **Integridad:** Llaves primarias y foráneas para la integridad referencial.

**[4. Lenguaje SQL Estándar](./4.md)**
El estándar de comunicación con bases de datos relacionales.
*   **DDL (Definition):** `CREATE`, `ALTER`, `DROP`.
*   **DML (Manipulation):** `SELECT`, `INSERT`, `UPDATE`, `DELETE`.

**[5. Normalización](./4.md)**
Refinamiento del diseño para eliminar redundancias y anomalías.
*   **Formas Normales:** 1FN (Atomicidad), 2FN (Dependencia Total) y 3FN (Dependencia Transitiva).


---

## 💡 Puntos clave para recordar
*   **ACID es ley:** Sin estas propiedades, no podemos confiar en que los datos sean correctos tras un fallo.
*   **Entidad vs Atributo:** Si un dato tiene sus propias características descriptivas, probablemente es una Entidad y no un simple Atributo.
*   **Normalizar no es opcional:** Un diseño sin normalizar genera "basura" informativa y fallos en la actualización de datos.

---

## 📚 Bibliografía de la Lección
*   **Silberschatz, A., Korth, H., & Sudarshan, S.:** *Fundamentos de Bases de Datos*.
*   **Elmasri, R., & Navathe, S.:** *Sistemas de Bases de Datos: Conceptos Fundamentales*.

---

[⬅️ Volver al índice general de la clase](../index.md)