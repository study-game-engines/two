//  Copyright (c) 2023 Hugo Amiard hugo.amiard@laposte.net
//  This software is provided 'as-is' under the zlib License, see the LICENSE.txt file.
//  This notice and the license may not be removed or altered from any source distribution.

#pragma once

#include <uio/Forward.h>

namespace two
{
	export_ TWO_UIO_EXPORT string object_name(Ref object);
	export_ TWO_UIO_EXPORT string object_icon(Ref object);

	export_ TWO_UIO_EXPORT Widget& object_button(Widget& parent, Ref object);
	export_ TWO_UIO_EXPORT Widget& object_item(Widget& parent, Ref object);
	export_ TWO_UIO_EXPORT bool object_item(Widget& parent, Ref object, Ref& selection);
	export_ TWO_UIO_EXPORT bool object_item(Widget& parent, Ref object, vector<Ref>& selection);

	export_ TWO_UIO_EXPORT Widget& entity_item(Widget& parent, Entity entity);
}
