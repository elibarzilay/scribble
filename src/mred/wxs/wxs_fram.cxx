/* DO NOT EDIT THIS FILE. */
/* This file was generated by xctocc from "wxs_fram.xc". */


#if defined(_MSC_VER)
# include "wx.h"
#endif

#include "wx_frame.h"
#include "wx_gdi.h"




#ifdef wx_x
# define BM_SELECTED(map) ((map)->selectedTo)
#endif
#if defined(wx_mac) || defined(wx_msw)
# define BM_SELECTED(map) ((map)->selectedInto)
#endif
# define BM_IN_USE(map) ((map)->selectedIntoDC)





#include "wxscheme.h"
#include "wxs_fram.h"

#ifdef MZ_PRECISE_GC
START_XFORM_SKIP;
#endif

#ifdef wx_xt
#define HAS_GET_MENU_BAR 1
#define GET_THE_MENU_BAR(f) (f)->GetMenuBar()
#else
#define HAS_GET_MENU_BAR 0
#define GET_THE_MENU_BAR(f) (f)->wx_menu_bar
#endif

#ifdef wx_motif
#define wxALLOW_AUTO_RESIZE wxPUSH_PIN
#else
#define wxALLOW_AUTO_RESIZE 0
#endif

#define NO_GET_MENU_BAR !HAS_GET_MENU_BAR



extern void *wxsCheckEventspace(char *);

static Scheme_Object *frameStyle_wxNO_CAPTION_sym = NULL;
static Scheme_Object *frameStyle_wxMDI_PARENT_sym = NULL;
static Scheme_Object *frameStyle_wxMDI_CHILD_sym = NULL;
static Scheme_Object *frameStyle_wxNO_SYSTEM_MENU_sym = NULL;
static Scheme_Object *frameStyle_wxNO_RESIZE_BORDER_sym = NULL;

static void init_symset_frameStyle(void) {
  REMEMBER_VAR_STACK();
  wxREGGLOB(frameStyle_wxNO_CAPTION_sym);
  frameStyle_wxNO_CAPTION_sym = WITH_REMEMBERED_STACK(scheme_intern_symbol("no-caption"));
  wxREGGLOB(frameStyle_wxMDI_PARENT_sym);
  frameStyle_wxMDI_PARENT_sym = WITH_REMEMBERED_STACK(scheme_intern_symbol("mdi-parent"));
  wxREGGLOB(frameStyle_wxMDI_CHILD_sym);
  frameStyle_wxMDI_CHILD_sym = WITH_REMEMBERED_STACK(scheme_intern_symbol("mdi-child"));
  wxREGGLOB(frameStyle_wxNO_SYSTEM_MENU_sym);
  frameStyle_wxNO_SYSTEM_MENU_sym = WITH_REMEMBERED_STACK(scheme_intern_symbol("no-system-menu"));
  wxREGGLOB(frameStyle_wxNO_RESIZE_BORDER_sym);
  frameStyle_wxNO_RESIZE_BORDER_sym = WITH_REMEMBERED_STACK(scheme_intern_symbol("no-resize-border"));
}

static int unbundle_symset_frameStyle(Scheme_Object *v, const char *where) {
  SETUP_VAR_STACK(1);
  VAR_STACK_PUSH(0, v);
  if (!frameStyle_wxNO_RESIZE_BORDER_sym) WITH_VAR_STACK(init_symset_frameStyle());
  Scheme_Object *i INIT_NULLED_OUT, *l = v;
  long result = 0;
  while (SCHEME_PAIRP(l)) {
  i = SCHEME_CAR(l);
  if (0) { }
  else if (i == frameStyle_wxNO_CAPTION_sym) { result = result | wxNO_CAPTION; }
  else if (i == frameStyle_wxMDI_PARENT_sym) { result = result | wxMDI_PARENT; }
  else if (i == frameStyle_wxMDI_CHILD_sym) { result = result | wxMDI_CHILD; }
  else if (i == frameStyle_wxNO_SYSTEM_MENU_sym) { result = result | wxNO_SYSTEM_MENU; }
  else if (i == frameStyle_wxNO_RESIZE_BORDER_sym) { result = result | wxNO_RESIZE_BORDER; }
  else { break; } 
  l = SCHEME_CDR(l);
  }
  if (SCHEME_NULLP(l)) return result;
  if (where) WITH_VAR_STACK(scheme_wrong_type(where, "frameStyle symbol list", -1, 0, &v));
  return 0;
}


static Scheme_Object *iconKind_0_sym = NULL;
static Scheme_Object *iconKind_1_sym = NULL;
static Scheme_Object *iconKind_2_sym = NULL;

static void init_symset_iconKind(void) {
  REMEMBER_VAR_STACK();
  wxREGGLOB(iconKind_0_sym);
  iconKind_0_sym = WITH_REMEMBERED_STACK(scheme_intern_symbol("both"));
  wxREGGLOB(iconKind_1_sym);
  iconKind_1_sym = WITH_REMEMBERED_STACK(scheme_intern_symbol("small"));
  wxREGGLOB(iconKind_2_sym);
  iconKind_2_sym = WITH_REMEMBERED_STACK(scheme_intern_symbol("large"));
}

static int unbundle_symset_iconKind(Scheme_Object *v, const char *where) {
  SETUP_VAR_STACK(1);
  VAR_STACK_PUSH(0, v);
  if (!iconKind_2_sym) WITH_VAR_STACK(init_symset_iconKind());
  if (0) { }
  else if (v == iconKind_0_sym) { return 0; }
  else if (v == iconKind_1_sym) { return 1; }
  else if (v == iconKind_2_sym) { return 2; }
  if (where) WITH_VAR_STACK(scheme_wrong_type(where, "iconKind symbol", -1, 0, &v));
  return 0;
}


#ifdef wx_msw
# define XTMAC_UNUSED(x) x
#else
# define XTMAC_UNUSED(x) /**/
#endif

static void frameMenu(wxFrame *XTMAC_UNUSED(f))
{
#ifdef wx_msw
  f->SystemMenu();
#endif
}















class os_wxFrame : public wxFrame {
 public:

  os_wxFrame CONSTRUCTOR_ARGS((class wxFrame* x0, string x1, int x2 = -1, int x3 = -1, int x4 = -1, int x5 = -1, int x6 = 0, string x7 = "frame"));
  ~os_wxFrame();
  void OnDropFile(pathname x0);
  Bool PreOnEvent(class wxWindow* x0, class wxMouseEvent* x1);
  Bool PreOnChar(class wxWindow* x0, class wxKeyEvent* x1);
  void OnSize(int x0, int x1);
  void OnSetFocus();
  void OnKillFocus();
  void OnMenuClick();
  void OnMenuCommand(ExactLong x0);
  Bool OnClose();
  void OnActivate(Bool x0);
#ifdef MZ_PRECISE_GC
  void gcMark();
  void gcFixup();
#endif
};

