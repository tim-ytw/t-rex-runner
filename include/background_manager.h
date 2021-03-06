#ifndef background_manager_h
#define background_manager_h


// LOCAL
#include "game_object.h"
#include "objects_manager.h"
#include "renderer.h"

#include "road.h"
#include "cloud.h"


class BackgroundManager : public ObjectsManager
{
public:
	BackgroundManager();
	~BackgroundManager();
	
	void Init();
	void Render(Renderer& renderer);
  void UpdateLocation(double time);
	bool CollidedWith(const GameObject& obj);
	
private:
  static TRex::Object getRoad();
	void RenderList(std::deque<GameObject*>& list, Renderer& renderer);
	
	std::deque<GameObject*> roads_;
	std::deque<GameObject*> clouds_;
};


#endif /* background_manager_h */
