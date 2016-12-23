#pragma once

#include "ofMain.h"

class Ball{

	public:
		Ball();
		void setup();
		void update();
		void checkEdges();
		void draw();

		int radius;

		ofVec2f location;
		ofVec2f velocity;
		ofVec2f acceleration;
		ofVec2f noise;
		
};