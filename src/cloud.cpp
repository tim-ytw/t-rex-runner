//
//  cloud.cpp
//  T-Rex-Runner
//
//  Created by Tim on 2016-06-05.
//  Copyright © 2016 Tim. All rights reserved.
//

// LOCAL
#include "cloud.hpp"
#include "game_env.hpp"

// CPP
#include <stdlib.h>

const double kCloudSpeed = 15;
const int kCloudHeightMinimum = 80;
const int kCloudHeightRange = GameParam::kSceneHeight - (GameParam::kHorizonHeight + kCloudHeightMinimum);

const int kCloudWidth = 57;
const int kCloudHeight = 20;

Cloud::Cloud(): GameObject(TRex::CLOUD)
{
  Init();
}

Cloud::Cloud(int x, int y): GameObject(TRex::CLOUD, x, y)
{
  Init();
}

Cloud::~Cloud() {}

void Cloud::Init()
{
  v_x_ = (-1) * kCloudSpeed;
  width_ = kCloudWidth;
  height_ = kCloudHeight;
}

bool Cloud::CollidedWith(const GameObject& obj) const
{
	return false;
}

GameObject* Cloud::GetCloud(int x, int y)
{
  int cloud_x = GameParam::kSceneWidth;
  int cloud_y = GameParam::kSceneHeight -
  (rand()% kCloudHeightRange + GameParam::kHorizonHeight + kCloudHeightMinimum);

  return new Cloud(cloud_x, cloud_y);
}