#ifdef MZ_PRECISE_GC
void os_wxFrame::gcMark() {
  wxFrame::gcMark();
}
void os_wxFrame::gcFixup() {
  wxFrame::gcFixup();
}
#endif

static Scheme_Object *os_wxFrame_class;

os_wxFrame::os_wxFrame CONSTRUCTOR_ARGS((class wxFrame* x0, string x1, int x2, int x3, int x4, int x5, int x6, string x7))
CONSTRUCTOR_INIT(: wxFrame(x0, x1, x2, x3, x4, x5, x6, x7))
{
}

os_wxFrame::~os_wxFrame()
{
    objscheme_destroy(this, (Scheme_Object *)__gc_external);
}

void os_wxFrame::OnDropFile(pathname x0)
{
  Scheme_Object *p[1] INIT_NULLED_ARRAY({ NULLED_OUT });
  Scheme_Object *v;
  Scheme_Object *method INIT_NULLED_OUT;
#ifdef MZ_PRECISE_GC
  os_wxFrame *sElF = this;
#endif
  static void *mcache = 0;

  SETUP_VAR_STACK(6);
  VAR_STACK_PUSH(0, method);
  VAR_STACK_PUSH(1, sElF);
  VAR_STACK_PUSH_ARRAY(2, p, 1);
  VAR_STACK_PUSH(5, x0);
  SET_VAR_STACK();

  method = objscheme_find_method((Scheme_Object *)__gc_external, os_wxFrame_class, "on-drop-file", &mcache);
  if (!method || OBJSCHEME_PRIM_METHOD(method)) {
    SET_VAR_STACK();
    ASSELF wxFrame::OnDropFile(x0);
  } else {
  mz_jmp_buf savebuf;
  p[0] = WITH_VAR_STACK(objscheme_bundle_pathname((char *)x0));
  COPY_JMPBUF(savebuf, scheme_error_buf); if (scheme_setjmp(scheme_error_buf)) { COPY_JMPBUF(scheme_error_buf, savebuf); return; }

  v = WITH_VAR_STACK(scheme_apply(method, 1, p));
  COPY_JMPBUF(scheme_error_buf, savebuf);
  
  }
}

Bool os_wxFrame::PreOnEvent(class wxWindow* x0, class wxMouseEvent* x1)
{
  Scheme_Object *p[2] INIT_NULLED_ARRAY({ NULLED_OUT INA_comma NULLED_OUT });
  Scheme_Object *v;
  Scheme_Object *method INIT_NULLED_OUT;
#ifdef MZ_PRECISE_GC
  os_wxFrame *sElF = this;
#endif
  static void *mcache = 0;

  SETUP_VAR_STACK(7);
  VAR_STACK_PUSH(0, method);
  VAR_STACK_PUSH(1, sElF);
  VAR_STACK_PUSH_ARRAY(2, p, 2);
  VAR_STACK_PUSH(5, x0);
  VAR_STACK_PUSH(6, x1);
  SET_VAR_STACK();

  method = objscheme_find_method((Scheme_Object *)__gc_external, os_wxFrame_class, "pre-on-event", &mcache);
  if (!method || OBJSCHEME_PRIM_METHOD(method)) {
    SET_VAR_STACK();
    return FALSE;
  } else {
  mz_jmp_buf savebuf;
  p[0] = WITH_VAR_STACK(objscheme_bundle_wxWindow(x0));
  p[1] = WITH_VAR_STACK(objscheme_bundle_wxMouseEvent(x1));
  COPY_JMPBUF(savebuf, scheme_error_buf); if (scheme_setjmp(scheme_error_buf)) { COPY_JMPBUF(scheme_error_buf, savebuf); return 1; }

  v = WITH_VAR_STACK(scheme_apply(method, 2, p));
  COPY_JMPBUF(scheme_error_buf, savebuf);
  
  return WITH_VAR_STACK(objscheme_unbundle_bool(v, "pre-on-event in frame%"", extracting return value"));
  }
}

Bool os_wxFrame::PreOnChar(class wxWindow* x0, class wxKeyEvent* x1)
{
  Scheme_Object *p[2] INIT_NULLED_ARRAY({ NULLED_OUT INA_comma NULLED_OUT });
  Scheme_Object *v;
  Scheme_Object *method INIT_NULLED_OUT;
#ifdef MZ_PRECISE_GC
  os_wxFrame *sElF = this;
#endif
  static void *mcache = 0;

  SETUP_VAR_STACK(7);
  VAR_STACK_PUSH(0, method);
  VAR_STACK_PUSH(1, sElF);
  VAR_STACK_PUSH_ARRAY(2, p, 2);
  VAR_STACK_PUSH(5, x0);
  VAR_STACK_PUSH(6, x1);
  SET_VAR_STACK();

  method = objscheme_find_method((Scheme_Object *)__gc_external, os_wxFrame_class, "pre-on-char", &mcache);
  if (!method || OBJSCHEME_PRIM_METHOD(method)) {
    SET_VAR_STACK();
    return FALSE;
  } else {
  mz_jmp_buf savebuf;
  p[0] = WITH_VAR_STACK(objscheme_bundle_wxWindow(x0));
  p[1] = WITH_VAR_STACK(objscheme_bundle_wxKeyEvent(x1));
  COPY_JMPBUF(savebuf, scheme_error_buf); if (scheme_setjmp(scheme_error_buf)) { COPY_JMPBUF(scheme_error_buf, savebuf); return 1; }

  v = WITH_VAR_STACK(scheme_apply(method, 2, p));
  COPY_JMPBUF(scheme_error_buf, savebuf);
  
  return WITH_VAR_STACK(objscheme_unbundle_bool(v, "pre-on-char in frame%"", extracting return value"));
  }
}

