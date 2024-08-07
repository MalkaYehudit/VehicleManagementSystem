# Integrated Vehicle Management System

## Description

This project implements an Integrated Vehicle Management System in C++ to manage different types of vehicles and support various service facilities. The system includes complex interactions, class hierarchies, inheritance, polymorphism, and more.

## Project Structure

- `Vehicle.h` - Header file for the base class `Vehicle` and derived classes `Car`, `Truck`, `Motorcycle`.
- `ServiceStation.h` - Header file for the `ServiceStation` class and `ServiceType` enum.
- `Vehicle.cpp` - Implementation of the `Vehicle` class and derived classes.
- `ServiceStation.cpp` - Implementation of the `ServiceStation` class.
- `main.cpp` - Main function to create and manage vehicles and services.

## Dependencies

No external dependencies are required.

## Compilation Instructions

To compile the project, navigate to the root directory of the project and use the following commands:

### For Linux/macOS:

g++ -std=c++17 -o VehicleManagementSystem Vehicle.cpp ServiceStation.cpp main.cpp

### For Windows:
g++ -std=c++17 -o VehicleManagementSystem.exe Vehicle.cpp ServiceStation.cpp main.cpp

## Running the Program
After compilation, you can run the program using the following command:

### For Linux/macOS:
./VehicleManagementSystem

### For Windows:
VehicleManagementSystem.exe

### Usage
Creating Vehicles: The main function dynamically creates instances of different vehicles.
Adding Services: Services are added to the ServiceStation queue with different priorities.
Processing Services: The ServiceStation processes the queue based on service priorities.

### Documentation

Vehicle.h: Contains the class definitions for Vehicle, Car, Truck, and Motorcycle and ServiceType enum.
ServiceStation.h: Contains the ServiceStation class definition.
main.cpp: Demonstrates the creation and management of vehicles and services.

### Contribution
If you would like to contribute to this project, please fork the repository and create a pull request with your changes.

### License
This project is licensed under the MIT License. See the LICENSE file for more details.

### Contact
For any questions or issues, please contact Leahgl845@gmail.com.

