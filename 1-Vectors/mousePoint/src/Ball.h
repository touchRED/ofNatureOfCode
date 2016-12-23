#pragma once

#include "ofMain.h"

class Ball{

	public:
		Ball();
		void setup();
		void update();
		void draw();

		ofVec2f location;
		ofVec2f velocity;
		
};