void os_wxFrame::OnSize(int x0, int x1)
{
  Scheme_Object *p[2] INIT_NULLED_ARRAY({ NULLED_OUT INA_comma NULLED_OUT });
  Scheme_Object *v;
  Scheme_Object *method INIT_NULLED_OUT;
#ifdef MZ_PRECISE_GC
  os_wxFrame *sElF = this;
#endif
  static void *mcache = 0;

  SETUP_VAR_STACK(5);
  VAR_STACK_PUSH(0, method);
  VAR_STACK_PUSH(1, sElF);
  VAR_STACK_PUSH_ARRAY(2, p, 2);
  SET_VAR_STACK();

  method = objscheme_find_method((Scheme_Object *)__gc_external, os_wxFrame_class, "on-size", &mcache);
  if (!method || OBJSCHEME_PRIM_METHOD(method)) {
    SET_VAR_STACK();
    ASSELF wxFrame::OnSize(x0, x1);
  } else {
  
  p[0] = scheme_make_integer(x0);
  p[1] = scheme_make_integer(x1);
  

  v = WITH_VAR_STACK(scheme_apply(method, 2, p));
  
  
  }
}

void os_wxFrame::OnSetFocus()
{
  Scheme_Object **p = NULL;
  Scheme_Object *v;
  Scheme_Object *method INIT_NULLED_OUT;
#ifdef MZ_PRECISE_GC
  os_wxFrame *sElF = this;
#endif
  static void *mcache = 0;

  SETUP_VAR_STACK(2);
  VAR_STACK_PUSH(0, method);
  VAR_STACK_PUSH(1, sElF);
  SET_VAR_STACK();

  method = objscheme_find_method((Scheme_Object *)__gc_external, os_wxFrame_class, "on-set-focus", &mcache);
  if (!method || OBJSCHEME_PRIM_METHOD(method)) {
    SET_VAR_STACK();
    ASSELF wxFrame::OnSetFocus();
  } else {
  mz_jmp_buf savebuf;
  COPY_JMPBUF(savebuf, scheme_error_buf); if (scheme_setjmp(scheme_error_buf)) { COPY_JMPBUF(scheme_error_buf, savebuf); return; }

  v = WITH_VAR_STACK(scheme_apply(method, 0, p));
  COPY_JMPBUF(scheme_error_buf, savebuf);
  
  }
}

void os_wxFrame::OnKillFocus()
{
  Scheme_Object **p = NULL;
  Scheme_Object *v;
  Scheme_Object *method INIT_NULLED_OUT;
#ifdef MZ_PRECISE_GC
  os_wxFrame *sElF = this;
#endif
  static void *mcache = 0;

  SETUP_VAR_STACK(2);
  VAR_STACK_PUSH(0, method);
  VAR_STACK_PUSH(1, sElF);
  SET_VAR_STACK();

  method = objscheme_find_method((Scheme_Object *)__gc_external, os_wxFrame_class, "on-kill-focus", &mcache);
  if (!method || OBJSCHEME_PRIM_METHOD(method)) {
    SET_VAR_STACK();
    ASSELF wxFrame::OnKillFocus();
  } else {
  mz_jmp_buf savebuf;
  COPY_JMPBUF(savebuf, scheme_error_buf); if (scheme_setjmp(scheme_error_buf)) { COPY_JMPBUF(scheme_error_buf, savebuf); return; }

  v = WITH_VAR_STACK(scheme_apply(method, 0, p));
  COPY_JMPBUF(scheme_error_buf, savebuf);
  
  }
}

void os_wxFrame::OnMenuClick()
{
  Scheme_Object **p = NULL;
  Scheme_Object *v;
  Scheme_Object *method INIT_NULLED_OUT;
#ifdef MZ_PRECISE_GC
  os_wxFrame *sElF = this;
#endif
  static void *mcache = 0;

  SETUP_VAR_STACK(2);
  VAR_STACK_PUSH(0, method);
  VAR_STACK_PUSH(1, sElF);
  SET_VAR_STACK();

  method = objscheme_find_method((Scheme_Object *)__gc_external, os_wxFrame_class, "on-menu-click", &mcache);
  if (!method || OBJSCHEME_PRIM_METHOD(method)) {
    SET_VAR_STACK();
    ASSELF wxFrame::OnMenuClick();
  } else {
  
  

  v = WITH_VAR_STACK(scheme_apply(method, 0, p));
  
  
  }
}

void os_wxFrame::OnMenuCommand(ExactLong x0)
{
  Scheme_Object *p[1] INIT_NULLED_ARRAY({ NULLED_OUT });
  Scheme_Object *v;
  Scheme_Object *method INIT_NULLED_OUT;
#ifdef MZ_PRECISE_GC
  os_wxFrame *sElF = this;
#endif
  static void *mcache = 0;

  SETUP_VAR_STACK(5);
  VAR_STACK_PUSH(0, method);
  VAR_STACK_PUSH(1, sElF);
  VAR_STACK_PUSH_ARRAY(2, p, 1);
  SET_VAR_STACK();

  method = objscheme_find_method((Scheme_Object *)__gc_external, os_wxFrame_class, "on-menu-command", &mcache);
  if (!method || OBJSCHEME_PRIM_METHOD(method)) {
    SET_VAR_STACK();
    ASSELF wxFrame::OnMenuCommand(x0);
  } else {
  
  p[0] = WITH_VAR_STACK(scheme_make_integer_value(x0));
  

  v = WITH_VAR_STACK(scheme_apply(method, 1, p));
  
  
  }
}

Bool os_wxFrame::OnClose()
{
  Scheme_Object **p = NULL;
  Scheme_Object *v;
  Scheme_Object *method INIT_NULLED_OUT;
#ifdef MZ_PRECISE_GC
  os_wxFrame *sElF = this;
#endif
  static void *mcache = 0;

  SETUP_VAR_STACK(2);
  VAR_STACK_PUSH(0, method);
  VAR_STACK_PUSH(1, sElF);
  SET_VAR_STACK();

  method = objscheme_find_method((Scheme_Object *)__gc_external, os_wxFrame_class, "on-close", &mcache);
  if (!method || OBJSCHEME_PRIM_METHOD(method)) {
    SET_VAR_STACK();
    return ASSELF wxFrame::OnClose();
  } else {
  mz_jmp_buf savebuf;
  COPY_JMPBUF(savebuf, scheme_error_buf); if (scheme_setjmp(scheme_error_buf)) { COPY_JMPBUF(scheme_error_buf, savebuf); return 0; }

  v = WITH_VAR_STACK(scheme_apply(method, 0, p));
  COPY_JMPBUF(scheme_error_buf, savebuf);
  
  return WITH_VAR_STACK(objscheme_unbundle_bool(v, "on-close in frame%"", extracting return value"));
  }
}

