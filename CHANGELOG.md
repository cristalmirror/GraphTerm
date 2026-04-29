# Changelog

This software has creted with educative objetives, Is a simple software to understend the interations the graphes, digraphes and trees, 
also is my practice to  Decoupled Software Architecture, and SOLID principes, these form i practice 3 university subjects both,

Part of this code is maked usin claude and C/C++/Rust documentations of the next fonts:
- https://www.c-language.org/
- https://cppreference.com/
- https://www.w3schools.com/cpp/default.asp
- https://doc.rust-lang.org/book/
- https://cplusplus.com/doc/tutorial/

The format is based on [Keep a Changelog](https://keepachangelog.com/es/1.0.0/),
and this project adheres to [Semantic Versioning](https://semver.org/lang/es/).
---

## [Unreleased]
### Added
- Creating a graphics engine that prints the graphical result to the terminal
- Fix this error:
- ```c
  j=0 count=3
  p[0]=0
  p[1]=1
  p[2]=7
  j=1 count=1
  p[0]=8

  Program received signal SIGSEGV, Segmentation fault.
  0x0000555555567246 in construction_GDT (v=0x7fffffffd9c8, size=0x7fffffffd9c4, 
    matrix=0x7fffffffd9d0, file=10, colums=7) at src/linker.c:49
  49	            aux[p[0]]->edge[pos[p[0]]] = aux[p[0]];
  ```
## [0.0.4] - 2026-04-29

### Change
- The operations  `init_struct_GDT();` `construction_GDT();` `printing_GDT();` has modify and now compile

## [0.0.3] - 2026-04-26
### Added
- Creating the Node and Vertex elements as a list (not found now).

### Change
- the main funcion, has modify and the system arguments too


## [0.0.2] - 2026-04-24

### Changed
- Remplace the `list.h` and `list.c` for `linker.h` and `linker.c`.
- Modify the `Makefile` for the last point.
### Added
- the opetrations of linking can compile but warnings because is
integrated in `graph_function(char **data_graph)` but i'm working on it.


## [0.0.1] - 2026-04-23
### Added
- Initial project structure
- `function.c` with `graph_function`, `digraph_function`, and `tree_function` functions
- Basic support for graphs, digraphs, and trees using linked lists
- `greet` and `goodbye` functions for initial testing

---


## Types of Changes
- `Added` — new functionality
- `Changed` — changes to existing functionality
- `Deprecated` — functionality to be removed
- `Removed` — functionality removed
- `Fixed` — bug fixes
- `Security` — vulnerability fixes
