#pragma once


#include <khrbinding/Boolean32.h>

#include <glesbinding/glesbinding_api.h>
#include <glesbinding/glesbinding_features.h>
#include <glesbinding/nogl.h>


namespace gles
{


using GLboolean = khrbinding::Boolean32;


} // namespace gl


namespace gles
{

// import booleans to namespace

GLESBINDING_CONSTEXPR static const GLboolean GL_FALSE = GLboolean(0);
GLESBINDING_CONSTEXPR static const GLboolean GL_TRUE = GLboolean(1);


} // namespace gles
