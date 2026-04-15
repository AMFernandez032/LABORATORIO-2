/*********************************************************************************************************************
Copyright (c) 2026, ALFREDO M. FERNANDEZ <correo@ejemplo.com>

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated
documentation files (the "Software"), to deal in the Software without restriction, including without limitation the
rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit
persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the
Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR
OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

SPDX-License-Identifier: MIT
*********************************************************************************************************************/

#ifndef ALUMNO_H_
#define ALUMNO_H_
#include <stdint.h>
/** @file alumno.h
 ** @brief Archivo de cabecera para gestion de alumnos
 **/

/* === Headers files inclusions ==================================================================================== */

/* === Header for C++ compatibility ================================================================================ */

#ifdef __cplusplus
extern "C" {
#endif

/* === Public macros definitions =================================================================================== */

/* === Public data type declarations =============================================================================== */

//! Estructura para datos de alumno
typedef struct alumno_s {
    char nombre[30];    //!< Nombre del alumno
    char apellido[30];  //!< Apellido del alumnno
    char documento[10]; //!< DNI del alumno

} * alumno_t;
/* === Public variable declarations ================================================================================ */

/* === Public function declarations ================================================================================ */
/**
 *@brief Funcion que serializa los datos del alumno
 *
 *@param alumno Es un puntero a la estructura
 *@param buffer Cadena de caracteres de los datos
 *@param size Espacio disponible en la cadena de caracteres
 *@return int Cantidad de caracteres escritos en la cadena, retorna -1 si no hay espacio.
 */

int Serializar(const alumno_t, char buffer[], uint32_t size);
/* === End of conditional blocks =================================================================================== */

#ifdef __cplusplus
}
#endif

#endif /* ALUMNO_H_*/
