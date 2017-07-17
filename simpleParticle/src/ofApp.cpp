#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    //ofSetBackgroundAuto(false);
    ofBackground(0);
    
    
//    p1.init(100, 10, 1.0);
//    p2.init(300,40, 3.0);
//    for (int i = 0; i < num; i ++) particles[i].init(i*10, ofRandom(5, 30), ofRandom(1,5),ofRandom(1,5));
    
     //for (int i = 0; i <particles.size(); i ++) particles[i].init(i*10, ofRandom(5, 30), ofRandom(1,5),ofRandom(1,5));
    
    
    gui.setup();
    gui.add(particleNum.setup("particle num", 500, 10, 10000));
    gui.add(pReso.setup("pReso", 9, 3, 100));
    gui.add(cSize.setup("cSize", 0.5, 0.5, 30));
    gui.add(r.setup("r", 255, 0,255));
    gui.add(g.setup("g", 0, 50, 255));
    gui.add(b.setup("b", 0, 100,255));
    gui.add(addShape.setup("addShape", false));
    gui.add(sDist.setup("b", 75, 10,250));
    
    particles.resize(particleNum);
    generateParticle();
    ofSetCircleResolution(pReso);
    

}

//--------------------------------------------------------------

void ofApp::generateParticle() {
    for (int i = 0; i <particles.size(); i ++) particles[i].init(i*10, ofRandom(cSize), ofRandom(1,5),ofRandom(1,5));
}

//--------------------------------------------------------------
void ofApp::update(){
    particles.resize(particleNum);
    generateParticle();
    ofSetCircleResolution(pReso);
//    p1.update();
//    p2.update();
    a += 0.01;
    aa += 0.03;
    for (int i = 0; i < particles.size(); i ++) particles[i].update();

}

//--------------------------------------------------------------
void ofApp::draw(){
    
//    p1.render();
//    p2.render();
//    float r = 255*abs(sin(aa));
//    float g = 255*abs(sin(a));
//    float b = 255*abs(cos(a));
//    int r = r;
//    int g = g;
//    int b = b;
    ofSetColor(r, g, b);
    ofFill();
    for (int i = 0; i < particles.size(); i ++) {
        particles[i].render();
        if(i < particles.size()-3 && ofRandom(1) < 0.5 && addShape) {

            if( ofDist(particles[i].xPos,particles[i].yPos,particles[i-1].xPos,particles[i-1].yPos) <sDist && ofDist(particles[i-1].xPos,particles[i-1].yPos,particles[i-2].xPos,particles[i-2].yPos) < sDist) {
                ofDrawTriangle(particles[i].xPos,particles[i].yPos,particles[i-1].xPos,particles[i-1].yPos,particles[i-2].xPos,particles[i-2].yPos);
            }
            
        }
    }
    gui.draw();

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
