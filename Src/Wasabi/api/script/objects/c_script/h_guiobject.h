/* This file was generated by Maki Compiler, do not edit manually */

#ifndef __HOOK_GUIOBJECT_H
#define __HOOK_GUIOBJECT_H

#include "h_rootobj.h"

#define H_GUIOBJECT_PARENT H_RootObject

class H_GuiObject : public H_GUIOBJECT_PARENT {

public:

  H_GuiObject(ScriptObject *o);
  H_GuiObject();
  virtual ~H_GuiObject();
  virtual void H_hook(ScriptObject *o);
  ScriptObject *getHookedObject();

  virtual int eventCallback(ScriptObject *object, int dlfid, scriptVar **params, int nparams);
  virtual void hook_onSetVisible(int onoff) {  }
  virtual void hook_onLeftButtonUp(int x, int y) {  }
  virtual void hook_onLeftButtonDown(int x, int y) {  }
  virtual void hook_onRightButtonUp(int x, int y) {  }
  virtual void hook_onRightButtonDown(int x, int y) {  }
  virtual void hook_onRightButtonDblClk(int x, int y) {  }
  virtual void hook_onLeftButtonDblClk(int x, int y) {  }
  virtual void hook_onMouseMove(int x, int y) {  }
  virtual void hook_onEnterArea() {  }
  virtual void hook_onLeaveArea() {  }
  virtual void hook_onEnable(int onoff) {  }
  virtual void hook_onResize(int x, int y, int w, int h) {  }
  virtual void hook_onTargetReached() {  }
  virtual void hook_onStartup() {  }
  virtual void hook_onChar(const wchar_t *c) {  }
  virtual void hook_onAccelerator(const wchar_t *accel) {  }
  virtual void hook_onKeyDown(int vk_code) {  }
  virtual void hook_onKeyUp(int vk_code) {  }
  virtual void hook_onGetFocus() {  }
  virtual void hook_onKillFocus() {  }
  virtual void hook_onAction(const wchar_t *action, const wchar_t *param, int x, int y, int p1, int p2, ScriptObject *source) {  }

  private:

  ScriptObject *obj;
  int inited;
  static int loaded;
  static int onsetvisible_id;
  static int onleftbuttonup_id;
  static int onleftbuttondown_id;
  static int onrightbuttonup_id;
  static int onrightbuttondown_id;
  static int onrightbuttondblclk_id;
  static int onleftbuttondblclk_id;
  static int onmousemove_id;
  static int onenterarea_id;
  static int onleavearea_id;
  static int onenable_id;
  static int onresize_id;
  static int ontargetreached_id;
  static int onstartup_id;
  static int onchar_id;
  static int onaccelerator_id;
  static int onkeydown_id;
  static int onkeyup_id;
  static int ongetfocus_id;
  static int onkillfocus_id;
  static int onaction_id;
};

#endif