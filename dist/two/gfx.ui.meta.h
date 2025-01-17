#pragma once

#include <two/infra.h>
#include <two/refl.h>


#if !defined TWO_MODULES || defined TWO_TYPE_LIB
#endif

#ifndef TWO_GFX_UI_META_EXPORT
#define TWO_GFX_UI_META_EXPORT TWO_IMPORT
#endif

namespace two
{
	export_ class TWO_GFX_UI_META_EXPORT two_gfx_ui : public two::Module
	{
	private:
		two_gfx_ui();
		
	public:
		static two_gfx_ui& m() { static two_gfx_ui instance; return instance; }
	};
}

#ifdef TWO_GFX_UI_MODULE
extern "C"
TWO_GFX_UI_META_EXPORT Module& getModule();
#endif

#if !defined TWO_MODULES || defined TWO_TYPE_LIB
#endif

namespace two
{
	export_ template <> inline void to_value(const string& str, two::ui::OrbitMode& val) { val = two::ui::OrbitMode(enu<two::ui::OrbitMode>().value(str.c_str())); };
	export_ template <> inline void to_string(const two::ui::OrbitMode& val, string& str) { str = enu<two::ui::OrbitMode>().name(uint32_t(val)); };
	
	
}
