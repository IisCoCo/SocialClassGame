#include <iostream>

#ifdef __linux__
  #include <arpa/inet.h>
#elif _WIN32
  #include <Winsock2.h>
#elif __APPLE__
  //mac sock file
#else
  //error
#endif

using namespace std;

int main() {
  cout << "Hello World!" << endl;

  return 0;
}
