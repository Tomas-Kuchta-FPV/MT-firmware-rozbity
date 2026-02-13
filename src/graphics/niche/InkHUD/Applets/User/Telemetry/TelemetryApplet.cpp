#ifdef MESHTASTIC_INCLUDE_INKHUD

#include "./TelemetryApplet.h"

using namespace NicheGraphics;

InkHUD::TelemetryApplet::TelemetryApplet()
{
	name = "Telemetry";
}

void InkHUD::TelemetryApplet::onRender(bool full)
{
	// Minimal empty screen for now - intentionally left blank.
	// Future telemetry drawing will go here.
}

#endif

