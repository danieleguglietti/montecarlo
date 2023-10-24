# MonteCarlo
A numerical integration library for C.

## About
MonteCarlo is a library for C that allows you to numerically integrate functions using various integration algorithms.

Up to now, the following methods are implemented:
- Euler's Algorithm
- Euler-Cromer's Algorithm
- Runge-Kutta's Algorithm (second and fourth order)
- Leapfrog Algorithm
- Velocity Verlet Algorithm
- Midpoint Algorithm

It can integrate second order differential equations, a system of two first order differential equation.
The generalization to a system of n first order differential equations is planned.

## Installation
To install the library, you can use git submodules and add the library project to your main CMakeLists.txt file.
```cmake
add_subdirectory(MonteCarlo)
```

and then just link the library to your executable.
```cmake
target_link_libraries(${PROJECT_NAME} MonteCarlo)
```

or build your own copy of the library.
```bash
git clone
cd MonteCarlo
mkdir build
cd build
cmake ..
make
```

## Usage
