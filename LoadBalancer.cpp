// LoadBalancer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
}

/*
Task :
1. Create a REST Server, which accepts requests from clients
2. Create a mechanism to pass that requests to next level i.e. Messaging queue or such thing.
3. The same thing should be able to get the response from messaging queue to pass that data back to client.
4. Have the messaging queue implemented.
5. Add hashing to pass data to random server or threads.
6. Add condition for randomly adding the server or deleting the server
7. Add cyclic hashing - where one point is one server and it has many virtual nodes which keeps the traffic equally distributed.

*/

/*
Current status : 
Date: 24/09/22
    Just started, listed out the tasks
*/