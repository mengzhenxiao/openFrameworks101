#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    // for arduino
    serial.setup( 0, 9600 );
    

}

//--------------------------------------------------------------
void ofApp::update(){
    
    while ( true ) {
        int c = serial.readByte();
        if ( c == OF_SERIAL_NO_DATA || c == OF_SERIAL_ERROR || c == 0 )
            break;
        if ( c == '\n' ) {
            shapeType = ofToInt(ofSplitString(str, ",")[0]);
            shapeSize = ofToInt(ofSplitString(str, ",")[1]);
            //x = ofToInt( str );
            str = ""; }
        else str.push_back( c );
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    switch(shapeType) {
        case 0:
            ofDrawCircle(0, 0, shapeSize);
            break;
        case 1:
            ofDrawRectangle(0, 0, shapeSize, shapeSize);
            break;
        case 2:
            ofDrawLine(0, 0, shapeSize, shapeSize);
            break;
        case 3:
            cout << shapeSize << endl;
            break;
        default:
            break;
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
