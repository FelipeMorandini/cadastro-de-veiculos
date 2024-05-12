# Vehicle Manager

Vehicle Manager is a command-line application written in C that allows users to register and manage vehicle information. It provides functionality to add new vehicles, list all registered vehicles, filter vehicles by year of manufacture, and search for vehicles by model.

## Features

- Register a new vehicle with details such as brand, model, year of manufacture, and license plate number.
- List all registered vehicles with their details.
- Filter vehicles by a specific year of manufacture.
- List vehicles manufactured after a specified year.
- Search for vehicles by model.

## Installation

1. Clone the repository:

```bash
git clone https://github.com/your-username/vehicle-manager.git
```

2. Navigate to the project directory:

```bash
cd vehicle-manager
```

3. Build the project using Make:

```bash
make
```

This will create the necessary directories (build and bin) and compile the source files into an executable named vehicle_manager in the bin directory.

## Usage

To run the Vehicle Manager application, execute the following command from the project root directory:

```bash
./bin/vehicle_manager
```

The application will display a menu with the available options. Follow the prompts to perform the desired actions.

## File Structure


```
vehicle-manager/
├── src/
│   ├── main.c
│   └── vehicle.c
├── include/
│   └── vehicle.h
├── Makefile
└── README.md
```

- src/: Contains the source code files.
  - main.c: The main entry point of the program.
  - vehicle.c: Implementation of vehicle-related functions.
- include/: Contains header files.
  - vehicle.h: Header file with the struct Vehicle definition and function prototypes.
- Makefile: Makefile for building the project.
- README.md: This file, containing project documentation.

## Contributing

Contributions are welcome! If you find any issues or have suggestions for improvements, please open an issue or submit a pull request.

## License

This project is licensed under the MIT License.