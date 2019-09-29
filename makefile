driving: Bicycle.o Car.o PoweredVehicle.o Vehicle.o
	g++ -o driving main.cpp Bicycle.o Car.o PoweredVehicle.o Vehicle.o

Bicycle.o: Bicycle.cpp Bicycle.h
	g++ -c Bicycle.cpp

Car.o: Car.cpp Car.h
	g++ -c Car.cpp

PoweredVehicle.o: PoweredVehicle.cpp PoweredVehicle.h
	g++ -c PoweredVehicle.cpp

Vehicle.o: Vehicle.cpp Vehicle.h
	g++ -c Vehicle.cpp

clean:
	rm -f *.o driving
