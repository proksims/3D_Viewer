# 3DViewer v1.0

Implementation of 3DViewer v1.0.

In this project you will implement a program to view 3D wireframe models (3D Viewer) in the C programming language. The models themselves must be loaded from .obj files and be viewable on the screen with the ability to rotate, scale and translate.

A wireframe model is a model of an object in 3D graphics, which is a set of vertices and edges that defines the shape of the displayed polyhedral object in three-dimensional space.

### Structured programming reminder

Structured programming based on two main principles:

- The principle of divide and conquer (decomposition) - the principle of solving complex problems by decomposing them into many smaller subproblems, that are easier to understand and solve. Besides, there is no code duplication when solving subproblems and the solutions themselves are reused if necessary;
- The principle of hierarchical ordering - the principle of organising the components of a problem into hierarchical tree structures with new details added at each level (from the top level with a single entry point, to the lower levels with specific data structures and implementations). That is, there should be no calculations and no input/output operations on the same level.

Thus, using a structured style results in the program being built like a puff pastry pie from top to bottom. Errors are generated at the lower levels and thrown up to the top, where they are displayed to the user.

## Part 1. 3DViewer

You need to develop a program to visualise 3D wireframe models:

- The program must be developed in C language of C11 standard using gcc compiler. You can use any additional QT libraries and modules
- The program code must be located in the src folder
- The program must be built with Makefile which contains standard set of targets for GNU-programs: all, install, uninstall, clean, dvi, dist, tests, gcov. Installation directory could be arbitrary, except the building one
- The program must be developed according to the principles of structured programming
- When writing code it is necessary to follow the Google style
- Prepare full coverage of modules related to model loading and affine transformations with unit-tests
- There should be only one model on the screen at a time
- The program must provide the ability to:
  - Load a wireframe model from an obj file (vertices and surfaces list support only).
  - Translate the model by a given distance in relation to the X, Y, Z axes.
  - Rotate the model by a given angle relative to its X, Y, Z axes.
  - Scale the model by a given value.
- GUI implementation, based on any GUI library with API for C89/C99/C11 <br/>
  - For Linix: GTK+, CEF, Qt<br/>
  - For Mac: GTK+, Nuklear, raygui, microui, libagar, libui, IUP, LCUI, CEF, Qt
- The graphical user interface must contain:
  - A button to select the model file and a field to output its name.
  - A visualisation area for the wireframe model.
  - Button/buttons and input fields for translating the model.
  - Button/buttons and input fields for rotating the model.
  - Button/buttons and input fields for scaling the model.
  - Information about the uploaded model - file name, number of vertices and edges.
- The program must correctly processes and allows user to view models with details up to 100, 1000, 10,000, 100,000, 1,000,000 vertices without freezing (a freeze is an interface inactivity of more than 0.5 seconds)

## Part 2. Bonus. Settings

- The program must allow customizing the type of projection (parallel and central)
- The program must allow setting up the type (solid, dashed), color and thickness of the edges, display method (none, circle, square), color and size of the vertices
- The program must allow choosing the background color
- Settings must be saved between program restarts

## Part 3. Bonus. Record

- The program must allow saving the captured (rendered) images as bmp and jpeg files.
- The program must allow recording small screencasts by a special button - the current custom affine transformation of the loaded object into gif-animation (640x480, 10fps, 5s)
