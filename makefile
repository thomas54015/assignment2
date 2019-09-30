driving: Bicycle.o Car.o PoweredVehicle.o Vehicle.o Skateboard.o Jet.o Scooter.o
	g++ -o driving main.cpp Bicycle.o Car.o PoweredVehicle.o Vehicle.o Skateboard.o Jet.o Scooter.o

Skateboard.o: Skateboard.cpp Skateboard.h
	g++ -c Skateboard.cpp

Jet.o: Jet.cpp Jet.h
	g++ -c Jet.cpp

Scooter.o: Scooter.cpp Scooter.h
	g++ -c Scooter.cpp

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
