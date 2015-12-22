// Generated Code - DO NOT EDIT !!
// generated by 'emugen'
#ifndef __gl_client_proc_t_h
#define __gl_client_proc_t_h



#include "gl_types.h"
#ifndef gl_APIENTRY
#define gl_APIENTRY 
#endif
typedef void (gl_APIENTRY *glAlphaFunc_client_proc_t) (void * ctx, GLenum, GLclampf);
typedef void (gl_APIENTRY *glClearColor_client_proc_t) (void * ctx, GLclampf, GLclampf, GLclampf, GLclampf);
typedef void (gl_APIENTRY *glClearDepthf_client_proc_t) (void * ctx, GLclampf);
typedef void (gl_APIENTRY *glClipPlanef_client_proc_t) (void * ctx, GLenum, const GLfloat*);
typedef void (gl_APIENTRY *glColor4f_client_proc_t) (void * ctx, GLfloat, GLfloat, GLfloat, GLfloat);
typedef void (gl_APIENTRY *glDepthRangef_client_proc_t) (void * ctx, GLclampf, GLclampf);
typedef void (gl_APIENTRY *glFogf_client_proc_t) (void * ctx, GLenum, GLfloat);
typedef void (gl_APIENTRY *glFogfv_client_proc_t) (void * ctx, GLenum, const GLfloat*);
typedef void (gl_APIENTRY *glFrustumf_client_proc_t) (void * ctx, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat);
typedef void (gl_APIENTRY *glGetClipPlanef_client_proc_t) (void * ctx, GLenum, GLfloat*);
typedef void (gl_APIENTRY *glGetFloatv_client_proc_t) (void * ctx, GLenum, GLfloat*);
typedef void (gl_APIENTRY *glGetLightfv_client_proc_t) (void * ctx, GLenum, GLenum, GLfloat*);
typedef void (gl_APIENTRY *glGetMaterialfv_client_proc_t) (void * ctx, GLenum, GLenum, GLfloat*);
typedef void (gl_APIENTRY *glGetTexEnvfv_client_proc_t) (void * ctx, GLenum, GLenum, GLfloat*);
typedef void (gl_APIENTRY *glGetTexParameterfv_client_proc_t) (void * ctx, GLenum, GLenum, GLfloat*);
typedef void (gl_APIENTRY *glLightModelf_client_proc_t) (void * ctx, GLenum, GLfloat);
typedef void (gl_APIENTRY *glLightModelfv_client_proc_t) (void * ctx, GLenum, const GLfloat*);
typedef void (gl_APIENTRY *glLightf_client_proc_t) (void * ctx, GLenum, GLenum, GLfloat);
typedef void (gl_APIENTRY *glLightfv_client_proc_t) (void * ctx, GLenum, GLenum, const GLfloat*);
typedef void (gl_APIENTRY *glLineWidth_client_proc_t) (void * ctx, GLfloat);
typedef void (gl_APIENTRY *glLoadMatrixf_client_proc_t) (void * ctx, const GLfloat*);
typedef void (gl_APIENTRY *glMaterialf_client_proc_t) (void * ctx, GLenum, GLenum, GLfloat);
typedef void (gl_APIENTRY *glMaterialfv_client_proc_t) (void * ctx, GLenum, GLenum, const GLfloat*);
typedef void (gl_APIENTRY *glMultMatrixf_client_proc_t) (void * ctx, const GLfloat*);
typedef void (gl_APIENTRY *glMultiTexCoord4f_client_proc_t) (void * ctx, GLenum, GLfloat, GLfloat, GLfloat, GLfloat);
typedef void (gl_APIENTRY *glNormal3f_client_proc_t) (void * ctx, GLfloat, GLfloat, GLfloat);
typedef void (gl_APIENTRY *glOrthof_client_proc_t) (void * ctx, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat);
typedef void (gl_APIENTRY *glPointParameterf_client_proc_t) (void * ctx, GLenum, GLfloat);
typedef void (gl_APIENTRY *glPointParameterfv_client_proc_t) (void * ctx, GLenum, const GLfloat*);
typedef void (gl_APIENTRY *glPointSize_client_proc_t) (void * ctx, GLfloat);
typedef void (gl_APIENTRY *glPolygonOffset_client_proc_t) (void * ctx, GLfloat, GLfloat);
typedef void (gl_APIENTRY *glRotatef_client_proc_t) (void * ctx, GLfloat, GLfloat, GLfloat, GLfloat);
typedef void (gl_APIENTRY *glScalef_client_proc_t) (void * ctx, GLfloat, GLfloat, GLfloat);
typedef void (gl_APIENTRY *glTexEnvf_client_proc_t) (void * ctx, GLenum, GLenum, GLfloat);
typedef void (gl_APIENTRY *glTexEnvfv_client_proc_t) (void * ctx, GLenum, GLenum, const GLfloat*);
typedef void (gl_APIENTRY *glTexParameterf_client_proc_t) (void * ctx, GLenum, GLenum, GLfloat);
typedef void (gl_APIENTRY *glTexParameterfv_client_proc_t) (void * ctx, GLenum, GLenum, const GLfloat*);
typedef void (gl_APIENTRY *glTranslatef_client_proc_t) (void * ctx, GLfloat, GLfloat, GLfloat);
typedef void (gl_APIENTRY *glActiveTexture_client_proc_t) (void * ctx, GLenum);
typedef void (gl_APIENTRY *glAlphaFuncx_client_proc_t) (void * ctx, GLenum, GLclampx);
typedef void (gl_APIENTRY *glBindBuffer_client_proc_t) (void * ctx, GLenum, GLuint);
typedef void (gl_APIENTRY *glBindTexture_client_proc_t) (void * ctx, GLenum, GLuint);
typedef void (gl_APIENTRY *glBlendFunc_client_proc_t) (void * ctx, GLenum, GLenum);
typedef void (gl_APIENTRY *glBufferData_client_proc_t) (void * ctx, GLenum, GLsizeiptr, const GLvoid*, GLenum);
typedef void (gl_APIENTRY *glBufferSubData_client_proc_t) (void * ctx, GLenum, GLintptr, GLsizeiptr, const GLvoid*);
typedef void (gl_APIENTRY *glClear_client_proc_t) (void * ctx, GLbitfield);
typedef void (gl_APIENTRY *glClearColorx_client_proc_t) (void * ctx, GLclampx, GLclampx, GLclampx, GLclampx);
typedef void (gl_APIENTRY *glClearDepthx_client_proc_t) (void * ctx, GLclampx);
typedef void (gl_APIENTRY *glClearStencil_client_proc_t) (void * ctx, GLint);
typedef void (gl_APIENTRY *glClientActiveTexture_client_proc_t) (void * ctx, GLenum);
typedef void (gl_APIENTRY *glColor4ub_client_proc_t) (void * ctx, GLubyte, GLubyte, GLubyte, GLubyte);
typedef void (gl_APIENTRY *glColor4x_client_proc_t) (void * ctx, GLfixed, GLfixed, GLfixed, GLfixed);
typedef void (gl_APIENTRY *glColorMask_client_proc_t) (void * ctx, GLboolean, GLboolean, GLboolean, GLboolean);
typedef void (gl_APIENTRY *glColorPointer_client_proc_t) (void * ctx, GLint, GLenum, GLsizei, const GLvoid*);
typedef void (gl_APIENTRY *glCompressedTexImage2D_client_proc_t) (void * ctx, GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const GLvoid*);
typedef void (gl_APIENTRY *glCompressedTexSubImage2D_client_proc_t) (void * ctx, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid*);
typedef void (gl_APIENTRY *glCopyTexImage2D_client_proc_t) (void * ctx, GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint);
typedef void (gl_APIENTRY *glCopyTexSubImage2D_client_proc_t) (void * ctx, GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei);
typedef void (gl_APIENTRY *glCullFace_client_proc_t) (void * ctx, GLenum);
typedef void (gl_APIENTRY *glDeleteBuffers_client_proc_t) (void * ctx, GLsizei, const GLuint*);
typedef void (gl_APIENTRY *glDeleteTextures_client_proc_t) (void * ctx, GLsizei, const GLuint*);
typedef void (gl_APIENTRY *glDepthFunc_client_proc_t) (void * ctx, GLenum);
typedef void (gl_APIENTRY *glDepthMask_client_proc_t) (void * ctx, GLboolean);
typedef void (gl_APIENTRY *glDepthRangex_client_proc_t) (void * ctx, GLclampx, GLclampx);
typedef void (gl_APIENTRY *glDisable_client_proc_t) (void * ctx, GLenum);
typedef void (gl_APIENTRY *glDisableClientState_client_proc_t) (void * ctx, GLenum);
typedef void (gl_APIENTRY *glDrawArrays_client_proc_t) (void * ctx, GLenum, GLint, GLsizei);
typedef void (gl_APIENTRY *glDrawElements_client_proc_t) (void * ctx, GLenum, GLsizei, GLenum, const GLvoid*);
typedef void (gl_APIENTRY *glEnable_client_proc_t) (void * ctx, GLenum);
typedef void (gl_APIENTRY *glEnableClientState_client_proc_t) (void * ctx, GLenum);
typedef void (gl_APIENTRY *glFinish_client_proc_t) (void * ctx);
typedef void (gl_APIENTRY *glFlush_client_proc_t) (void * ctx);
typedef void (gl_APIENTRY *glFogx_client_proc_t) (void * ctx, GLenum, GLfixed);
typedef void (gl_APIENTRY *glFogxv_client_proc_t) (void * ctx, GLenum, const GLfixed*);
typedef void (gl_APIENTRY *glFrontFace_client_proc_t) (void * ctx, GLenum);
typedef void (gl_APIENTRY *glFrustumx_client_proc_t) (void * ctx, GLfixed, GLfixed, GLfixed, GLfixed, GLfixed, GLfixed);
typedef void (gl_APIENTRY *glGetBooleanv_client_proc_t) (void * ctx, GLenum, GLboolean*);
typedef void (gl_APIENTRY *glGetBufferParameteriv_client_proc_t) (void * ctx, GLenum, GLenum, GLint*);
typedef void (gl_APIENTRY *glClipPlanex_client_proc_t) (void * ctx, GLenum, const GLfixed*);
typedef void (gl_APIENTRY *glGenBuffers_client_proc_t) (void * ctx, GLsizei, GLuint*);
typedef void (gl_APIENTRY *glGenTextures_client_proc_t) (void * ctx, GLsizei, GLuint*);
typedef GLenum (gl_APIENTRY *glGetError_client_proc_t) (void * ctx);
typedef void (gl_APIENTRY *glGetFixedv_client_proc_t) (void * ctx, GLenum, GLfixed*);
typedef void (gl_APIENTRY *glGetIntegerv_client_proc_t) (void * ctx, GLenum, GLint*);
typedef void (gl_APIENTRY *glGetLightxv_client_proc_t) (void * ctx, GLenum, GLenum, GLfixed*);
typedef void (gl_APIENTRY *glGetMaterialxv_client_proc_t) (void * ctx, GLenum, GLenum, GLfixed*);
typedef void (gl_APIENTRY *glGetPointerv_client_proc_t) (void * ctx, GLenum, GLvoid**);
typedef const GLubyte* (gl_APIENTRY *glGetString_client_proc_t) (void * ctx, GLenum);
typedef void (gl_APIENTRY *glGetTexEnviv_client_proc_t) (void * ctx, GLenum, GLenum, GLint*);
typedef void (gl_APIENTRY *glGetTexEnvxv_client_proc_t) (void * ctx, GLenum, GLenum, GLfixed*);
typedef void (gl_APIENTRY *glGetTexParameteriv_client_proc_t) (void * ctx, GLenum, GLenum, GLint*);
typedef void (gl_APIENTRY *glGetTexParameterxv_client_proc_t) (void * ctx, GLenum, GLenum, GLfixed*);
typedef void (gl_APIENTRY *glHint_client_proc_t) (void * ctx, GLenum, GLenum);
typedef GLboolean (gl_APIENTRY *glIsBuffer_client_proc_t) (void * ctx, GLuint);
typedef GLboolean (gl_APIENTRY *glIsEnabled_client_proc_t) (void * ctx, GLenum);
typedef GLboolean (gl_APIENTRY *glIsTexture_client_proc_t) (void * ctx, GLuint);
typedef void (gl_APIENTRY *glLightModelx_client_proc_t) (void * ctx, GLenum, GLfixed);
typedef void (gl_APIENTRY *glLightModelxv_client_proc_t) (void * ctx, GLenum, const GLfixed*);
typedef void (gl_APIENTRY *glLightx_client_proc_t) (void * ctx, GLenum, GLenum, GLfixed);
typedef void (gl_APIENTRY *glLightxv_client_proc_t) (void * ctx, GLenum, GLenum, const GLfixed*);
typedef void (gl_APIENTRY *glLineWidthx_client_proc_t) (void * ctx, GLfixed);
typedef void (gl_APIENTRY *glLoadIdentity_client_proc_t) (void * ctx);
typedef void (gl_APIENTRY *glLoadMatrixx_client_proc_t) (void * ctx, const GLfixed*);
typedef void (gl_APIENTRY *glLogicOp_client_proc_t) (void * ctx, GLenum);
typedef void (gl_APIENTRY *glMaterialx_client_proc_t) (void * ctx, GLenum, GLenum, GLfixed);
typedef void (gl_APIENTRY *glMaterialxv_client_proc_t) (void * ctx, GLenum, GLenum, const GLfixed*);
typedef void (gl_APIENTRY *glMatrixMode_client_proc_t) (void * ctx, GLenum);
typedef void (gl_APIENTRY *glMultMatrixx_client_proc_t) (void * ctx, const GLfixed*);
typedef void (gl_APIENTRY *glMultiTexCoord4x_client_proc_t) (void * ctx, GLenum, GLfixed, GLfixed, GLfixed, GLfixed);
typedef void (gl_APIENTRY *glNormal3x_client_proc_t) (void * ctx, GLfixed, GLfixed, GLfixed);
typedef void (gl_APIENTRY *glNormalPointer_client_proc_t) (void * ctx, GLenum, GLsizei, const GLvoid*);
typedef void (gl_APIENTRY *glOrthox_client_proc_t) (void * ctx, GLfixed, GLfixed, GLfixed, GLfixed, GLfixed, GLfixed);
typedef void (gl_APIENTRY *glPixelStorei_client_proc_t) (void * ctx, GLenum, GLint);
typedef void (gl_APIENTRY *glPointParameterx_client_proc_t) (void * ctx, GLenum, GLfixed);
typedef void (gl_APIENTRY *glPointParameterxv_client_proc_t) (void * ctx, GLenum, const GLfixed*);
typedef void (gl_APIENTRY *glPointSizex_client_proc_t) (void * ctx, GLfixed);
typedef void (gl_APIENTRY *glPolygonOffsetx_client_proc_t) (void * ctx, GLfixed, GLfixed);
typedef void (gl_APIENTRY *glPopMatrix_client_proc_t) (void * ctx);
typedef void (gl_APIENTRY *glPushMatrix_client_proc_t) (void * ctx);
typedef void (gl_APIENTRY *glReadPixels_client_proc_t) (void * ctx, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, GLvoid*);
typedef void (gl_APIENTRY *glRotatex_client_proc_t) (void * ctx, GLfixed, GLfixed, GLfixed, GLfixed);
typedef void (gl_APIENTRY *glSampleCoverage_client_proc_t) (void * ctx, GLclampf, GLboolean);
typedef void (gl_APIENTRY *glSampleCoveragex_client_proc_t) (void * ctx, GLclampx, GLboolean);
typedef void (gl_APIENTRY *glScalex_client_proc_t) (void * ctx, GLfixed, GLfixed, GLfixed);
typedef void (gl_APIENTRY *glScissor_client_proc_t) (void * ctx, GLint, GLint, GLsizei, GLsizei);
typedef void (gl_APIENTRY *glShadeModel_client_proc_t) (void * ctx, GLenum);
typedef void (gl_APIENTRY *glStencilFunc_client_proc_t) (void * ctx, GLenum, GLint, GLuint);
typedef void (gl_APIENTRY *glStencilMask_client_proc_t) (void * ctx, GLuint);
typedef void (gl_APIENTRY *glStencilOp_client_proc_t) (void * ctx, GLenum, GLenum, GLenum);
typedef void (gl_APIENTRY *glTexCoordPointer_client_proc_t) (void * ctx, GLint, GLenum, GLsizei, const GLvoid*);
typedef void (gl_APIENTRY *glTexEnvi_client_proc_t) (void * ctx, GLenum, GLenum, GLint);
typedef void (gl_APIENTRY *glTexEnvx_client_proc_t) (void * ctx, GLenum, GLenum, GLfixed);
typedef void (gl_APIENTRY *glTexEnviv_client_proc_t) (void * ctx, GLenum, GLenum, const GLint*);
typedef void (gl_APIENTRY *glTexEnvxv_client_proc_t) (void * ctx, GLenum, GLenum, const GLfixed*);
typedef void (gl_APIENTRY *glTexImage2D_client_proc_t) (void * ctx, GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid*);
typedef void (gl_APIENTRY *glTexParameteri_client_proc_t) (void * ctx, GLenum, GLenum, GLint);
typedef void (gl_APIENTRY *glTexParameterx_client_proc_t) (void * ctx, GLenum, GLenum, GLfixed);
typedef void (gl_APIENTRY *glTexParameteriv_client_proc_t) (void * ctx, GLenum, GLenum, const GLint*);
typedef void (gl_APIENTRY *glTexParameterxv_client_proc_t) (void * ctx, GLenum, GLenum, const GLfixed*);
typedef void (gl_APIENTRY *glTexSubImage2D_client_proc_t) (void * ctx, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const GLvoid*);
typedef void (gl_APIENTRY *glTranslatex_client_proc_t) (void * ctx, GLfixed, GLfixed, GLfixed);
typedef void (gl_APIENTRY *glVertexPointer_client_proc_t) (void * ctx, GLint, GLenum, GLsizei, const GLvoid*);
typedef void (gl_APIENTRY *glViewport_client_proc_t) (void * ctx, GLint, GLint, GLsizei, GLsizei);
typedef void (gl_APIENTRY *glPointSizePointerOES_client_proc_t) (void * ctx, GLenum, GLsizei, const GLvoid*);
typedef void (gl_APIENTRY *glVertexPointerOffset_client_proc_t) (void * ctx, GLint, GLenum, GLsizei, GLuint);
typedef void (gl_APIENTRY *glColorPointerOffset_client_proc_t) (void * ctx, GLint, GLenum, GLsizei, GLuint);
typedef void (gl_APIENTRY *glNormalPointerOffset_client_proc_t) (void * ctx, GLenum, GLsizei, GLuint);
typedef void (gl_APIENTRY *glPointSizePointerOffset_client_proc_t) (void * ctx, GLenum, GLsizei, GLuint);
typedef void (gl_APIENTRY *glTexCoordPointerOffset_client_proc_t) (void * ctx, GLint, GLenum, GLsizei, GLuint);
typedef void (gl_APIENTRY *glWeightPointerOffset_client_proc_t) (void * ctx, GLint, GLenum, GLsizei, GLuint);
typedef void (gl_APIENTRY *glMatrixIndexPointerOffset_client_proc_t) (void * ctx, GLint, GLenum, GLsizei, GLuint);
typedef void (gl_APIENTRY *glVertexPointerData_client_proc_t) (void * ctx, GLint, GLenum, GLsizei, void*, GLuint);
typedef void (gl_APIENTRY *glColorPointerData_client_proc_t) (void * ctx, GLint, GLenum, GLsizei, void*, GLuint);
typedef void (gl_APIENTRY *glNormalPointerData_client_proc_t) (void * ctx, GLenum, GLsizei, void*, GLuint);
typedef void (gl_APIENTRY *glTexCoordPointerData_client_proc_t) (void * ctx, GLint, GLint, GLenum, GLsizei, void*, GLuint);
typedef void (gl_APIENTRY *glPointSizePointerData_client_proc_t) (void * ctx, GLenum, GLsizei, void*, GLuint);
typedef void (gl_APIENTRY *glWeightPointerData_client_proc_t) (void * ctx, GLint, GLenum, GLsizei, void*, GLuint);
typedef void (gl_APIENTRY *glMatrixIndexPointerData_client_proc_t) (void * ctx, GLint, GLenum, GLsizei, void*, GLuint);
typedef void (gl_APIENTRY *glDrawElementsOffset_client_proc_t) (void * ctx, GLenum, GLsizei, GLenum, GLuint);
typedef void (gl_APIENTRY *glDrawElementsData_client_proc_t) (void * ctx, GLenum, GLsizei, GLenum, void*, GLuint);
typedef void (gl_APIENTRY *glGetCompressedTextureFormats_client_proc_t) (void * ctx, int, GLint*);
typedef int (gl_APIENTRY *glFinishRoundTrip_client_proc_t) (void * ctx);
typedef void (gl_APIENTRY *glBlendEquationSeparateOES_client_proc_t) (void * ctx, GLenum, GLenum);
typedef void (gl_APIENTRY *glBlendFuncSeparateOES_client_proc_t) (void * ctx, GLenum, GLenum, GLenum, GLenum);
typedef void (gl_APIENTRY *glBlendEquationOES_client_proc_t) (void * ctx, GLenum);
typedef void (gl_APIENTRY *glDrawTexsOES_client_proc_t) (void * ctx, GLshort, GLshort, GLshort, GLshort, GLshort);
typedef void (gl_APIENTRY *glDrawTexiOES_client_proc_t) (void * ctx, GLint, GLint, GLint, GLint, GLint);
typedef void (gl_APIENTRY *glDrawTexxOES_client_proc_t) (void * ctx, GLfixed, GLfixed, GLfixed, GLfixed, GLfixed);
typedef void (gl_APIENTRY *glDrawTexsvOES_client_proc_t) (void * ctx, const GLshort*);
typedef void (gl_APIENTRY *glDrawTexivOES_client_proc_t) (void * ctx, const GLint*);
typedef void (gl_APIENTRY *glDrawTexxvOES_client_proc_t) (void * ctx, const GLfixed*);
typedef void (gl_APIENTRY *glDrawTexfOES_client_proc_t) (void * ctx, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat);
typedef void (gl_APIENTRY *glDrawTexfvOES_client_proc_t) (void * ctx, const GLfloat*);
typedef void (gl_APIENTRY *glEGLImageTargetTexture2DOES_client_proc_t) (void * ctx, GLenum, GLeglImageOES);
typedef void (gl_APIENTRY *glEGLImageTargetRenderbufferStorageOES_client_proc_t) (void * ctx, GLenum, GLeglImageOES);
typedef void (gl_APIENTRY *glAlphaFuncxOES_client_proc_t) (void * ctx, GLenum, GLclampx);
typedef void (gl_APIENTRY *glClearColorxOES_client_proc_t) (void * ctx, GLclampx, GLclampx, GLclampx, GLclampx);
typedef void (gl_APIENTRY *glClearDepthxOES_client_proc_t) (void * ctx, GLclampx);
typedef void (gl_APIENTRY *glClipPlanexOES_client_proc_t) (void * ctx, GLenum, const GLfixed*);
typedef void (gl_APIENTRY *glClipPlanexIMG_client_proc_t) (void * ctx, GLenum, const GLfixed*);
typedef void (gl_APIENTRY *glColor4xOES_client_proc_t) (void * ctx, GLfixed, GLfixed, GLfixed, GLfixed);
typedef void (gl_APIENTRY *glDepthRangexOES_client_proc_t) (void * ctx, GLclampx, GLclampx);
typedef void (gl_APIENTRY *glFogxOES_client_proc_t) (void * ctx, GLenum, GLfixed);
typedef void (gl_APIENTRY *glFogxvOES_client_proc_t) (void * ctx, GLenum, const GLfixed*);
typedef void (gl_APIENTRY *glFrustumxOES_client_proc_t) (void * ctx, GLfixed, GLfixed, GLfixed, GLfixed, GLfixed, GLfixed);
typedef void (gl_APIENTRY *glGetClipPlanexOES_client_proc_t) (void * ctx, GLenum, GLfixed*);
typedef void (gl_APIENTRY *glGetClipPlanex_client_proc_t) (void * ctx, GLenum, GLfixed*);
typedef void (gl_APIENTRY *glGetFixedvOES_client_proc_t) (void * ctx, GLenum, GLfixed*);
typedef void (gl_APIENTRY *glGetLightxvOES_client_proc_t) (void * ctx, GLenum, GLenum, GLfixed*);
typedef void (gl_APIENTRY *glGetMaterialxvOES_client_proc_t) (void * ctx, GLenum, GLenum, GLfixed*);
typedef void (gl_APIENTRY *glGetTexEnvxvOES_client_proc_t) (void * ctx, GLenum, GLenum, GLfixed*);
typedef void (gl_APIENTRY *glGetTexParameterxvOES_client_proc_t) (void * ctx, GLenum, GLenum, GLfixed*);
typedef void (gl_APIENTRY *glLightModelxOES_client_proc_t) (void * ctx, GLenum, GLfixed);
typedef void (gl_APIENTRY *glLightModelxvOES_client_proc_t) (void * ctx, GLenum, const GLfixed*);
typedef void (gl_APIENTRY *glLightxOES_client_proc_t) (void * ctx, GLenum, GLenum, GLfixed);
typedef void (gl_APIENTRY *glLightxvOES_client_proc_t) (void * ctx, GLenum, GLenum, const GLfixed*);
typedef void (gl_APIENTRY *glLineWidthxOES_client_proc_t) (void * ctx, GLfixed);
typedef void (gl_APIENTRY *glLoadMatrixxOES_client_proc_t) (void * ctx, const GLfixed*);
typedef void (gl_APIENTRY *glMaterialxOES_client_proc_t) (void * ctx, GLenum, GLenum, GLfixed);
typedef void (gl_APIENTRY *glMaterialxvOES_client_proc_t) (void * ctx, GLenum, GLenum, const GLfixed*);
typedef void (gl_APIENTRY *glMultMatrixxOES_client_proc_t) (void * ctx, const GLfixed*);
typedef void (gl_APIENTRY *glMultiTexCoord4xOES_client_proc_t) (void * ctx, GLenum, GLfixed, GLfixed, GLfixed, GLfixed);
typedef void (gl_APIENTRY *glNormal3xOES_client_proc_t) (void * ctx, GLfixed, GLfixed, GLfixed);
typedef void (gl_APIENTRY *glOrthoxOES_client_proc_t) (void * ctx, GLfixed, GLfixed, GLfixed, GLfixed, GLfixed, GLfixed);
typedef void (gl_APIENTRY *glPointParameterxOES_client_proc_t) (void * ctx, GLenum, GLfixed);
typedef void (gl_APIENTRY *glPointParameterxvOES_client_proc_t) (void * ctx, GLenum, const GLfixed*);
typedef void (gl_APIENTRY *glPointSizexOES_client_proc_t) (void * ctx, GLfixed);
typedef void (gl_APIENTRY *glPolygonOffsetxOES_client_proc_t) (void * ctx, GLfixed, GLfixed);
typedef void (gl_APIENTRY *glRotatexOES_client_proc_t) (void * ctx, GLfixed, GLfixed, GLfixed, GLfixed);
typedef void (gl_APIENTRY *glSampleCoveragexOES_client_proc_t) (void * ctx, GLclampx, GLboolean);
typedef void (gl_APIENTRY *glScalexOES_client_proc_t) (void * ctx, GLfixed, GLfixed, GLfixed);
typedef void (gl_APIENTRY *glTexEnvxOES_client_proc_t) (void * ctx, GLenum, GLenum, GLfixed);
typedef void (gl_APIENTRY *glTexEnvxvOES_client_proc_t) (void * ctx, GLenum, GLenum, const GLfixed*);
typedef void (gl_APIENTRY *glTexParameterxOES_client_proc_t) (void * ctx, GLenum, GLenum, GLfixed);
typedef void (gl_APIENTRY *glTexParameterxvOES_client_proc_t) (void * ctx, GLenum, GLenum, const GLfixed*);
typedef void (gl_APIENTRY *glTranslatexOES_client_proc_t) (void * ctx, GLfixed, GLfixed, GLfixed);
typedef GLboolean (gl_APIENTRY *glIsRenderbufferOES_client_proc_t) (void * ctx, GLuint);
typedef void (gl_APIENTRY *glBindRenderbufferOES_client_proc_t) (void * ctx, GLenum, GLuint);
typedef void (gl_APIENTRY *glDeleteRenderbuffersOES_client_proc_t) (void * ctx, GLsizei, const GLuint*);
typedef void (gl_APIENTRY *glGenRenderbuffersOES_client_proc_t) (void * ctx, GLsizei, GLuint*);
typedef void (gl_APIENTRY *glRenderbufferStorageOES_client_proc_t) (void * ctx, GLenum, GLenum, GLsizei, GLsizei);
typedef void (gl_APIENTRY *glGetRenderbufferParameterivOES_client_proc_t) (void * ctx, GLenum, GLenum, GLint*);
typedef GLboolean (gl_APIENTRY *glIsFramebufferOES_client_proc_t) (void * ctx, GLuint);
typedef void (gl_APIENTRY *glBindFramebufferOES_client_proc_t) (void * ctx, GLenum, GLuint);
typedef void (gl_APIENTRY *glDeleteFramebuffersOES_client_proc_t) (void * ctx, GLsizei, const GLuint*);
typedef void (gl_APIENTRY *glGenFramebuffersOES_client_proc_t) (void * ctx, GLsizei, GLuint*);
typedef GLenum (gl_APIENTRY *glCheckFramebufferStatusOES_client_proc_t) (void * ctx, GLenum);
typedef void (gl_APIENTRY *glFramebufferRenderbufferOES_client_proc_t) (void * ctx, GLenum, GLenum, GLenum, GLuint);
typedef void (gl_APIENTRY *glFramebufferTexture2DOES_client_proc_t) (void * ctx, GLenum, GLenum, GLenum, GLuint, GLint);
typedef void (gl_APIENTRY *glGetFramebufferAttachmentParameterivOES_client_proc_t) (void * ctx, GLenum, GLenum, GLenum, GLint*);
typedef void (gl_APIENTRY *glGenerateMipmapOES_client_proc_t) (void * ctx, GLenum);
typedef void* (gl_APIENTRY *glMapBufferOES_client_proc_t) (void * ctx, GLenum, GLenum);
typedef GLboolean (gl_APIENTRY *glUnmapBufferOES_client_proc_t) (void * ctx, GLenum);
typedef void (gl_APIENTRY *glGetBufferPointervOES_client_proc_t) (void * ctx, GLenum, GLenum, GLvoid**);
typedef void (gl_APIENTRY *glCurrentPaletteMatrixOES_client_proc_t) (void * ctx, GLuint);
typedef void (gl_APIENTRY *glLoadPaletteFromModelViewMatrixOES_client_proc_t) (void * ctx);
typedef void (gl_APIENTRY *glMatrixIndexPointerOES_client_proc_t) (void * ctx, GLint, GLenum, GLsizei, const GLvoid*);
typedef void (gl_APIENTRY *glWeightPointerOES_client_proc_t) (void * ctx, GLint, GLenum, GLsizei, const GLvoid*);
typedef GLbitfield (gl_APIENTRY *glQueryMatrixxOES_client_proc_t) (void * ctx, GLfixed*, GLint*);
typedef void (gl_APIENTRY *glDepthRangefOES_client_proc_t) (void * ctx, GLclampf, GLclampf);
typedef void (gl_APIENTRY *glFrustumfOES_client_proc_t) (void * ctx, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat);
typedef void (gl_APIENTRY *glOrthofOES_client_proc_t) (void * ctx, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat);
typedef void (gl_APIENTRY *glClipPlanefOES_client_proc_t) (void * ctx, GLenum, const GLfloat*);
typedef void (gl_APIENTRY *glClipPlanefIMG_client_proc_t) (void * ctx, GLenum, const GLfloat*);
typedef void (gl_APIENTRY *glGetClipPlanefOES_client_proc_t) (void * ctx, GLenum, GLfloat*);
typedef void (gl_APIENTRY *glClearDepthfOES_client_proc_t) (void * ctx, GLclampf);
typedef void (gl_APIENTRY *glTexGenfOES_client_proc_t) (void * ctx, GLenum, GLenum, GLfloat);
typedef void (gl_APIENTRY *glTexGenfvOES_client_proc_t) (void * ctx, GLenum, GLenum, const GLfloat*);
typedef void (gl_APIENTRY *glTexGeniOES_client_proc_t) (void * ctx, GLenum, GLenum, GLint);
typedef void (gl_APIENTRY *glTexGenivOES_client_proc_t) (void * ctx, GLenum, GLenum, const GLint*);
typedef void (gl_APIENTRY *glTexGenxOES_client_proc_t) (void * ctx, GLenum, GLenum, GLfixed);
typedef void (gl_APIENTRY *glTexGenxvOES_client_proc_t) (void * ctx, GLenum, GLenum, const GLfixed*);
typedef void (gl_APIENTRY *glGetTexGenfvOES_client_proc_t) (void * ctx, GLenum, GLenum, GLfloat*);
typedef void (gl_APIENTRY *glGetTexGenivOES_client_proc_t) (void * ctx, GLenum, GLenum, GLint*);
typedef void (gl_APIENTRY *glGetTexGenxvOES_client_proc_t) (void * ctx, GLenum, GLenum, GLfixed*);
typedef void (gl_APIENTRY *glBindVertexArrayOES_client_proc_t) (void * ctx, GLuint);
typedef void (gl_APIENTRY *glDeleteVertexArraysOES_client_proc_t) (void * ctx, GLsizei, const GLuint*);
typedef void (gl_APIENTRY *glGenVertexArraysOES_client_proc_t) (void * ctx, GLsizei, GLuint*);
typedef GLboolean (gl_APIENTRY *glIsVertexArrayOES_client_proc_t) (void * ctx, GLuint);
typedef void (gl_APIENTRY *glDiscardFramebufferEXT_client_proc_t) (void * ctx, GLenum, GLsizei, const GLenum*);
typedef void (gl_APIENTRY *glMultiDrawArraysEXT_client_proc_t) (void * ctx, GLenum, const GLint*, const GLsizei*, GLsizei);
typedef void (gl_APIENTRY *glMultiDrawElementsEXT_client_proc_t) (void * ctx, GLenum, const GLsizei*, GLenum, const GLvoid* const*, GLsizei);
typedef void (gl_APIENTRY *glMultiDrawArraysSUN_client_proc_t) (void * ctx, GLenum, GLint*, GLsizei*, GLsizei);
typedef void (gl_APIENTRY *glMultiDrawElementsSUN_client_proc_t) (void * ctx, GLenum, const GLsizei*, GLenum, const GLvoid**, GLsizei);
typedef void (gl_APIENTRY *glRenderbufferStorageMultisampleIMG_client_proc_t) (void * ctx, GLenum, GLsizei, GLenum, GLsizei, GLsizei);
typedef void (gl_APIENTRY *glFramebufferTexture2DMultisampleIMG_client_proc_t) (void * ctx, GLenum, GLenum, GLenum, GLuint, GLint, GLsizei);
typedef void (gl_APIENTRY *glDeleteFencesNV_client_proc_t) (void * ctx, GLsizei, const GLuint*);
typedef void (gl_APIENTRY *glGenFencesNV_client_proc_t) (void * ctx, GLsizei, GLuint*);
typedef GLboolean (gl_APIENTRY *glIsFenceNV_client_proc_t) (void * ctx, GLuint);
typedef GLboolean (gl_APIENTRY *glTestFenceNV_client_proc_t) (void * ctx, GLuint);
typedef void (gl_APIENTRY *glGetFenceivNV_client_proc_t) (void * ctx, GLuint, GLenum, GLint*);
typedef void (gl_APIENTRY *glFinishFenceNV_client_proc_t) (void * ctx, GLuint);
typedef void (gl_APIENTRY *glSetFenceNV_client_proc_t) (void * ctx, GLuint, GLenum);
typedef void (gl_APIENTRY *glGetDriverControlsQCOM_client_proc_t) (void * ctx, GLint*, GLsizei, GLuint*);
typedef void (gl_APIENTRY *glGetDriverControlStringQCOM_client_proc_t) (void * ctx, GLuint, GLsizei, GLsizei*, GLchar*);
typedef void (gl_APIENTRY *glEnableDriverControlQCOM_client_proc_t) (void * ctx, GLuint);
typedef void (gl_APIENTRY *glDisableDriverControlQCOM_client_proc_t) (void * ctx, GLuint);
typedef void (gl_APIENTRY *glExtGetTexturesQCOM_client_proc_t) (void * ctx, GLuint*, GLint, GLint*);
typedef void (gl_APIENTRY *glExtGetBuffersQCOM_client_proc_t) (void * ctx, GLuint*, GLint, GLint*);
typedef void (gl_APIENTRY *glExtGetRenderbuffersQCOM_client_proc_t) (void * ctx, GLuint*, GLint, GLint*);
typedef void (gl_APIENTRY *glExtGetFramebuffersQCOM_client_proc_t) (void * ctx, GLuint*, GLint, GLint*);
typedef void (gl_APIENTRY *glExtGetTexLevelParameterivQCOM_client_proc_t) (void * ctx, GLuint, GLenum, GLint, GLenum, GLint*);
typedef void (gl_APIENTRY *glExtTexObjectStateOverrideiQCOM_client_proc_t) (void * ctx, GLenum, GLenum, GLint);
typedef void (gl_APIENTRY *glExtGetTexSubImageQCOM_client_proc_t) (void * ctx, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, GLvoid*);
typedef void (gl_APIENTRY *glExtGetBufferPointervQCOM_client_proc_t) (void * ctx, GLenum, GLvoid**);
typedef void (gl_APIENTRY *glExtGetShadersQCOM_client_proc_t) (void * ctx, GLuint*, GLint, GLint*);
typedef void (gl_APIENTRY *glExtGetProgramsQCOM_client_proc_t) (void * ctx, GLuint*, GLint, GLint*);
typedef GLboolean (gl_APIENTRY *glExtIsProgramBinaryQCOM_client_proc_t) (void * ctx, GLuint);
typedef void (gl_APIENTRY *glExtGetProgramBinarySourceQCOM_client_proc_t) (void * ctx, GLuint, GLenum, GLchar*, GLint*);
typedef void (gl_APIENTRY *glStartTilingQCOM_client_proc_t) (void * ctx, GLuint, GLuint, GLuint, GLuint, GLbitfield);
typedef void (gl_APIENTRY *glEndTilingQCOM_client_proc_t) (void * ctx, GLbitfield);


#endif
