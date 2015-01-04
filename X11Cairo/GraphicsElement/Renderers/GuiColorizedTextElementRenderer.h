#ifndef __GAC_X11CAIRO_GUI_COLORIZED_TEXT_ELEMENT_RENDERER_H
#define __GAC_X11CAIRO_GUI_COLORIZED_TEXT_ELEMENT_RENDERER_H

#include <GacUI.h>
#include "../X11CairoRenderTarget.h"

namespace vl
{
	namespace presentation
	{
		namespace elements_x11cairo
		{
			using namespace elements;
			class GuiColorizedTextElementRenderer: public Object, public IGuiGraphicsRenderer
			{
				DEFINE_GUI_GRAPHICS_RENDERER(GuiColorizedTextElement, GuiColorizedTextElementRenderer, IX11CairoRenderTarget);

			protected:
				cairo_t* cairoContext;
				PangoFontDescription* pangoFontDesc;
				PangoAttrList* attrList;

			public:
				GuiColorizedTextElementRenderer();

				void InitializeInternal();
				void FinalizeInternal();
				void Render(Rect bounds);
				void OnElementStateChanged();
				void RenderTargetChangedInternal(IX11CairoRenderTarget* oldRT, IX11CairoRenderTarget* newRT);
			};
		}
	}
}

#endif
