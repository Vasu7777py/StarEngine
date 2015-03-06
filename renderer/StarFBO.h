//
//  StarBuffer.h
//  StarEngine
//
//  Created by sungwoo choi on 8/22/12.
//  Copyright (c) 2012 SungLab. All rights reserved.
//

#ifndef StarEngine_StarFBO_h
#define StarEngine_StarFBO_h

#include "../StarMain.h"
class StarFBO
{
    
public:
		// IDs for fbo, vao and vbo
    unsigned int* fbo;
    unsigned int* rboColor;
    unsigned int* rboDepth;
//    unsigned int* rboStencil;
    
    unsigned int* vao;
    unsigned int* vbo;
		
    StarFBO(void);
    StarFBO( unsigned int fbo_number, unsigned int vbo_number, unsigned int vao_number);
    
		//ETC Renderbuffers and Framebuffer Setting
		void createFBO( bool depth, bool stencil, unsigned int width, unsigned int height, unsigned int object_id);
        void bindFBO( unsigned int object_id);
        void unbindFBO();
        void bindRBO( unsigned int object_id);
    void unbindRBO();
    
		void createVAO( unsigned int object_id);
		void bindVAO( unsigned object_id);
        void unbindVAO();
    
    void createVBOsub(unsigned int target, unsigned int offset, unsigned int size, void* data, unsigned int dataType, unsigned int object_id);
    void createVBO( unsigned int target, unsigned int size, void* data, unsigned int dataType, unsigned int object_id);
    void bindVBO( unsigned int target, unsigned int object_id);
    void unbindVBO(unsigned int target);
    
    ~StarFBO();
};
#endif