void os_wxFrame::OnActivate(Bool x0)
{
  Scheme_Object *p[1] INIT_NULLED_ARRAY({ NULLED_OUT });
  Scheme_Object *v;
  Scheme_Object *method INIT_NULLED_OUT;
#ifdef MZ_PRECISE_GC
  os_wxFrame *sElF = this;
#endif
  static void *mcache = 0;

  SETUP_VAR_STACK(5);
  VAR_STACK_PUSH(0, method);
  VAR_STACK_PUSH(1, sElF);
  VAR_STACK_PUSH_ARRAY(2, p, 1);
  SET_VAR_STACK();

  method = objscheme_find_method((Scheme_Object *)__gc_external, os_wxFrame_class, "on-activate", &mcache);
  if (!method || OBJSCHEME_PRIM_METHOD(method)) {
    SET_VAR_STACK();
    ASSELF wxFrame::OnActivate(x0);
  } else {
  mz_jmp_buf savebuf;
  p[0] = (x0 ? scheme_true : scheme_false);
  COPY_JMPBUF(savebuf, scheme_error_buf); if (scheme_setjmp(scheme_error_buf)) { COPY_JMPBUF(scheme_error_buf, savebuf); return; }

  v = WITH_VAR_STACK(scheme_apply(method, 1, p));
  COPY_JMPBUF(scheme_error_buf, savebuf);
  
  }
}

static Scheme_Object *os_wxFrameOnDropFile(Scheme_Object *obj, int n,  Scheme_Object *p[])
{
  WXS_USE_ARGUMENT(n) WXS_USE_ARGUMENT(p)
  REMEMBER_VAR_STACK();
  objscheme_check_valid(obj);
  pathname x0 INIT_NULLED_OUT;

  SETUP_VAR_STACK_REMEMBERED(3);
  VAR_STACK_PUSH(0, p);
  VAR_STACK_PUSH(1, obj);
  VAR_STACK_PUSH(2, x0);

  
  x0 = (pathname)WITH_VAR_STACK(objscheme_unbundle_pathname(p[0], "on-drop-file in frame%"));

  
  if (((Scheme_Class_Object *)obj)->primflag)
    WITH_VAR_STACK(((os_wxFrame *)((Scheme_Class_Object *)obj)->primdata)->wxFrame::OnDropFile(x0));
  else
    WITH_VAR_STACK(((wxFrame *)((Scheme_Class_Object *)obj)->primdata)->OnDropFile(x0));

  
  
  return scheme_void;
}

static Scheme_Object *os_wxFramePreOnEvent(Scheme_Object *obj, int n,  Scheme_Object *p[])
{
  WXS_USE_ARGUMENT(n) WXS_USE_ARGUMENT(p)
  REMEMBER_VAR_STACK();
  Bool r;
  objscheme_check_valid(obj);
  class wxWindow* x0 INIT_NULLED_OUT;
  class wxMouseEvent* x1 INIT_NULLED_OUT;

  SETUP_VAR_STACK_REMEMBERED(4);
  VAR_STACK_PUSH(0, p);
  VAR_STACK_PUSH(1, obj);
  VAR_STACK_PUSH(2, x0);
  VAR_STACK_PUSH(3, x1);

  
  x0 = WITH_VAR_STACK(objscheme_unbundle_wxWindow(p[0], "pre-on-event in frame%", 0));
  x1 = WITH_VAR_STACK(objscheme_unbundle_wxMouseEvent(p[1], "pre-on-event in frame%", 0));

  
  if (((Scheme_Class_Object *)obj)->primflag)
    r = WITH_VAR_STACK(((os_wxFrame *)((Scheme_Class_Object *)obj)->primdata)-> wxWindow::PreOnEvent(x0, x1));
  else
    r = WITH_VAR_STACK(((wxFrame *)((Scheme_Class_Object *)obj)->primdata)->PreOnEvent(x0, x1));

  
  
  return (r ? scheme_true : scheme_false);
}

static Scheme_Object *os_wxFramePreOnChar(Scheme_Object *obj, int n,  Scheme_Object *p[])
{
  WXS_USE_ARGUMENT(n) WXS_USE_ARGUMENT(p)
  REMEMBER_VAR_STACK();
  Bool r;
  objscheme_check_valid(obj);
  class wxWindow* x0 INIT_NULLED_OUT;
  class wxKeyEvent* x1 INIT_NULLED_OUT;

  SETUP_VAR_STACK_REMEMBERED(4);
  VAR_STACK_PUSH(0, p);
  VAR_STACK_PUSH(1, obj);
  VAR_STACK_PUSH(2, x0);
  VAR_STACK_PUSH(3, x1);

  
  x0 = WITH_VAR_STACK(objscheme_unbundle_wxWindow(p[0], "pre-on-char in frame%", 0));
  x1 = WITH_VAR_STACK(objscheme_unbundle_wxKeyEvent(p[1], "pre-on-char in frame%", 0));

  
  if (((Scheme_Class_Object *)obj)->primflag)
    r = WITH_VAR_STACK(((os_wxFrame *)((Scheme_Class_Object *)obj)->primdata)-> wxWindow::PreOnChar(x0, x1));
  else
    r = WITH_VAR_STACK(((wxFrame *)((Scheme_Class_Object *)obj)->primdata)->PreOnChar(x0, x1));

  
  
  return (r ? scheme_true : scheme_false);
}

static Scheme_Object *os_wxFrameOnSize(Scheme_Object *obj, int n,  Scheme_Object *p[])
{
  WXS_USE_ARGUMENT(n) WXS_USE_ARGUMENT(p)
  REMEMBER_VAR_STACK();
  objscheme_check_valid(obj);
  int x0;
  int x1;

  SETUP_VAR_STACK_REMEMBERED(2);
  VAR_STACK_PUSH(0, p);
  VAR_STACK_PUSH(1, obj);

  
  x0 = WITH_VAR_STACK(objscheme_unbundle_integer(p[0], "on-size in frame%"));
  x1 = WITH_VAR_STACK(objscheme_unbundle_integer(p[1], "on-size in frame%"));

  
  if (((Scheme_Class_Object *)obj)->primflag)
    WITH_VAR_STACK(((os_wxFrame *)((Scheme_Class_Object *)obj)->primdata)->wxFrame::OnSize(x0, x1));
  else
    WITH_VAR_STACK(((wxFrame *)((Scheme_Class_Object *)obj)->primdata)->OnSize(x0, x1));

  
  
  return scheme_void;
}

