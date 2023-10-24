/*
 *  MonteCarlo - C Numerical Integration Library
 *  Copyright (C) 2023 Daniele Guglietti
 *
 *     This program is free software: you can redistribute it and/or modify
 *     it under the terms of the GNU Affero General Public License as
 *     published by the Free Software Foundation, either version 3 of the
 *     License, or (at your option) any later version.
 *
 *     This program is distributed in the hope that it will be useful,
 *     but WITHOUT ANY WARRANTY; without even the implied warranty of
 *     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *     GNU Affero General Public License for more details.
 *
 *     You should have received a copy of the GNU Affero General Public License
 *     along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#ifndef MONTECARLO_ALGORITHM_H
#define MONTECARLO_ALGORITHM_H

typedef enum KIND {
    EULER,
#define EULER EULER
    EULER_CROMER,
#define EULER_CROMER EULER_CROMER
    MIDPOINT,
#define MIDPOINT MIDPOINT
    RUNGE_KUTTA_2,
#define RUNGE_KUTTA_2 RUNGE_KUTTA_2
    RUNGE_KUTTA_4,
#define RUNGE_KUTTA_4 RUNGE_KUTTA_4
    VELOCITY_VERLET,
#define VELOCITY_VERLET VELOCITY_VERLET
    LEAPFROG,
#define LEAPFROG LEAPFROG
} kind_t;

typedef struct VARIABLES {
    double y1;
    double y2;

    double x;
    double dx;

    void *params;
} variables_t;

typedef void (*algorithm_t)(variables_t *vars);

algorithm_t get_algorithm(kind_t type);

#endif //MONTECARLO_ALGORITHM_H
