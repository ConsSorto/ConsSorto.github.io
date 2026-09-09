---
layout: default
title: "Fase 1: Arquitectura Limpia, Datos y API Core"
parent: "IS-912 Sistemas Expertos (Programacion Web)"
nav_order: 1
has_mermaid: true 
---

# 📘 Fase 1: Arquitectura Limpia, Datos y API Core

## Introducción
En esta primera fase, estableceremos las bases para el desarrollo moderno del backend, utilizando Arquitectura Limpia y los principios de API-First. Exploraremos desde los conceptos básicos de Cliente-Servidor hasta la creación de APIs robustas usando .NET, implementando inyección de dependencias, Entity Framework como ORM y aplicando los principios SOLID.

---

## Contenido de la Fase

**[1. Intro a Web, Cliente-Servidor y Arquitectura API-First](./1.md)**
Visión general del ecosistema moderno, separación de responsabilidades (Front/Back) y definición de las historias de usuario para el proyecto.

**[2. Principios SOLID e Inyección de Dependencias (DI)](./2.md)**
Principios SOLID aplicados al backend y cómo Inversión de Dependencias dicta la inyección de servicios.

**[3. Setup Backend (.NET) y Clean Architecture](./3.md)**
Creación del proyecto estructurado por capas: Core/Domain, Application, Infrastructure, y Web/API.

**[4. Acceso a datos con ORM (Entity Framework) en Infraestructura](./4.md)**
Conexión de BD mediante C# (Code-First) y aislamiento del ORM en Infraestructura.

**[5. Construcción de Casos de Uso, Controladores y Repositorios](./5.md)**
Implementación del CRUD separando acceso a datos y controladores, orquestado por la capa de Aplicación.

**[6. Protocolo HTTP (Verbos y Status Codes)](./6.md)**
Uso de GET, POST, PUT, DELETE y respuestas HTTP apropiadas (200, 404, 201).

**[7. Pruebas de API y Documentación](./7.md)**
Uso de Swagger/OpenAPI para documentar y probar endpoints.

**[8. Evolución a Vertical Slicing y Simetría con el Frontend](./8.md)**
Organización por Features y paralelismo con la estructura del Frontend (React).

**[9. Laboratorio Back-End (Pre-evaluación)](./9.md)**
Resolución de dudas técnicas, revisión de código y cierre del Sprint.

---

[⬅️ Volver al índice general de la clase](../index.md)
