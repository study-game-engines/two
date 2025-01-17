#pragma once

#include <two/infra.h>
#include <two/refl.h>


#if !defined TWO_MODULES || defined TWO_TYPE_LIB
#endif

#ifndef TWO_GFX_PBR_META_EXPORT
#define TWO_GFX_PBR_META_EXPORT TWO_IMPORT
#endif

namespace two
{
	export_ class TWO_GFX_PBR_META_EXPORT two_gfx_pbr : public two::Module
	{
	private:
		two_gfx_pbr();
		
	public:
		static two_gfx_pbr& m() { static two_gfx_pbr instance; return instance; }
	};
}

#ifdef TWO_GFX_PBR_MODULE
extern "C"
TWO_GFX_PBR_META_EXPORT Module& getModule();
#endif

#if !defined TWO_MODULES || defined TWO_TYPE_LIB
#endif

namespace two
{
	export_ template <> inline void to_value(const string& str, two::TonemapMode& val) { val = two::TonemapMode(enu<two::TonemapMode>().value(str.c_str())); };
	export_ template <> inline void to_string(const two::TonemapMode& val, string& str) { str = enu<two::TonemapMode>().name(uint32_t(val)); };
	
	
}
