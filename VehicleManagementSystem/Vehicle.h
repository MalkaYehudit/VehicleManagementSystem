#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
#include <iostream>

namespace VDMS {

    // הגדרת enum לסוגי שירותים
    enum class ServiceType {
        OilChange,
        Inspection,
        TireRotation
    };

    class Vehicle {
    private:
        std::string VIN;
        std::string make;
        std::string model;
        int year;
        static int vehicleCount; // Static count of the number of vehicles which created

    public:
        // Constructor for the Vehicle class
        Vehicle(const std::string& vin, const std::string& make, const std::string& model, int year);
        // Copy constructor for the Vehicle class
        Vehicle(const Vehicle& other);
        // Destructor for the Vehicle class
        virtual ~Vehicle();

        // static function to return the number of vehicles created
        static int getVehicleCount();
        virtual void displayInfo() const;
        virtual void service(ServiceType service) = 0;

        // Function to print the vehicle details to the output stream
        friend std::ostream& operator<<(std::ostream& os, const Vehicle& vehicle);
        // Friendly function to perform service on the vehicle
        friend void performService(Vehicle& vehicle, ServiceType service);

        // Inline functions to set and get the vehicle manufacturer
        inline void setMake(const std::string& m) { make = m; }
        inline std::string getMake() const { return make; }
    };

} // namespace VDMS

#endif // VEHICLE_H
