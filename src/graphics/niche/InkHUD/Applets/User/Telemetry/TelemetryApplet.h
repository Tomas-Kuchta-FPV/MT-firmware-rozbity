#ifdef MESHTASTIC_INCLUDE_INKHUD

#pragma once

#include "configuration.h"

#include "graphics/niche/InkHUD/Applet.h"

namespace NicheGraphics::InkHUD
{

class TelemetryApplet : public Applet
{
	public:
		TelemetryApplet();
		void onRender(bool full) override;
};

} // namespace NicheGraphics::InkHUD

#endif

