#pragma once

#include "ofMain.h"

class Ball{

	public:
		Ball();
		void setup(int r_, int c_);
		void update();
		void draw();

		int radius;
		int color;

		ofVec2f location;
		ofVec2f velocity;
		ofVec2f acceleration;
		
};