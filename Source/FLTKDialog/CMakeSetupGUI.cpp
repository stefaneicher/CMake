// generated by Fast Light User Interface Designer (fluid) version 1.0010

#include "CMakeSetupGUI.h"

inline void CMakeSetupGUI::cb_sourcePathTextInput_i(Fl_Input*, void*) {
  SetSourcePath( sourcePathTextInput->value() );
}
void CMakeSetupGUI::cb_sourcePathTextInput(Fl_Input* o, void* v) {
  ((CMakeSetupGUI*)(o->parent()->user_data()))->cb_sourcePathTextInput_i(o,v);
}

inline void CMakeSetupGUI::cb_Browse_i(Fl_Button*, void*) {
  BrowseForSourcePath();
}
void CMakeSetupGUI::cb_Browse(Fl_Button* o, void* v) {
  ((CMakeSetupGUI*)(o->parent()->user_data()))->cb_Browse_i(o,v);
}

inline void CMakeSetupGUI::cb_binaryPathTextInput_i(Fl_Input*, void*) {
  SetBinaryPath( binaryPathTextInput->value() );
}
void CMakeSetupGUI::cb_binaryPathTextInput(Fl_Input* o, void* v) {
  ((CMakeSetupGUI*)(o->parent()->user_data()))->cb_binaryPathTextInput_i(o,v);
}

inline void CMakeSetupGUI::cb_Browse1_i(Fl_Button*, void*) {
  BrowseForBinaryPath();
}
void CMakeSetupGUI::cb_Browse1(Fl_Button* o, void* v) {
  ((CMakeSetupGUI*)(o->parent()->user_data()))->cb_Browse1_i(o,v);
}

inline void CMakeSetupGUI::cb_Close_i(Fl_Button*, void*) {
  Close();
}
void CMakeSetupGUI::cb_Close(Fl_Button* o, void* v) {
  ((CMakeSetupGUI*)(o->parent()->user_data()))->cb_Close_i(o,v);
}

inline void CMakeSetupGUI::cb_Build_i(Fl_Button*, void*) {
  BuildProjectFiles();
}
void CMakeSetupGUI::cb_Build(Fl_Button* o, void* v) {
  ((CMakeSetupGUI*)(o->parent()->user_data()))->cb_Build_i(o,v);
}

CMakeSetupGUI::CMakeSetupGUI() {
  Fl_Window* w;
  { Fl_Window* o = dialogWindow = new Fl_Window(563, 363, "CMakeSetupDialog");
    w = o;
    o->user_data((void*)(this));
    { Fl_Input* o = sourcePathTextInput = new Fl_Input(219, 15, 200, 20, "Where is the source code: ");
      o->labelsize(11);
      o->textsize(11);
      o->callback((Fl_Callback*)cb_sourcePathTextInput);
      o->when(FL_WHEN_ENTER_KEY);
    }
    { Fl_Button* o = new Fl_Button(426, 14, 65, 22, "Browse...");
      o->labelsize(11);
      o->callback((Fl_Callback*)cb_Browse);
    }
    { Fl_Input* o = binaryPathTextInput = new Fl_Input(219, 50, 200, 20, "Where do you want to build the binaries: ");
      o->labelsize(11);
      o->textsize(11);
      o->callback((Fl_Callback*)cb_binaryPathTextInput);
      o->when(FL_WHEN_ENTER_KEY);
    }
    { Fl_Button* o = new Fl_Button(426, 50, 65, 22, "Browse...");
      o->labelsize(11);
      o->callback((Fl_Callback*)cb_Browse1);
    }
    { Fl_Button* o = new Fl_Button(345, 331, 77, 23, "Close");
      o->labelsize(11);
      o->callback((Fl_Callback*)cb_Close);
    }
    { Fl_Button* o = new Fl_Button(123, 332, 101, 23, "Build Project Files");
      o->labelsize(11);
      o->callback((Fl_Callback*)cb_Build);
    }
    { Fl_Group* o = new Fl_Group(25, 80, 515, 222);
      o->box(FL_ENGRAVED_FRAME);
      o->labelsize(11);
      o->align(FL_ALIGN_CENTER);
      { Fl_Scroll* o = new Fl_Scroll(40, 98, 485, 190, "Cache Values");
        o->type(6);
        o->box(FL_DOWN_BOX);
        o->labelsize(11);
        o->align(FL_ALIGN_TOP_LEFT);
        o->end();
      }
      o->end();
    }
    { Fl_Box* o = new Fl_Box(141, 305, 275, 25, "Right click on cache entries for additional options");
      o->labelsize(11);
    }
    o->end();
  }
}

CMakeSetupGUI::~CMakeSetupGUI() {
}

void CMakeSetupGUI::Close(void) {
}

void CMakeSetupGUI::BuildProjectFiles(void) {
}

void CMakeSetupGUI::BrowseForSourcePath(void) {
}

void CMakeSetupGUI::BrowseForBinaryPath(void) {
}

void CMakeSetupGUI::Show(void) {
}

void CMakeSetupGUI::SetBinaryPath(const char *) {
}

void CMakeSetupGUI::SetSourcePath(const char *) {
}
