#include "Ball.h"

Ball::Ball(){
	
}

//--------------------------------------------------------------
void Ball::setup(){

	ofSetCircleResolution(100);

	radius = 50;

	location.set(100,100);
	velocity.set(5,5);
}

//--------------------------------------------------------------
void Ball::update(){
	location += velocity;
}

void Ball::checkEdges(){

	if(location.x + radius > ofGetViewportWidth() || location.x - radius < 0){
		velocity.x *= -1;
	}
		
	if(location.y + radius > ofGetViewportHeight() || location.y - radius < 0){
		velocity.y *= -1;
	}
	
}

//--------------------------------------------------------------
void Ball::draw(){

	ofDrawCircle(location.x, location.y, radius);

}