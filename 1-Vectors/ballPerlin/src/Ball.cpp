#include "Ball.h"

Ball::Ball(){
	
}

//--------------------------------------------------------------
void Ball::setup(){

	ofSetCircleResolution(100);

	radius = 50;

	noise.set(ofRandom(5), ofRandom(5));
	location.set(ofGetViewportWidth() / 2, ofGetViewportHeight() / 2);
	velocity.set(0,0);
	acceleration.set(0, 0);
}

//--------------------------------------------------------------
void Ball::update(){
	noise.x += 0.01;
	noise.y += 0.01;
	acceleration.set(ofSignedNoise(noise.x), ofSignedNoise(noise.y));
	velocity += acceleration;
	location += velocity;
	velocity.limit(3);
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