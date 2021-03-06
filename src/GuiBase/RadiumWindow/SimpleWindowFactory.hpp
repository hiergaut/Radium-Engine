#pragma once
#include <GuiBase/BaseApplication.hpp>
#include <GuiBase/RaGuiBase.hpp>
#include <GuiBase/RadiumWindow/SimpleWindow.hpp>

namespace Ra {
namespace GuiBase {

/**
 * Factory for a minimal Radium Window.
 * This factory is to be used when instanciating a Ra::GuiBase::BaseApplication to serve
 * as display controler.
 */
class SimpleWindowFactory : public Ra::GuiBase::BaseApplication::WindowFactory
{
  public:
    using Ra::GuiBase::BaseApplication::WindowFactory::WindowFactory;
    inline Ra::GuiBase::MainWindowInterface* createMainWindow() const override {
        return new SimpleWindow();
    }
};

} // namespace GuiBase
} // namespace Ra
