#ifndef GEX_ENGINE_H
#define GEX_ENGINE_H

#include <string>

class Engine {
private:
  std::string title;

public:
  Engine(); // Untitled 생성자
  Engine(const std::string& t); // Title 을 받는 생성자
  std::string getTitle() const;
  void setTitle(const std::string& t);
};

#endif // GEX_ENGINE_H
