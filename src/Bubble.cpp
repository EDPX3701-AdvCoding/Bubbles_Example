//
//  Bubble.cpp
//  learningBubbles
//
//  Created by Chris Coleman on 4/15/15.
//
//

#include "Bubble.h"


Bubble::Bubble(){
    pos = ofVec2f(300, 300);
    vel = ofVec2f(ofRandom(-10,10), ofRandom(-10,10));;
    rad = 30;
    myColor = ofColor(ofRandom(255),ofRandom(255),ofRandom(255));
    rot = 0;
    
}

void Bubble::setup(float _x, float _y){
    pos = ofVec2f(_x, _y);
    birth = pos;
}
void Bubble::update(){
    pos += vel;
    rot+=abs(vel.x);
    float distance = ofDist(birth.x,birth.y,pos.x, pos.y);
    float bright = ofMap(distance, 0, 400, 255, 0);
    myColor.a = bright;
}
void Bubble::draw(){
    ofSetColor(myColor);
    //option1
    ofPushMatrix();
    ofTranslate(pos);
    ofRotate(rot);
    ofCircle(0,0 , rad);
    ofPopMatrix();
    
    ///option2
//    ofPushMatrix();
//    ofRotate(rot);
//    ofCircle(pos, rad);
//    ofPopMatrix();
    
    
}