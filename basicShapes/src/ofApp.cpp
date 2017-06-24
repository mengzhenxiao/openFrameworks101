#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    ofSetFrameRate(60);
    ofSetRectMode(OF_RECTMODE_CENTER);   // OF_RECTMODE_CORNER
    //ofSetBackgroundAuto(false);
    gui.setup();
    gui.add(cR.setup("resolution", 20, 0, 100));
    

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    gui.draw();
    int w = ofGetWidth();
    int h = ofGetHeight();
    ofSetColor(255);
    ofDrawLine(0, h/2, w, h/2);
    ofDrawLine(w/3, 0, w/3, h);
    ofDrawLine(w/3*2, 0, w/3*2, h);
    
    // rectangle
    ofPushMatrix();
    ofTranslate(w/6, h/4);
    ofDrawRectangle(0, 0, 200, 200);
    ofPopMatrix();
    
    // circle
    ofPushMatrix();
    ofTranslate(w/2, h/4);
    // resolution change by slider
    ofSetCircleResolution(cR);
    ofDrawCircle(0, 0, 150);
    ofPopMatrix();
    
    
    // triangle
    ofPushMatrix();
    ofTranslate(w/6*5, h/4);
    ofDrawTriangle(0, -100, -140, 50, 140, 50);
    ofPopMatrix();
    
    // line
    ofPushMatrix();
    ofTranslate(w/6, h/4*3);
    ofDrawLine(-100,-100, 100, 100);
    ofDrawLine(-100,100, 100, -100);
    ofPopMatrix();
    
    // vertex
    ofPushMatrix();
    ofTranslate(w/2, h/4*3);
    ofNoFill();
    ofBeginShape();
    for(int i=0; i<10; i++) {
        float x = ofRandom(-150,150);
        float y = ofRandom(-150,150);
        ofVertex(x, y);
    }
    ofEndShape();
    ofPopMatrix();
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
