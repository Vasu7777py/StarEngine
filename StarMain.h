//
//  StarMain.h
//
//  Created by sungwoo choi on 8/25/12.
//  Copyright (c) 2012 SungLab. All rights reserved.
//

#ifndef StarEngine_Main_Header
#define StarEngine_Main_Header

class starengine;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////// Case IOS //////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
 #ifdef IOS
#import "GLView.h"
#import <UIKit/UIKit.h>
#import <OpenGLES/ES2/gl.h>
#import <OpenGLES/ES2/glext.h>
#include <iostream>
 #endif

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////// Case ANDROID //////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifdef ANDROID
#include <jni.h>
#include <android/log.h>
#include <GLES2/gl2.h>
#include <GLES2/gl2ext.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
#define  LOG_TAG    "StarEngine"
#define  LOGI(...)  __android_log_print(ANDROID_LOG_INFO,LOG_TAG,__VA_ARGS__)
#define  LOGE(...)  __android_log_print(ANDROID_LOG_ERROR,LOG_TAG,__VA_ARGS__) 
#endif

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////// Case MAC //////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
#ifdef MAC
//#import <OpenGL/OpenGL.h>
#import <OpenGL/gl3.h>
#import <OpenGL/glext.h>
//#import <OpenGL/glu.h>
#import <Cocoa/Cocoa.h>
//#import "GLView.h"

#elif _WIN32 //Windows

#include <SDL.h>
#include <GL/glew.h>
#include <SDL_opengl.h>
#include <gl/glu.h>

#include <stdio.h>
#include <string>
#include <cstdlib>

void winprintf(const char *fmt, ...);
#endif


///////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////// OS Free ///////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include "./renderer/StarShader.h"
#include "./renderer/StarFBO.h"
#include "./renderer/StarTexture.h"
#include "./math/StarMath.h"
#include "./tool/StarTimer.h"
#include "./tool/StarTouch.h"
#include "./tool/StarUtil.h"

#include "./effect/StarEffect.h"
#include "./effect/StarParticle.h"
#include "./geometry/StarStructure.h"
#include "./geometry/StarOBJ.h"
#include "./geometry/StarGeo.h"
#include "./geometry/StarMesh.h"
#include "./ai/StarAnt.h"

#include "./ui/StarView.h"
#include "./cv/StarCV.h"
#include "./ui/StarScene.h"

#define ToInt(x) static_cast<int>(x)
#define ToUInt(x) static_cast<unsigned int>(x)
#define ToLong(x) static_cast<long>(x)
#define ToFloat(x) static_cast<float>(x)
#define ToDouble(x) static_cast<double>(x)

#define STRINGIFY(A)  #A

#ifdef IOS
#define starLOG printf
#elif MAC
#define starLOG printf
#elif ANDROID
#define starLOG LOGE
#elif _WIN32
#define starLOG winprintf
#endif

#endif
