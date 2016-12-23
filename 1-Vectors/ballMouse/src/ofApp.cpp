#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	
	for(int i = 0; i < 20; i++){
		myBalls[i].setup(ofRandom(15, 50), ofRandom(255));
	}
}

//--------------------------------------------------------------
void ofApp::update(){
	for(int i = 0; i < 20; i++){
		myBalls[i].update();
	}
}

//--------------------------------------------------------------
void ofApp::draw(){
	for(int i = 0; i < 20; i++){
		myBalls[i].draw();
	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
