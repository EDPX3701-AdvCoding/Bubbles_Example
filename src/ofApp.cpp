#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetCircleResolution(3);
}

//--------------------------------------------------------------
void ofApp::update(){
    Bubble tempBubble;
    tempBubble.setup(ofGetMouseX(),ofGetMouseY());
    bubbles.push_back(tempBubble);
    for (int i = 0; i< bubbles.size(); i++) {
        bubbles[i].update();
        float distance = ofDist(bubbles[i].birth.x, bubbles[i].birth.y, bubbles[i].pos.x, bubbles[i].pos.y);
        if (distance>400) {
            bubbles.erase(bubbles.begin()+i);
            i--;
        }
        
        
    }
    
    
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    for (int i = 0; i< bubbles.size(); i++) {
        bubbles[i].draw();
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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
