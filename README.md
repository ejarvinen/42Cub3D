# Cub3D: A Ray-Casting Maze Exploration Project
[![cub3D gameplay](https://img.youtube.com/vi/ThJYJcNBb5A/0.jpg)](https://www.youtube.com/watch?v=ThJYJcNBb5A)
## Overview
**Cub3D** is a project inspired by the classic [Wolfenstein 3D](https://en.wikipedia.org/wiki/Wolfenstein_3D) game, enabling the exploration of ray-casting principles to create a dynamic first-person perspective inside a maze. This project introduces the fundamentals of 3D rendering using the MLX42 library and mathematical concepts to achieve realistic visual effects.

## Features
### Mandatory Features
- **3D Graphical Representation**:
  - Implements [ray-casting](https://en.wikipedia.org/wiki/Ray_casting) to render a realistic first-person view inside a maze.
  - Displays textures for walls based on their orientation (North, South, East, West).
  - Allows customization of floor and ceiling colors.
- **Smooth Window Management**:
  - Supports switching between windows, minimizing, and resizing.
  - Ensures clean program termination when closing the window or pressing `ESC`.
- **Interactive Movement**:
  - `W`, `A`, `S`, `D`: Move the player through the maze.
  - Left/Right Arrow Keys: Rotate the player's view.
- **Scene Configuration**:
  - Reads `.cub` files containing map and configuration details.
  - Map elements include:
    - `1`: Walls
    - `0`: Empty space
    - `N`, `S`, `E`, `W`: Player start positions and orientations.
  - Parses wall textures, floor, and ceiling colors.
### Bonus Features
- Wall collisions.
- Minimap system.
- Opening/closing of glass doors.
  - Doors can be opened by running at them
  - Doors close when a spell is casted upon their direction by clicking the left mouse key.
- Animated sprite as a magic wand that is capable of casting spells to close chattered doors.
- Mouse-based viewpoint rotation.

## Prerequisites
- **C Compiler**: Ensure a compatible compiler (e.g., `gcc`) is installed.
- **MLX42 Library**: [MLX42](https://github.com/codam-coding-college/MLX42) can be initialized by running `git submodule init` and `git submodule update` inside the project folder after cloning this repository.
- **Makefile**: Provided for efficient compilation.

## Setup and Usage
### Installation
1. Clone this repository
```
git clone https://github.com/hoangfin/cub3d.git
cd cub3d
```
2. Update and initialize submodules:
```
git submodule init
git submodule update
```
3. Build the project:
```
make
```
### Running the program
To run the program with a `.cub` scene file:
```
./cub3D <path-to-scene-file>
```
Example:
```
./cub3D assets/maps/good/tunnel.cub
```
## Development Guidelines
- **Norm Compliance**: Follow the 42 coding norm.
- **Memory Management**: Properly free all heap-allocated memory to avoid leaks.
- **Error Handling**:
  - Returns "Error\n" with a descriptive message for invalid configurations.
  - No unexpected crashes (e.g., segmentation faults).

## File Structure
- `Makefile`: Handles compilation and cleaning tasks.
- **Source Files**: Includes `.c` and `.h` files for implementation.
- **Scene Files**: .cub files defining maze maps and configurations.

## Example Scene File
A valid `.cub` file example:
```
NO assets/textures/north.png
SO assets/textures/south.png
WE assets/textures/west.png
EA assets/textures/east.png

F 220,100,0
C 225,30,0

111111
100001
1010N1
111111
```
