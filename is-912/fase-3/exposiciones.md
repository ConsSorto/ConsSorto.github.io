---
layout: default
title: "Exposiciones: SPA, Seguridad y DevOps"
parent: "Fase 3: Arquitectura del Cliente React, TypeScript y Vertical Slicing"
grand_parent: "IS-912 Sistemas Expertos (Programacion Web)"
nav_order: 25
---

# 🚀 TEMARIO DE EXPOSICIONES PRÁCTICAS (UNIDAD 3: SPA, Seguridad y DevOps)

En esta fase de culminación, los equipos de desarrollo demostrarán el dominio de capacidades avanzadas de ingeniería de software web: navegación SPA protegida, seguridad criptográfica con JWT, interactividad en tiempo real, contenerización y pipelines de integración y despliegue continuo (CI/CD).

---

## 🧭 Tema 1: Enrutamiento SPA, Rutas Privadas y Lazy Loading (React Router)

* **Objetivo:** Demostrar cómo una aplicación web moderna navega fluidamente sin recargar la página completa y cómo protege sus fronteras visuales contra accesos no autorizados.

### 💻 Demostración Práctica:
1. **Configuración de React Router DOM:** Implementar la arquitectura de enrutamiento moderno (preferiblemente utilizando `createBrowserRouter` y `<RouterProvider />`).
2. **Implementación de Rutas Protegidas (*Private Routes*):** Demostrar la defensa de fronteras: intentar acceder directamente por URL a una ruta interna (ej. `/dashboard`, `/mis-habitos`) sin tener sesión activa, y evidenciar cómo el guardia de navegación intercepta la petición y redirige automáticamente al usuario hacia `/login`.
3. **Carga Perezosa (*Lazy Loading* con `React.lazy` y `Suspense`):** Dividir el paquete JavaScript (Code Splitting) cargando componentes pesados bajo demanda para optimizar drásticamente el peso inicial y la velocidad de carga de la aplicación.
4. **Manejo de Errores y Páginas 404 Personalizadas:** Configurar rutas comodín (`*`) y captura de errores de navegación con una vista visual corporativa amigable.

---

## 🔐 Tema 2: Seguridad Frontend, Estado Global e Interceptores HTTP

* **Objetivo:** Demostrar el ciclo de vida completo y seguro de un token JWT (JSON Web Token), desde que es firmado criptográficamente en el backend de .NET hasta su inyección transparente en cada petición del cliente.

### 💻 Demostración Práctica:
1. **Almacenamiento Seguro del JWT en el Cliente:** Análisis comparativo de seguridad entre `LocalStorage` vs. Cookies `HttpOnly` / `SameSite`, explicando los vectores de ataque (XSS vs CSRF) y justificando la decisión técnica del equipo.
2. **Estado Global de Autenticación:** Utilizar `Context API` (o `Zustand`) para centralizar el perfil del usuario autenticado, estado de sesión (`isAuthenticated`), y funciones de inicio/cierre de sesión.
3. **La Magia Técnica: Axios Interceptors:**
   * Configurar un interceptor de peticiones en la instancia centralizada de Axios.
   * **Auditoría en vivo:** Abrir la pestaña *Network* de las Herramientas de Desarrollador (F12) y demostrar en tiempo real cómo el cliente inyecta automáticamente el encabezado:
     ```http
     Authorization: Bearer <token_jwt>
     ```
     en cada petición saliente sin tener que programarlo manualmente en cada componente.
   * Manejar interceptores de respuesta para capturar automáticamente respuestas `401 Unauthorized` y purgar la sesión vencida.

---

## ⚡ Tema 3: Interactividad Avanzada y Tiempo Real (SignalR + React)

* **Objetivo:** Romper el paradigma tradicional de "el cliente siempre pregunta" (Polling) y demostrar comunicación bidireccional inmediata mediante WebSockets administrados.

### 💻 Demostración Práctica:
1. **Configuración del Hub de SignalR en .NET:** Creación de un `Hub` en el backend (ej. `NotificacionesHub`), mapeo del endpoint en `Program.cs` y configuración de políticas CORS con soporte de credenciales.
2. **Conexión del Cliente con `@microsoft/signalr`:** Instalar la librería en React y establecer la conexión persistente gestionada en el ciclo de vida del componente.
3. **La Demo en Vivo (Dos Clientes Simultáneos):**
   * Mostrar en pantalla dos ventanas de navegador abiertas en paralelo (ej. Navegador A y Navegador B).
   * Al ejecutar una mutación en el Navegador A (ej. registrar un nuevo pasajero, crear un hábito o disparar una alerta), el Navegador B debe recibir una notificación visual instantánea (toast o actualización de tabla) en milisegundos, **sin recargar la página ni ejecutar un nuevo GET**.

