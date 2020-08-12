#include "ofMain.h"
#include "ofApp.h"

#include "ofxArgParser.h"

//--------------------------------------------------------------
int main(int argc, const char** argv){
	
	ofxArgParser::init(argc, argv);
	ofSetupOpenGL(1024, 768, OF_WINDOW);
	ofRunApp(new ofApp()); // start the app
}
