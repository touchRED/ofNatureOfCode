#include "Ball.h"

Ball::Ball(){
}

//--------------------------------------------------------------
void Ball::setup(int r_, int c_){

	ofSetCircleResolution(100);

	radius = r_;
	color = c_;

	location.set((ofGetViewportWidth() / 2) + ofRandom(-150, 150), (ofGetViewportHeight() / 2) + ofRandom(-150, 150));
	velocity.set(0,0);
}

//--------------------------------------------------------------
void Ball::update(){

	ofVec2f mouse(ofGetMouseX(), ofGetMouseY());

	acceleration = mouse - location;
	acceleration.normalize();
	acceleration *= 0.5;
	
	velocity += acceleration;
	location += velocity;
	velocity.limit(10);
}

//--------------------------------------------------------------
void Ball::draw(){

	ofSetColor(color);

	ofDrawCircle(location.x, location.y, radius);

}