---

## 🐳 Tema 4: Contenerización de la Arquitectura (Docker + Nginx)

* **Objetivo:** Aislar completamente la infraestructura de ejecución de la aplicación para garantizar que funcione de manera idéntica en cualquier entorno, erradicando el problema clásico de *"en mi máquina sí funcionaba"*.

### 💻 Demostración Práctica:
1. **Auditoría del `Dockerfile` del Backend (.NET):** Explicar las etapas de compilación con el SDK de .NET y la imagen final ligera con ASP.NET Runtime.
2. **Auditoría del `Dockerfile` del Frontend (React):**
   * Demostrar en vivo el concepto de **Multi-stage build**:
     * **Etapa 1 (Build):** Compilación y empaquetado de assets con Node.js / pnpm.
     * **Etapa 2 (Producción):** Extracción de los archivos estáticos generados (`dist`) y transferencia hacia un contenedor ultraligero de **Nginx**.
   * Configuración de Nginx para redirigir peticiones internas y soportar enrutamiento SPA (`try_files $uri /index.html`).
3. **Orquestación con Docker Compose (`docker-compose.yml`):**
   * Levantar la arquitectura completa con un solo comando en la terminal:
     ```bash
     docker compose up --build
     ```
   * Evidenciar en vivo los 3 servicios interactuando en su red privada virtual: Base de Datos (PostgreSQL), API (.NET) y Cliente Web (React + Nginx).

---

## 🔄 Tema 5: Integración Continua (CI) con GitHub Actions (Testing & Build Automatizado)

* **Objetivo:** Demostrar la automatización del control de calidad, verificación de pruebas y empaquetamiento de software mediante pipelines ágiles en la nube.

### 💻 Demostración Práctica:
1. **Estructura del Flujo de Trabajo:** Explicar el archivo de configuración `.github/workflows/ci.yml`.
2. **Disparo en Vivo:** Realizar un `git push` o abrir un *Pull Request* en vivo en GitHub que dispare automáticamente el *Runner*.
3. **Los 3 Trabajos (*Jobs*) del Pipeline en Ejecución:**
   * 🔍 **Linter y Formato:** Ejecución de ESLint para asegurar el cumplimiento estricto de estándares de código.
   * 🧪 **Pruebas Automatizadas:** Ejecución de pruebas unitarias (en .NET con `dotnet test` / xUnit, o en React con Vitest/Jest).
   * 📦 **Build Automatizado de Docker:** Compilación de las imágenes. **Demostración de seguridad:** Evidenciar que si una prueba unitaria falla, el pipeline aborta la ejecución de inmediato y la imagen no se compila ni se publica.

---

## ☁️ Tema 6: Despliegue Continuo (CD) y Hosting en la Nube

* **Objetivo:** El cierre del ciclo de vida del software profesional. Sacar la aplicación de `localhost` y ponerla en producción en la internet global con alta disponibilidad.

### 💻 Demostración Práctica:
1. **Conexión del Pipeline de Despliegue:** Conectar el éxito del flujo de GitHub Actions con un proveedor de infraestructura Cloud (ej. Render, Railway, AWS EC2, Azure o fly.io).
2. **Alojamiento y Conexión de Capas:**
   * Base de datos PostgreSQL gestionada en la nube con variables de entorno de conexión seguras.
   * API Backend en contenedor ejecutándose en la nube.
   * Frontend desplegado en CDN o servidor estático (Vercel, Netlify o contenedor Nginx Cloud).
3. **El Gran Final (Prueba de Fuego en Vivo):**
   * El equipo debe entregarle al catedrático una **URL pública accesible desde internet**.
   * El catedrático ingresará desde su propio dispositivo (computadora o celular) durante la clase y ejecutará una mutación real (POST), demostrando que la base de datos, el backend y el frontend están comunicados y 100% operativos en producción.

---

[⬅️ Volver al índice de la fase](./index.md)
