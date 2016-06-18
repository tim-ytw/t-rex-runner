//
//  obstacle_manager.hpp
//  T-Rex-Runner
//
//  Created by Tim on 2016-06-05.
//  Copyright © 2016 Tim. All rights reserved.
//

#ifndef obstacle_manager_hpp
#define obstacle_manager_hpp

// CPP
#include <stdio.h>
#include <deque>

// LOCAL
#include "renderer.hpp"
#include "game_object.hpp"

class ObjectsManager
{
	
public:
	virtual ~ObjectsManager();
	
	void Run();
	virtual void Init() = 0;
	virtual void Render(Renderer& renderer) = 0;
	virtual bool CollidedWith(const GameObject& obj) = 0;
	virtual void UpdateLocation(double time) = 0;
	
protected:
	static void UpdateLocation(std::deque<GameObject*>& list, double time, bool outOfBoundCleared = true);
	
	void DestroyObjects(GameObjectContainer& objects);
	bool CollidedWith(const GameObject& object, const GameObjectContainer& objects);
	void Render(Renderer& renderer, const GameObjectContainer& objects);
};





#endif /* obstacle_manager_hpp */
