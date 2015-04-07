// Aseprite
// Copyright (C) 2001-2015  David Capello
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License version 2 as
// published by the Free Software Foundation.

#ifndef APP_UI_ANI_CONTROLS_H_INCLUDED
#define APP_UI_ANI_CONTROLS_H_INCLUDED
#pragma once

#include "app/ui/button_set.h"
#include "ui/widget.h"

#include <string>
#include <vector>

namespace app {
  class Editor;

  class AniControls : public ButtonSet {
  public:
    AniControls();

    void updateUsingEditor(Editor* editor);

  private:
    void onPlayButton();
  };

} // namespace app

#endif
