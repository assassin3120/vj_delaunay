#pragma once

#include "ofMain.h"
#include "ofxCv.h"
#include "ofxDelaunay.h"
#include "ofxKinect.h"
#include "ofxPostGlitch.h"
#include "ofxSyphon.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    ofxCv::FlowPyrLK flow;
    ofxDelaunay delaunay;
    ofxKinect kinect;
    ofxPostGlitch myGlitch;
    
    ofxSyphonServer mainOutputSyphonServer;
    ofxSyphonServer individualTextureSyphonServer;
    ofxSyphonClient mClient;

    vector<ofVec3f> pts;
    bool	bDrawLenna;
    bool	bShowHelp;
    
    ofFbo fbo;
    ofImage lenna;
    ofVideoPlayer video;
};
