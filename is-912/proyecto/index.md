---
layout: default
title: "Proyecto Integrador: HabitForge"
parent: "IS-912 Sistemas Expertos (Programacion Web)"
nav_order: 0
---

# 🚀 Proyecto Integrador: HabitForge (Habit Tracker Gamificado)

## 📌 1. Visión Global y Enunciado del Proyecto
HabitForge es una plataforma web gamificada diseñada para fomentar la disciplina y la construcción de rutinas positivas. A diferencia de un simple "To-Do List", el sistema recompensa la constancia: los usuarios registran sus hábitos diarios, acumulan "rachas" (días consecutivos) y desbloquean recompensas o cupones de forma automática al alcanzar metas configuradas por los administradores del sistema.

### Objetivo Académico
Este proyecto servirá como vehículo para aplicar de forma transversal los conceptos de Ingeniería de Software a lo largo de la clase. Su desarrollo exige la implementación de:

*   **Backend:** Arquitectura Limpia (Clean Architecture) y Vertical Slicing utilizando C# y .NET.
*   **Frontend:** Interfaz de usuario reactiva, tipada y estructurada por funcionalidades (Feature-Sliced Design) utilizando React y TypeScript.
*   **Base de Datos:** Diseño relacional normalizado (3NF), integridad referencial y transacciones.
*   **Seguridad:** Control de Acceso Basado en Roles (RBAC) mediante JSON Web Tokens (JWT).

---

## 🎯 2. Definición del Producto Mínimo Viable (MVP)
Para garantizar la entrega funcional en un ciclo de desarrollo ágil de 10 semanas (30 sesiones), el alcance del proyecto se limita al MVP bajo las siguientes restricciones:

*   **Catálogo Centralizado:** Los usuarios no crearán sus propios hábitos personalizados. El sistema funcionará con un catálogo global de hábitos predefinidos por el administrador (Ej. "Leer 20 minutos", "Hacer ejercicio").
*   **Dos Roles de Seguridad:**
    *   **Jugador:** Interactúa con el sistema marcando hábitos y ganando cupones.
    *   **GameMaster:** Administra el catálogo de recompensas y monitoriza el sistema.
*   **Motor de Rachas:** El cálculo de la consecución de metas (ej. "20 días seguidos") se ejecutará del lado del servidor (API) en el momento del registro (Check-in), garantizando la seguridad de la regla de negocio.
*   **Fuera de Alcance (MVP):** Integraciones con pasarelas de pago, notificaciones push en tiempo real y recuperación de contraseñas por correo electrónico.

---

## 📚 3. Épicas del Sistema (Epics)
Las funcionalidades de alto nivel se dividen en las siguientes 4 Épicas para facilitar su distribución en los Sprints.

*   **Épica 1: Identidad y Seguridad (IAM)**
    Todo lo relacionado con el registro de usuarios, autenticación, generación de tokens JWT y validación de roles (Jugador vs GameMaster).
*   **Épica 2: Motor de Hábitos (Core Tracking)**
    Visualización del catálogo de hábitos disponibles y el registro transaccional diario (Check-in) de cada usuario, validando que no existan registros duplicados en un mismo día.
*   **Épica 3: Gamificación y Recompensas**
    El motor algorítmico en el backend que calcula las rachas y la interfaz del usuario para visualizar su progreso y los cupones/códigos QR desbloqueados.
*   **Épica 4: Consola de Administración (Backoffice)**
    Panel de control exclusivo para el rol GameMaster que permite gestionar el inventario de recompensas (CRUD) y establecer las reglas de canje.

---

## 📝 4. Historias de Usuario (User Stories - HUs)
A continuación, el Product Backlog priorizado. Cada historia debe cumplir con sus Criterios de Aceptación (DoD - Definition of Done) para darse por terminada en el Sprint Review.

### Épica 1: Identidad y Seguridad
*   **HU-01: Registro de Usuarios**
    *Como visitante, quiero registrarme con mi nombre, email y contraseña, para crear mi cuenta de Jugador.*
    **Criterios de Aceptación:** Contraseña encriptada (Hash). Email único en la base de datos.
*   **HU-02: Inicio de Sesión (Login)**
    *Como usuario registrado, quiero iniciar sesión con mis credenciales, para obtener acceso seguro al sistema.*
    **Criterios de Aceptación:** El backend debe devolver un JWT firmado que incluya el Rol del usuario en sus Claims. El frontend debe proteger las rutas privadas.

### Épica 2: Motor de Hábitos
*   **HU-03: Visualización de Hábitos**
    *Como Jugador, quiero ver una lista de los hábitos globales disponibles en mi panel (Dashboard), para saber qué rutinas puedo cumplir hoy.*
    **Criterios de Aceptación:** La UI en React debe consumir el endpoint de la API y renderizar tarjetas.
*   **HU-04: Registro Diario (Check-in)**
    *Como Jugador, quiero presionar un botón de "Completado" en un hábito específico, para registrar mi cumplimiento del día.*
    **Criterios de Aceptación:** El sistema no debe permitir marcar el mismo hábito dos veces en la misma fecha (restricción en la base de datos y validación en API). La UI debe deshabilitar el botón tras el registro exitoso.

### Épica 3: Gamificación y Recompensas
*   **HU-05: Cálculo de Rachas (Regla de Negocio Core)**
    *Como Sistema, quiero evaluar el historial del jugador tras cada check-in, para determinar si ha alcanzado la racha necesaria (Ej. 20 días continuos) y generarle un cupón automáticamente si cumple la meta.*
    **Criterios de Aceptación:** Lógica implementada en la capa de Aplicación (Clean Architecture). Ejecución transaccional (guarda el registro y genera el cupón en el mismo bloque).
*   **HU-06: Billetera de Cupones**
    *Como Jugador, quiero acceder a una sección de "Mis Premios" en la plataforma, para ver los códigos generados que puedo canjear en la vida real.*
    **Criterios de Aceptación:** UI separada en React. Solo muestra los registros asociados al ID del usuario autenticado.

### Épica 4: Consola de Administración
*   **HU-07: Gestión de Recompensas (CRUD)**
    *Como GameMaster, quiero una pantalla protegida donde pueda crear, leer, editar y eliminar recompensas (indicando título, racha requerida y stock), para mantener dinámico el juego.*
    **Criterios de Aceptación:** La ruta en React debe expulsar a quien no sea GameMaster. El controlador de .NET debe rechazar peticiones HTTP (403 Forbidden) si el JWT no posee el rol adecuado.

---
[⬅️ Volver al índice general de la clase](../index.md)
