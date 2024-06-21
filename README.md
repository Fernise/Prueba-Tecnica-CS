# Prueba-Tecnica-CS

# Business manager application 

This is an application for managing clients and suppliers for a company.

## Installation

The project requires a C++ compiler that supports C++17 or later. 
g++ preferable.

It is necessary to have CMake installed:
* Linux
```bash
sudo apt install cmake
```

* Windows
Use the offical CMake website: https://cmake.org/download/

## Usage
```bash
cd build/
```
```bash
cmake .. -G "Unix Makefiles"
```
```bash
make
```

```bash
./BussinesApplication
```


The application allows to CREATE, READ, UPDATE and DELETE clients and suppliers associated to a business.

### Main Menu
Select an option to manage Clients or Suppliers.

### Client/Supplier Menu
Select what CRUD action you would like to perform.

## License

MIT License

[MIT](https://choosealicense.com/licenses/mit/)