static Scheme_Object *os_wxFrameOnSetFocus(Scheme_Object *obj, int n,  Scheme_Object *p[])
{
  WXS_USE_ARGUMENT(n) WXS_USE_ARGUMENT(p)
  REMEMBER_VAR_STACK();
  objscheme_check_valid(obj);

  SETUP_VAR_STACK_REMEMBERED(2);
  VAR_STACK_PUSH(0, p);
  VAR_STACK_PUSH(1, obj);

  

  
  if (((Scheme_Class_Object *)obj)->primflag)
    WITH_VAR_STACK(((os_wxFrame *)((Scheme_Class_Object *)obj)->primdata)->wxFrame::OnSetFocus());
  else
    WITH_VAR_STACK(((wxFrame *)((Scheme_Class_Object *)obj)->primdata)->OnSetFocus());

  
  
  return scheme_void;
}

static Scheme_Object *os_wxFrameOnKillFocus(Scheme_Object *obj, int n,  Scheme_Object *p[])
{
  WXS_USE_ARGUMENT(n) WXS_USE_ARGUMENT(p)
  REMEMBER_VAR_STACK();
  objscheme_check_valid(obj);

  SETUP_VAR_STACK_REMEMBERED(2);
  VAR_STACK_PUSH(0, p);
  VAR_STACK_PUSH(1, obj);

  

  
  if (((Scheme_Class_Object *)obj)->primflag)
    WITH_VAR_STACK(((os_wxFrame *)((Scheme_Class_Object *)obj)->primdata)->wxFrame::OnKillFocus());
  else
    WITH_VAR_STACK(((wxFrame *)((Scheme_Class_Object *)obj)->primdata)->OnKillFocus());

  
  
  return scheme_void;
}

static Scheme_Object *os_wxFrameOnMenuClick(Scheme_Object *obj, int n,  Scheme_Object *p[])
{
  WXS_USE_ARGUMENT(n) WXS_USE_ARGUMENT(p)
  REMEMBER_VAR_STACK();
  objscheme_check_valid(obj);

  SETUP_VAR_STACK_REMEMBERED(2);
  VAR_STACK_PUSH(0, p);
  VAR_STACK_PUSH(1, obj);

  

  
  if (((Scheme_Class_Object *)obj)->primflag)
    WITH_VAR_STACK(((os_wxFrame *)((Scheme_Class_Object *)obj)->primdata)->wxFrame::OnMenuClick());
  else
    WITH_VAR_STACK(((wxFrame *)((Scheme_Class_Object *)obj)->primdata)->OnMenuClick());

  
  
  return scheme_void;
}

static Scheme_Object *os_wxFrameOnMenuCommand(Scheme_Object *obj, int n,  Scheme_Object *p[])
{
  WXS_USE_ARGUMENT(n) WXS_USE_ARGUMENT(p)
  REMEMBER_VAR_STACK();
  objscheme_check_valid(obj);
  ExactLong x0;

  SETUP_VAR_STACK_REMEMBERED(2);
  VAR_STACK_PUSH(0, p);
  VAR_STACK_PUSH(1, obj);

  
  x0 = WITH_VAR_STACK(objscheme_unbundle_ExactLong(p[0], "on-menu-command in frame%"));

  
  if (((Scheme_Class_Object *)obj)->primflag)
    WITH_VAR_STACK(((os_wxFrame *)((Scheme_Class_Object *)obj)->primdata)->wxFrame::OnMenuCommand(x0));
  else
    WITH_VAR_STACK(((wxFrame *)((Scheme_Class_Object *)obj)->primdata)->OnMenuCommand(x0));

  
  
  return scheme_void;
}

static Scheme_Object *os_wxFrameOnClose(Scheme_Object *obj, int n,  Scheme_Object *p[])
{
  WXS_USE_ARGUMENT(n) WXS_USE_ARGUMENT(p)
  REMEMBER_VAR_STACK();
  Bool r;
  objscheme_check_valid(obj);

  SETUP_VAR_STACK_REMEMBERED(2);
  VAR_STACK_PUSH(0, p);
  VAR_STACK_PUSH(1, obj);

  

  
  if (((Scheme_Class_Object *)obj)->primflag)
    r = WITH_VAR_STACK(((os_wxFrame *)((Scheme_Class_Object *)obj)->primdata)->wxFrame::OnClose());
  else
    r = WITH_VAR_STACK(((wxFrame *)((Scheme_Class_Object *)obj)->primdata)->OnClose());

  
  
  return (r ? scheme_true : scheme_false);
}

static Scheme_Object *os_wxFrameOnActivate(Scheme_Object *obj, int n,  Scheme_Object *p[])
{
  WXS_USE_ARGUMENT(n) WXS_USE_ARGUMENT(p)
  REMEMBER_VAR_STACK();
  objscheme_check_valid(obj);
  Bool x0;

  SETUP_VAR_STACK_REMEMBERED(2);
  VAR_STACK_PUSH(0, p);
  VAR_STACK_PUSH(1, obj);

  
  x0 = WITH_VAR_STACK(objscheme_unbundle_bool(p[0], "on-activate in frame%"));

  
  if (((Scheme_Class_Object *)obj)->primflag)
    WITH_VAR_STACK(((os_wxFrame *)((Scheme_Class_Object *)obj)->primdata)->wxFrame::OnActivate(x0));
  else
    WITH_VAR_STACK(((wxFrame *)((Scheme_Class_Object *)obj)->primdata)->OnActivate(x0));

  
  
  return scheme_void;
}

static Scheme_Object *os_wxFrameframeMenu(Scheme_Object *obj, int n,  Scheme_Object *p[])
{
  WXS_USE_ARGUMENT(n) WXS_USE_ARGUMENT(p)
  REMEMBER_VAR_STACK();
  objscheme_check_valid(obj);

  SETUP_VAR_STACK_REMEMBERED(2);
  VAR_STACK_PUSH(0, p);
  VAR_STACK_PUSH(1, obj);

  

  
  WITH_VAR_STACK(frameMenu(((wxFrame *)((Scheme_Class_Object *)obj)->primdata)));

  
  
  return scheme_void;
}

static Scheme_Object *os_wxFrameCreateStatusLine(Scheme_Object *obj, int n,  Scheme_Object *p[])
{
  WXS_USE_ARGUMENT(n) WXS_USE_ARGUMENT(p)
  REMEMBER_VAR_STACK();
  objscheme_check_valid(obj);
  int x0;
  string x1 INIT_NULLED_OUT;

  SETUP_VAR_STACK_REMEMBERED(3);
  VAR_STACK_PUSH(0, p);
  VAR_STACK_PUSH(1, obj);
  VAR_STACK_PUSH(2, x1);

  
  if (n > 0) {
    x0 = WITH_VAR_STACK(objscheme_unbundle_integer(p[0], "create-status-line in frame%"));
  } else
    x0 = 1;
  if (n > 1) {
    x1 = (string)WITH_VAR_STACK(objscheme_unbundle_string(p[1], "create-status-line in frame%"));
  } else
    x1 = "status_line";

  
  WITH_VAR_STACK(((wxFrame *)((Scheme_Class_Object *)obj)->primdata)->CreateStatusLine(x0, x1));

  
  
  return scheme_void;
}

