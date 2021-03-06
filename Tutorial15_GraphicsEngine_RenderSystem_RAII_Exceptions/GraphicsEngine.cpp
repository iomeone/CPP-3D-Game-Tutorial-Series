// Copyright (c) 2019 - 2020 PardCode
// All rights reserved.
//
// This file is part of CPP-3D-Game-Tutorial-Series Project, accessible from https://github.com/PardCode/CPP-3D-Game-Tutorial-Series
// You can redistribute it and/or modify it under the terms of the GNU
// General Public License 
//
// This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
// WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.

#include "GraphicsEngine.h"
#include "RenderSystem.h"


GraphicsEngine::GraphicsEngine()
{
		

}

bool GraphicsEngine::init()
{
	m_render_system = new RenderSystem();
		m_render_system->init();
	return true;
}

RenderSystem * GraphicsEngine::getRenderSystem()
{
	
	return m_render_system;
}

bool GraphicsEngine::release()
{
	m_render_system->release();
	delete m_render_system;
	return true;
}

GraphicsEngine::~GraphicsEngine()
{

}

GraphicsEngine * GraphicsEngine::get()
{
	static GraphicsEngine engine;
	return &engine;
}
