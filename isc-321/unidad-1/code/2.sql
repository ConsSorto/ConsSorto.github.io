-- 1. Tabla de Personas
CREATE TABLE Personas (
    Id INT PRIMARY KEY,
    DNI VARCHAR(20) UNIQUE,
    Nombre1 VARCHAR (100),
    Nombre2 VARCHAR (100),
    Apellido1 VARCHAR (100),
    Apellido2 VARCHAR (100),
);

-- 2. Tabla de Cuentas (Relación 1:1 con Personas)
-- El ID de Persona es Unique y FK para asegurar 1 a 1
CREATE TABLE CuentasEstudiante (
    NumeroCuenta VARCHAR(20) PRIMARY KEY,
    PersonaId INT UNIQUE REFERENCES Personas(Id)
);

-- 3. Tabla de Medios de Contacto (Relación 1:N con Estudiante/Persona)
CREATE TABLE MediosContacto (
    Id INT PRIMARY KEY,
    PersonaId INT REFERENCES Personas(Id),
    Tipo VARCHAR(20), -- ej: 'Email' o 'Celular'
    Valor VARCHAR(100)
);

-- 4. Tabla de Carreras
CREATE TABLE Carreras (
    Id INT PRIMARY KEY,
    NombreCarrera VARCHAR(100)
);

-- 5. Tabla Intermedia (Relación N:M entre Estudiante y Carreras)
CREATE TABLE Inscripciones (
    Id INT PRIMARY KEY,
    PersonaId INT REFERENCES Personas(Id),
    CarreraId INT REFERENCES Carreras(Id),
    UNIQUE(PersonaId, CarreraId)
);