#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
#include "Motorcycle.h"
#include "ServiceStation.h"

int main() {
    VDMS::Car myCar("1HGBH41JXMN109186", "Honda", "Civic", 2022, 4);
    VDMS::Truck myTruck("2FTRX18L8XCA12345", "Ford", "F-150", 2023, 1500);
    VDMS::Motorcycle myBike("3FADP4GX1MLD00001", "Harley-Davidson", "Street 750", 2021, false);

    VDMS::ServiceStation station;
    station.addToQueue(&myCar);
    station.addToQueue(&myTruck);
    station.addToQueue(&myBike);

    station.processQueue();

    return 0;
}
