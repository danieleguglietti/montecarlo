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
