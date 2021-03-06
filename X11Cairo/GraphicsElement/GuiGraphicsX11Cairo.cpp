#include "GuiGraphicsX11Cairo.h"


namespace vl
{
	namespace presentation
	{
		namespace elements_x11cairo
		{
			void RegisterX11CairoElementRenderers()
			{
				GuiSolidBackgroundElementRenderer::Register();
				GuiSolidLabelElementRenderer::Register();
				GuiSolidBorderElementRenderer::Register();
				GuiGradientBackgroundElementRenderer::Register();
				GuiPolygonElementRenderer::Register();
			}
		}
	}
}
