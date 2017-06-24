#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowShape(500, 500);}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    cout << "you pressed " << key << endl;

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    cout << "you released " << key << endl;

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    cout << "mouseMoved " << "x:" <<  x << " y:" << y << endl;
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    cout << "mouseDragged " << "x:" <<  x << " y:" << y << endl;

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    cout << "mousePressed " << "x:" <<  x << " y:" << y << endl;

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    cout << "mouseReleased " << "x:" <<  x << " y:" << y << endl;

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){
    cout << "mouseEntered " << "x:" <<  x << " y:" << y << endl;

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){
    cout << "mouseExited " << "x:" <<  x << " y:" << y << endl;

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    cout << "you resized window size " << "w:" << w << " h:" << h << endl;

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