static Scheme_Object *os_wxFrameMaximize(Scheme_Object *obj, int n,  Scheme_Object *p[])
{
  WXS_USE_ARGUMENT(n) WXS_USE_ARGUMENT(p)
  REMEMBER_VAR_STACK();
  objscheme_check_valid(obj);
  Bool x0;

  SETUP_VAR_STACK_REMEMBERED(2);
  VAR_STACK_PUSH(0, p);
  VAR_STACK_PUSH(1, obj);

  
  x0 = WITH_VAR_STACK(objscheme_unbundle_bool(p[0], "maximize in frame%"));

  
  WITH_VAR_STACK(((wxFrame *)((Scheme_Class_Object *)obj)->primdata)->Maximize(x0));

  
  
  return scheme_void;
}

static Scheme_Object *os_wxFrameStatusLineExists(Scheme_Object *obj, int n,  Scheme_Object *p[])
{
  WXS_USE_ARGUMENT(n) WXS_USE_ARGUMENT(p)
  REMEMBER_VAR_STACK();
  Bool r;
  objscheme_check_valid(obj);

  SETUP_VAR_STACK_REMEMBERED(2);
  VAR_STACK_PUSH(0, p);
  VAR_STACK_PUSH(1, obj);

  

  
  r = WITH_VAR_STACK(((wxFrame *)((Scheme_Class_Object *)obj)->primdata)->StatusLineExists());

  
  
  return (r ? scheme_true : scheme_false);
}

static Scheme_Object *os_wxFrameIconized(Scheme_Object *obj, int n,  Scheme_Object *p[])
{
  WXS_USE_ARGUMENT(n) WXS_USE_ARGUMENT(p)
  REMEMBER_VAR_STACK();
  Bool r;
  objscheme_check_valid(obj);

  SETUP_VAR_STACK_REMEMBERED(2);
  VAR_STACK_PUSH(0, p);
  VAR_STACK_PUSH(1, obj);

  

  
  r = WITH_VAR_STACK(((wxFrame *)((Scheme_Class_Object *)obj)->primdata)->Iconized());

  
  
  return (r ? scheme_true : scheme_false);
}

static Scheme_Object *os_wxFrameSetStatusText(Scheme_Object *obj, int n,  Scheme_Object *p[])
{
  WXS_USE_ARGUMENT(n) WXS_USE_ARGUMENT(p)
  REMEMBER_VAR_STACK();
  objscheme_check_valid(obj);
  string x0 INIT_NULLED_OUT;

  SETUP_VAR_STACK_REMEMBERED(3);
  VAR_STACK_PUSH(0, p);
  VAR_STACK_PUSH(1, obj);
  VAR_STACK_PUSH(2, x0);

  
  x0 = (string)WITH_VAR_STACK(objscheme_unbundle_string(p[0], "set-status-text in frame%"));

  
  WITH_VAR_STACK(((wxFrame *)((Scheme_Class_Object *)obj)->primdata)->SetStatusText(x0));

  
  
  return scheme_void;
}

#if  HAS_GET_MENU_BAR
static Scheme_Object *os_wxFrameGetMenuBar(Scheme_Object *obj, int n,  Scheme_Object *p[])
{
  WXS_USE_ARGUMENT(n) WXS_USE_ARGUMENT(p)
  REMEMBER_VAR_STACK();
  class wxMenuBar* r;
  objscheme_check_valid(obj);
#if  HAS_GET_MENU_BAR

  SETUP_VAR_STACK_REMEMBERED(2);
  VAR_STACK_PUSH(0, p);
  VAR_STACK_PUSH(1, obj);

  

  
  r = WITH_VAR_STACK(((wxFrame *)((Scheme_Class_Object *)obj)->primdata)->GetMenuBar());

  
  
#else
 scheme_signal_error("%s: provided arglist unsupported on this platform", "get-menu-bar in frame%");
#endif
  return WITH_REMEMBERED_STACK(objscheme_bundle_wxMenuBar(r));
}
#endif

static Scheme_Object *os_wxFrameSetMenuBar(Scheme_Object *obj, int n,  Scheme_Object *p[])
{
  WXS_USE_ARGUMENT(n) WXS_USE_ARGUMENT(p)
  REMEMBER_VAR_STACK();
  objscheme_check_valid(obj);
  class wxMenuBar* x0 INIT_NULLED_OUT;

  SETUP_VAR_STACK_REMEMBERED(3);
  VAR_STACK_PUSH(0, p);
  VAR_STACK_PUSH(1, obj);
  VAR_STACK_PUSH(2, x0);

  
  x0 = WITH_VAR_STACK(objscheme_unbundle_wxMenuBar(p[0], "set-menu-bar in frame%", 0));

  if (GET_THE_MENU_BAR(((wxFrame *)((Scheme_Class_Object *)obj)->primdata))) return scheme_void;
  WITH_VAR_STACK(((wxFrame *)((Scheme_Class_Object *)obj)->primdata)->SetMenuBar(x0));

  
  
  return scheme_void;
}

static Scheme_Object *os_wxFrameSetIcon(Scheme_Object *obj, int n,  Scheme_Object *p[])
{
  WXS_USE_ARGUMENT(n) WXS_USE_ARGUMENT(p)
  REMEMBER_VAR_STACK();
  objscheme_check_valid(obj);
  class wxBitmap* x0 INIT_NULLED_OUT;
  class wxBitmap* x1 INIT_NULLED_OUT;
  int x2;

  SETUP_VAR_STACK_REMEMBERED(4);
  VAR_STACK_PUSH(0, p);
  VAR_STACK_PUSH(1, obj);
  VAR_STACK_PUSH(2, x0);
  VAR_STACK_PUSH(3, x1);

  
  x0 = WITH_VAR_STACK(objscheme_unbundle_wxBitmap(p[0], "set-icon in frame%", 0));
  if (n > 1) {
    x1 = WITH_VAR_STACK(objscheme_unbundle_wxBitmap(p[1], "set-icon in frame%", 1));
  } else
    x1 = NULL;
  if (n > 2) {
    x2 = WITH_VAR_STACK(unbundle_symset_iconKind(p[2], "set-icon in frame%"));
  } else
    x2 = 0;

  if (x0 && !x0->Ok()) scheme_arg_mismatch(METHODNAME("frame%","set-icon"), "bad bitmap: ", p[0]);if (x1 && !x1->Ok()) scheme_arg_mismatch(METHODNAME("frame%","set-icon"), "bad bitmap: ", p[1]);if (x1 && (x1->GetDepth() != 1)) scheme_arg_mismatch(METHODNAME("frame%","set-icon"), "mask bitmap is not monochrome: ", p[1]);
  WITH_VAR_STACK(((wxFrame *)((Scheme_Class_Object *)obj)->primdata)->SetIcon(x0, x1, x2));

  
  
  return scheme_void;
}

