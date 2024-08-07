#include "Vehicle.h"

namespace VDMS {

    // Initialize the static variable vehicleCount to 0
    int Vehicle::vehicleCount = 0;

    Vehicle::Vehicle(const std::string& vin, const std::string& make, const std::string& model, int year)
        : VIN(vin), make(make), model(model), year(year) {
        vehicleCount++; // Increasing the number of vehicles

    }

    Vehicle::Vehicle(const Vehicle& other)
        : VIN(other.VIN), make(other.make), model(other.model), year(other.year) {
        vehicleCount++; // Increasing the number of vehicles
    }

    Vehicle::~Vehicle() {
        vehicleCount--; //Reducing the number of vehicles
    }

    int Vehicle::getVehicleCount() {
        return vehicleCount; // Returns the number of vehicles created
    }

    void Vehicle::displayInfo() const {
        // Prints the identification number, manufacturer, model and year of manufacture of the vehicle
        std::cout << "VIN: " << VIN << ", Make: " << make << ", Model: " << model << ", Year: " << year << std::endl; 
    }

    std::ostream& operator<<(std::ostream& os, const Vehicle& vehicle) {
        os << "VIN: " << vehicle.VIN << ", Make: " << vehicle.make << ", Model: " << vehicle.model << ", Year: " << vehicle.year;
        return os;
    }

    // Function to perform service on the vehicle
    void performService(Vehicle& vehicle, ServiceType service) {
        vehicle.service(service);
    }

} // namespace VDMS
