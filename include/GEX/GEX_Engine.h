#ifndef GEX_ENGINE_H
#define GEX_ENGINE_H

#include <list>
#include <string>

#include "GEX_Scene.h"

class Engine {
private:
  std::string title;

  std::list<GEX::Scene*> scenes;

public:
  Engine(); // Untitled 생성자
  Engine(const std::string& t); // Title 을 받는 생성자
  std::string getTitle() const;
  void setTitle(const std::string& t);
  void registScene(GEX::Scene* scene);
  void unregistScene(GEX::Scene* scene);

};

#endif // GEX_ENGINE_H
