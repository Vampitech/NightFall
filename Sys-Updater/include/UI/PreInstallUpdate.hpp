#pragma once

#include <borealis.hpp>

class PreInstallUpdatePage : public brls::View
{
  private:
    brls::Button* button;
    brls::Label* label;

  public:
    PreInstallUpdatePage(brls::StagedAppletFrame* frame, std::string label);
    ~PreInstallUpdatePage();

    void draw(NVGcontext* vg, int x, int y, unsigned width, unsigned height, brls::Style* style, brls::FrameContext* ctx) override;
    void layout(NVGcontext* vg, brls::Style* style, brls::FontStash* stash) override;
    brls::View* getDefaultFocus() override;
};