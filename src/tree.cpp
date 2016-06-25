//
//  tree.cpp
//  T-Rex-Runner
//
//  Created by Tim on 2016-06-05.
//  Copyright © 2016 Tim. All rights reserved.
//

// CPP
#include <iostream>

// LOCAL
#include "game_env.h"
#include "tree.h"
#include "renderer.h"


const int kTreeWidth = 22;
const int kTreeHeight = 44;
const int kInitY = GameParam::kSceneHeight - GameParam::kHorizonHeight - 33;


Tree::Tree(int x, int y): GameObject(TRex::TREE, x, kInitY)
{
	v_x_ = (-1) * GameParam::gDinoSpeed;
	width_ = kTreeWidth;
	height_ = kTreeHeight;
}

Tree::~Tree() {}


GameObject* Tree::GetTree(int x, int y)
{
	return new Tree(x, y);
}

