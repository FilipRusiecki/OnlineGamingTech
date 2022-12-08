#ifdef _DEBUG 
#pragma comment(lib,"sfml-graphics-d.lib") 
#pragma comment(lib,"sfml-audio-d.lib") 
#pragma comment(lib,"sfml-system-d.lib") 
#pragma comment(lib,"sfml-window-d.lib") 
#pragma comment(lib,"sfml-network-d.lib") 
#else 
#pragma comment(lib,"sfml-graphics.lib") 
#pragma comment(lib,"sfml-audio.lib") 
#pragma comment(lib,"sfml-system.lib") 
#pragma comment(lib,"sfml-window.lib") 
#pragma comment(lib,"sfml-network.lib") 
#endif 


#include "Game.h"
#include "Client.h"

int main()
{
	Client myClient("127.0.0.1", 1111); //Create client to localhost ("127.0.0.1") on port 1111

	if (!myClient.Connect()) //If client fails to connect...
	{
		std::cout << "Failed to connect to server..." << std::endl;
		system("pause");
		return 1;
	}


	//std::string userinput; //holds the user's chat message
	//while (true)
	//{
	//	std::getline(std::cin, userinput); //Get line if user presses enter and fill the buffer
	//	if (!myClient.SendString(userinput)) //Send string: userinput, If string fails to send... (Connection issue)
	//		break; //If send string failed (if connection was closed), leave this loop since we have lost connection to the server
	//	Sleep(10);
	//}

	Game game;
	
	game.run();

	system("pause");
	return 0;
}

