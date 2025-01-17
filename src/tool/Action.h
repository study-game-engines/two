//  Copyright (c) 2023 Hugo Amiard hugo.amiard@laposte.net
//  This software is provided 'as-is' under the zlib License, see the LICENSE.txt file.
//  This notice and the license may not be removed or altered from any source distribution.

#pragma once

#include <tool/Forward.h>

namespace two
{
	export_ class refl_ TWO_TOOL_EXPORT EditorAction
	{
	public:
		virtual ~EditorAction() {}
		virtual void apply() = 0;
		virtual void undo() = 0;
	};
}