static Scheme_Object *os_wxFrameIconize(Scheme_Object *obj, int n,  Scheme_Object *p[])
{
  WXS_USE_ARGUMENT(n) WXS_USE_ARGUMENT(p)
  REMEMBER_VAR_STACK();
  objscheme_check_valid(obj);
  Bool x0;

  SETUP_VAR_STACK_REMEMBERED(2);
  VAR_STACK_PUSH(0, p);
  VAR_STACK_PUSH(1, obj);

  
  x0 = WITH_VAR_STACK(objscheme_unbundle_bool(p[0], "iconize in frame%"));

  
  WITH_VAR_STACK(((wxFrame *)((Scheme_Class_Object *)obj)->primdata)->Iconize(x0));

  
  
  return scheme_void;
}

static Scheme_Object *os_wxFrameSetTitle(Scheme_Object *obj, int n,  Scheme_Object *p[])
{
  WXS_USE_ARGUMENT(n) WXS_USE_ARGUMENT(p)
  REMEMBER_VAR_STACK();
  objscheme_check_valid(obj);
  string x0 INIT_NULLED_OUT;

  SETUP_VAR_STACK_REMEMBERED(3);
  VAR_STACK_PUSH(0, p);
  VAR_STACK_PUSH(1, obj);
  VAR_STACK_PUSH(2, x0);

  
  x0 = (string)WITH_VAR_STACK(objscheme_unbundle_string(p[0], "set-title in frame%"));

  
  WITH_VAR_STACK(((wxFrame *)((Scheme_Class_Object *)obj)->primdata)->SetTitle(x0));

  
  
  return scheme_void;
}

#if  NO_GET_MENU_BAR
static Scheme_Object *objscheme_wxFrame_Getwx_menu_bar(Scheme_Object *obj, int n,  Scheme_Object *p[])
{
  Scheme_Class_Object *cobj INIT_NULLED_OUT;
  class wxMenuBar* v;
  REMEMBER_VAR_STACK();

  objscheme_check_valid(obj);
  if (n) WITH_REMEMBERED_STACK(scheme_wrong_count("get-menu-bar in frame%", 0, 0, n, p));
  cobj = (Scheme_Class_Object *)obj;
  if (cobj->primflag)
    v = ((os_wxFrame *)cobj->primdata)->wxFrame::wx_menu_bar;
  else
    v = ((wxFrame *)cobj->primdata)->wx_menu_bar;

  return WITH_REMEMBERED_STACK(objscheme_bundle_wxMenuBar(v));
}
#endif

static Scheme_Object *os_wxFrame_ConstructScheme(Scheme_Object *obj, int n,  Scheme_Object *p[])
{
  SETUP_PRE_VAR_STACK(1);
  PRE_VAR_STACK_PUSH(0, obj);
  os_wxFrame *realobj INIT_NULLED_OUT;
  REMEMBER_VAR_STACK();
  class wxFrame* x0 INIT_NULLED_OUT;
  string x1 INIT_NULLED_OUT;
  int x2;
  int x3;
  int x4;
  int x5;
  int x6;
  string x7 INIT_NULLED_OUT;

  SETUP_VAR_STACK_PRE_REMEMBERED(6);
  VAR_STACK_PUSH(0, p);
  VAR_STACK_PUSH(1, obj);
  VAR_STACK_PUSH(2, realobj);
  VAR_STACK_PUSH(3, x0);
  VAR_STACK_PUSH(4, x1);
  VAR_STACK_PUSH(5, x7);

  
  if ((n < 2) ||(n > 8)) 
    WITH_VAR_STACK(scheme_wrong_count("initialization in frame%", 2, 8, n, p));
  x0 = WITH_VAR_STACK(objscheme_unbundle_wxFrame(p[0], "initialization in frame%", 1));
  x1 = (string)WITH_VAR_STACK(objscheme_unbundle_string(p[1], "initialization in frame%"));
  if (n > 2) {
    x2 = WITH_VAR_STACK(objscheme_unbundle_integer(p[2], "initialization in frame%"));
  } else
    x2 = -1;
  if (n > 3) {
    x3 = WITH_VAR_STACK(objscheme_unbundle_integer(p[3], "initialization in frame%"));
  } else
    x3 = -1;
  if (n > 4) {
    x4 = WITH_VAR_STACK(objscheme_unbundle_integer(p[4], "initialization in frame%"));
  } else
    x4 = -1;
  if (n > 5) {
    x5 = WITH_VAR_STACK(objscheme_unbundle_integer(p[5], "initialization in frame%"));
  } else
    x5 = -1;
  if (n > 6) {
    x6 = WITH_VAR_STACK(unbundle_symset_frameStyle(p[6], "initialization in frame%"));
  } else
    x6 = 0;
  if (n > 7) {
    x7 = (string)WITH_VAR_STACK(objscheme_unbundle_string(p[7], "initialization in frame%"));
  } else
    x7 = "frame";

  WITH_VAR_STACK(wxsCheckEventspace(METHODNAME("frame%","initialization")));if (!x4) x4 = -1;if (!x5) x5 = -1;
  realobj = WITH_VAR_STACK(new os_wxFrame CONSTRUCTOR_ARGS((x0, x1, x2, x3, x4, x5, x6, x7)));
#ifdef MZ_PRECISE_GC
  WITH_VAR_STACK(realobj->gcInit_wxFrame(x0, x1, x2, x3, x4, x5, x6, x7));
#endif
  realobj->__gc_external = (void *)obj;
  objscheme_note_creation(obj);
  
  
  ((Scheme_Class_Object *)obj)->primdata = realobj;
  WITH_REMEMBERED_STACK(objscheme_register_primpointer(obj, &((Scheme_Class_Object *)obj)->primdata));
  ((Scheme_Class_Object *)obj)->primflag = 1;
  return obj;
}

