#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
#include "Motorcycle.h"
#include "ServiceStation.h"

using namespace VDMS;

int main() {

    // Creating instances of different vehicles
    Car car1("1HGBH41JXMN109186", "Honda", "Civic", 2020, 4);
    Truck truck1("2FTRX18L11CA12345", "Ford", "F-150", 2019, 10000);
    Motorcycle motorcycle1("JH2RC4411HS600001", "Harley-Davidson", "Sportster", 2021, false);
    Car car2("3GNCJPSB2LL123456", "Chevrolet", "Trax", 2022, 4);  
    Truck truck2("4T1BF1FK0JU345678", "Toyota", "Tacoma", 2023, 12000);
    Motorcycle motorcycle2("5J6YH1H22LL123456", "Yamaha", "MT-07", 2023, true); 
    Car car3("9X3L7E15R80012345", "Ferrari", "488 GTB", 2021, 2);


    // Create service station
    ServiceStation serviceStation;
    

    std::cout << "serviceStation:" << std::endl;


    // Adding vehicles to the service queue with service type
    serviceStation.addToQueue(&car1, ServiceType::OilChange);
    serviceStation.addToQueue(&truck1, ServiceType::Inspection);
    serviceStation.addToQueue(&motorcycle1, ServiceType::TireRotation);
    serviceStation.addToQueue(&car2, ServiceType::Inspection); 
    serviceStation.addToQueue(&truck2, ServiceType::TireRotation); 
    serviceStation.addToQueue(&motorcycle2, ServiceType::OilChange);
    serviceStation.addToQueue(&car3, ServiceType::Inspection);


    // Display the queue in order of priority before processing
    serviceStation.printServicePriority();

    // Processing the service queue
    serviceStation.processQueue();

    // Display the number of vehicles created
    std::cout << "Total number of vehicles created: " << Vehicle::getVehicleCount() << std::endl;

    ServiceStation serviceStation1;

    std::cout << "***" << std::endl;
    std::cout << "serviceStation1:" << std::endl;
    serviceStation1.addToQueue(&car3, ServiceType::Inspection);
    serviceStation1.addToQueue(&motorcycle2, ServiceType::OilChange);
    serviceStation1.printServicePriority();
    serviceStation1.processQueue();

    return 0;
}
