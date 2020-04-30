#include <iostream>
#include <string>

#include "TerminalClient.h"
#include "MqttClient.h"
#include "SunTracker.h"

//TerminalClient client;
MqttClient client("test", "test/topic", "localhost", 1884);


int main(int argc, char* argv[])
{

	SunTracker sunTracker(300, 300, -2, 1200); //the variable is created

	for (int i = 0; i < 720; i++) */counting angle for each minute from 7 a.m to 7 p.m and sending a message for clients
if its dangerous*/
	{
		if ( sunTracker.isDangerous() )
		{
			std::string message = "WARNING! TIME: " + std::to_string(i / 12 + 7) + ":" + std::to_string(i % 60);
			client.send_message(message.c_str()); 
		}

		sunTracker.toModelMinute(); //modelling the next minute
	}


	// Used to complete sending messages, for time of the programm not to end before sending all of the messages
	int test;

	std::cout << "Enter something to end: ";
	std::cin >> test; 

	
	return 0;
}

// Broker start:
// mosquitto -p 1884 -v

// Client Subscribe: 
// mosquitto_sub -h localhost -p 1884 -t "test/topic"