void objscheme_setup_wxFrame(void *env)
{
  SETUP_VAR_STACK(1);
  VAR_STACK_PUSH(0, env);

  wxREGGLOB(os_wxFrame_class);

  os_wxFrame_class = WITH_VAR_STACK(objscheme_def_prim_class(env, "frame%", "window%", os_wxFrame_ConstructScheme, 22));

  WITH_VAR_STACK(scheme_add_method_w_arity(os_wxFrame_class, "on-drop-file", os_wxFrameOnDropFile, 1, 1));
  WITH_VAR_STACK(scheme_add_method_w_arity(os_wxFrame_class, "pre-on-event", os_wxFramePreOnEvent, 2, 2));
  WITH_VAR_STACK(scheme_add_method_w_arity(os_wxFrame_class, "pre-on-char", os_wxFramePreOnChar, 2, 2));
  WITH_VAR_STACK(scheme_add_method_w_arity(os_wxFrame_class, "on-size", os_wxFrameOnSize, 2, 2));
  WITH_VAR_STACK(scheme_add_method_w_arity(os_wxFrame_class, "on-set-focus", os_wxFrameOnSetFocus, 0, 0));
  WITH_VAR_STACK(scheme_add_method_w_arity(os_wxFrame_class, "on-kill-focus", os_wxFrameOnKillFocus, 0, 0));
  WITH_VAR_STACK(scheme_add_method_w_arity(os_wxFrame_class, "on-menu-click", os_wxFrameOnMenuClick, 0, 0));
  WITH_VAR_STACK(scheme_add_method_w_arity(os_wxFrame_class, "on-menu-command", os_wxFrameOnMenuCommand, 1, 1));
  WITH_VAR_STACK(scheme_add_method_w_arity(os_wxFrame_class, "on-close", os_wxFrameOnClose, 0, 0));
  WITH_VAR_STACK(scheme_add_method_w_arity(os_wxFrame_class, "on-activate", os_wxFrameOnActivate, 1, 1));
  WITH_VAR_STACK(scheme_add_method_w_arity(os_wxFrame_class, "system-menu", os_wxFrameframeMenu, 0, 0));
  WITH_VAR_STACK(scheme_add_method_w_arity(os_wxFrame_class, "create-status-line", os_wxFrameCreateStatusLine, 0, 2));
  WITH_VAR_STACK(scheme_add_method_w_arity(os_wxFrame_class, "maximize", os_wxFrameMaximize, 1, 1));
  WITH_VAR_STACK(scheme_add_method_w_arity(os_wxFrame_class, "status-line-exists?", os_wxFrameStatusLineExists, 0, 0));
  WITH_VAR_STACK(scheme_add_method_w_arity(os_wxFrame_class, "iconized?", os_wxFrameIconized, 0, 0));
  WITH_VAR_STACK(scheme_add_method_w_arity(os_wxFrame_class, "set-status-text", os_wxFrameSetStatusText, 1, 1));
#if  HAS_GET_MENU_BAR
  WITH_VAR_STACK(scheme_add_method_w_arity(os_wxFrame_class, "get-menu-bar", os_wxFrameGetMenuBar, 0, 0));
#endif
  WITH_VAR_STACK(scheme_add_method_w_arity(os_wxFrame_class, "set-menu-bar", os_wxFrameSetMenuBar, 1, 1));
  WITH_VAR_STACK(scheme_add_method_w_arity(os_wxFrame_class, "set-icon", os_wxFrameSetIcon, 1, 3));
  WITH_VAR_STACK(scheme_add_method_w_arity(os_wxFrame_class, "iconize", os_wxFrameIconize, 1, 1));
  WITH_VAR_STACK(scheme_add_method_w_arity(os_wxFrame_class, "set-title", os_wxFrameSetTitle, 1, 1));

#if  NO_GET_MENU_BAR
  WITH_VAR_STACK(scheme_add_method_w_arity(os_wxFrame_class,"get-menu-bar", objscheme_wxFrame_Getwx_menu_bar, 0, 0));
#endif

  WITH_VAR_STACK(scheme_made_class(os_wxFrame_class));

  WITH_VAR_STACK(objscheme_install_bundler((Objscheme_Bundler)objscheme_bundle_wxFrame, wxTYPE_FRAME));

}

int objscheme_istype_wxFrame(Scheme_Object *obj, const char *stop, int nullOK)
{
  REMEMBER_VAR_STACK();
  if (nullOK && XC_SCHEME_NULLP(obj)) return 1;
  if (SAME_TYPE(SCHEME_TYPE(obj), scheme_object_type)
      && scheme_is_subclass(((Scheme_Class_Object *)obj)->sclass,          os_wxFrame_class))
    return 1;
  else {
    if (!stop)
       return 0;
    WITH_REMEMBERED_STACK(scheme_wrong_type(stop, nullOK ? "frame% object or " XC_NULL_STR: "frame% object", -1, 0, &obj));
    return 0;
  }
}

Scheme_Object *objscheme_bundle_wxFrame(class wxFrame *realobj)
{
  Scheme_Class_Object *obj INIT_NULLED_OUT;
  Scheme_Object *sobj INIT_NULLED_OUT;

  if (!realobj) return XC_SCHEME_NULL;

  if (realobj->__gc_external)
    return (Scheme_Object *)realobj->__gc_external;

  SETUP_VAR_STACK(2);
  VAR_STACK_PUSH(0, obj);
  VAR_STACK_PUSH(1, realobj);

  if ((realobj->__type != wxTYPE_FRAME) && (sobj = WITH_VAR_STACK(objscheme_bundle_by_type(realobj, realobj->__type))))
    return sobj;
  obj = (Scheme_Class_Object *)WITH_VAR_STACK(scheme_make_uninited_object(os_wxFrame_class));

  obj->primdata = realobj;
  WITH_VAR_STACK(objscheme_register_primpointer(obj, &obj->primdata));
  obj->primflag = 0;

  realobj->__gc_external = (void *)obj;
  return (Scheme_Object *)obj;
}

class wxFrame *objscheme_unbundle_wxFrame(Scheme_Object *obj, const char *where, int nullOK)
{
  if (nullOK && XC_SCHEME_NULLP(obj)) return NULL;

  REMEMBER_VAR_STACK();

  (void)objscheme_istype_wxFrame(obj, where, nullOK);
  Scheme_Class_Object *o = (Scheme_Class_Object *)obj;
  WITH_REMEMBERED_STACK(objscheme_check_valid(obj));
  if (o->primflag)
    return (os_wxFrame *)o->primdata;
  else
    return (wxFrame *)o->primdata;
}

#ifdef MZ_PRECISE_GC
END_XFORM_SKIP;
#endif